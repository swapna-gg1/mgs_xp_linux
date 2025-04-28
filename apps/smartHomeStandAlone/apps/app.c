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
    GError *pipeline_error = NULL;
    pipeline = gst_parse_launch(
        "filesrc location=/root/securityFootage.mp4 "
        "! qtdemux "
        "! decodebin "
        "! videoconvert "
        "! videoscale "
        "! video/x-raw,width=350,height=250,format=RGB16 "
        "! appsink name=sink sync=false emit-signals=true",
        &pipeline_error);

      printf("Pipeline created successfully.\n");

      // Get the appsink element and connect the "new-sample" signal
      appsink = gst_bin_get_by_name(GST_BIN(pipeline), "sink");
      if (!appsink) {
          printf("[ERROR] Failed to get appsink element from pipeline.\n");
          return;
      }
      printf("appsink element found.\n");

      g_object_set(appsink, "max-buffers", 1, "drop", TRUE, NULL);
      g_signal_connect(appsink, "new-sample", G_CALLBACK(on_new_sample), NULL);
      printf("Connected new-sample callback.\n");

      // Set the pipeline to PLAYING state and check result
      GstStateChangeReturn ret = gst_element_set_state(pipeline, GST_STATE_PLAYING);
      if (ret == GST_STATE_CHANGE_FAILURE) {
          printf("[ERROR] Failed to set pipeline to PLAYING state.\n");
          return;
      } else {
          printf("Pipeline set to PLAYING (ret = %d).\n", ret);
      }

      // Get the bus to handle messages
      bus = gst_element_get_bus(pipeline);
      printf("Message bus acquired.\n");
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
            
            while ((msg = gst_bus_pop(bus)) != NULL) 
            {
                switch (GST_MESSAGE_TYPE(msg)) 
                {
                    case GST_MESSAGE_EOS:
                        // Loop video
                        //gst_element_seek_simple(pipeline, GST_FORMAT_TIME, GST_SEEK_FLAG_FLUSH, 0);
                        gst_element_seek_simple(pipeline, GST_FORMAT_TIME, GST_SEEK_FLAG_FLUSH | GST_SEEK_FLAG_KEY_UNIT, 0);

                        break;
                    case GST_MESSAGE_ERROR: 
                        GError *err;
                        gchar *dbg;
                        gst_message_parse_error(msg, &err, &dbg);
                        printf("GStreamer error: %s\n", err->message);
                        printf("Debug info: %s\n", dbg ? dbg : "none");
                        g_error_free(err);
                        g_free(dbg);
                        break;
                
                    default:
                        break;
                }
                gst_message_unref(msg);
              }
            
            break;
        }


        /* The default state should never be executed. */
        default:
        {
            // Cleanup
            gst_object_unref(bus);
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
