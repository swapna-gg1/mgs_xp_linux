/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app.h"
#include <stdio.h>
// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;
GstElement *pipeline;
GMainLoop *loop;

struct gpiochip_info cinfo;
struct gpioline_info linfo;
struct gpiohandle_request req_out, req_in;
int fd, ret;


// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

static GstFlowReturn on_new_sample(GstElement *sink, gpointer user_data) {

    grabFrame(sink);
    
    return GST_FLOW_OK;
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* Add a local function to get a list of devices and their state. For now we 
 * will hard-code. 
 */

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;

    APP_Screen_Init();
    GstElement *appsink;

   
    // Initialize GStreamer
    gst_init(NULL, NULL);
   
    // Create a new main loop for GStreamer
    loop = g_main_loop_new(NULL, FALSE);
    
    // Parse the GStreamer pipeline
    pipeline = gst_parse_launch(
        "udpsrc port=5000 buffer-size=100000 ! application/x-rtp, encoding-name=JPEG, payload=26, clock-rate=90000 "
        "! rtpjpegdepay ! jpegdec ! videoconvert ! videoscale "
        "! video/x-raw,format=BGRA,width=350,height=250 "
        "! appsink name=sink sync=false", NULL);
        
    // Get the appsink element and connect the "new-sample" signal
    appsink = gst_bin_get_by_name(GST_BIN(pipeline), "sink");
    g_object_set(appsink, "emit-signals", TRUE, NULL);
    g_signal_connect(appsink, "new-sample", G_CALLBACK(on_new_sample), NULL);
    
    // Set the pipeline to PLAYING state
    gst_element_set_state(pipeline, GST_STATE_PLAYING);
    /*g_main_loop_run(loop);
   
    gst_element_set_state(pipeline, GST_STATE_NULL);
    gst_object_unref(pipeline);
    g_main_loop_unref(loop);*/
    
    /* Open gpio */
    fd = open("/dev/gpiochip0", 0);
    if(fd<0)
      printf("Error opening GPIO= %d\r\n", fd);
    else
    {
      /* Get handles for o/p GPIOS to control light and fan */
      req_out.lineoffsets[0] = 104;
      req_out.lineoffsets[1] = 105;
      req_out.lines = 2;
      req_out.flags = GPIOHANDLE_REQUEST_OUTPUT;
      strcpy(req_out.consumer_label, "PD8_PD9_TOGGLE_LIGHT_FAN");
      
      ret = ioctl(fd, GPIO_GET_LINEHANDLE_IOCTL, &req_out);
      
      
      /* Get handle for i/p GPIO to get sensor state */
      req_in.lineoffsets[0] = 15;
      req_in.lines = 1;
      req_in.flags = GPIOHANDLE_REQUEST_INPUT;
      strcpy(req_in.consumer_label, "PA15_GET_SENSOR_STATE");      
      ret = ioctl(fd, GPIO_GET_LINEHANDLE_IOCTL, &req_in);
          
      if(ret< 0)
      {
        printf("Failed to get line handle= %d\r\n", ret);
        close(fd);
      }
  
    }

}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;


            if (appInitialized)
            {

                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
            // Your main loop code here
            // Process GStreamer events without blocking the main loop
            g_main_context_iteration(NULL, FALSE);
            
            break;
        }


        /* The default state should never be executed. */
        default:
        {
            // Cleanup
            gst_element_set_state(pipeline, GST_STATE_NULL);
            gst_object_unref(pipeline);
            g_main_loop_unref(loop);
            close(fd);
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
