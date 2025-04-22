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
GstBus *bus;



// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************


static GstFlowReturn on_new_sample(GstAppSink *appsink, gpointer user_data) 
{
    grabFrame(appsink);
    
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
    GstElement *appsink;
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;
    
    APP_Screen_Init();
    // Initialize GStreamer
    gst_init(NULL, NULL);
    printf("GStreamer initialized.\n");

    // Create a new main loop for GStreamer
    loop = g_main_loop_new(NULL, FALSE);
    printf("MainLoop created.\n");

    // Parse the GStreamer pipeline
    printf("Setting pipeline...\n");
    
#if 1
pipeline = gst_parse_launch(
    "udpsrc port=5000 buffer-size=100000 "
    "! application/x-rtp, encoding-name=JPEG, payload=26, clock-rate=90000 "
    "! rtpjpegdepay "
    "! jpegdec "
    "! videoconvert "
    "! videoscale "
    "! videoflip method=rotate-180 "
    "! videoconvert "
    "! video/x-raw,format=RGB16,width=350,height=250 "
    "! appsink name=sink sync=false", NULL);
#endif
    // Get the appsink element and connect the "new-sample" signal
    appsink = gst_bin_get_by_name(GST_BIN(pipeline), "sink");
    g_object_set(appsink, "emit-signals", TRUE, NULL);
    g_signal_connect(appsink, "new-sample", G_CALLBACK(on_new_sample), NULL);
    
    // Set the pipeline to PLAYING state
    gst_element_set_state(pipeline, GST_STATE_PLAYING);
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{ 
    // Handle bus messages manually (e.g. EOS, errors)
    GstMessage *msg;
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
                printf("Starting APP_STATE_SERVICE_TASKS\r\n");
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
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
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
