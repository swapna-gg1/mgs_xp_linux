// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app.h"
#include "gfx/legato/widget/rectangle/legato_widget_rectangle.h"
#include "gfx/legato/widget/circle/legato_widget_circle.h"
#include "gfx/legato/generated/le_gen_init.h"
#include <stdio.h>
// *****************************************************************************
// *****************************************************************************
// Section: Global variables
// *****************************************************************************
// *****************************************************************************
#define MAX_TEMP_LEN     3

//static SYS_TIME_HANDLE tickTimer;
//static SYS_TIME_HANDLE secTimer;
static uint32_t prev_tick, tick, prev_stick=0, stick =0;
//static unsigned int tickIntervalMS = 50;
//static unsigned int secIntervalMS = 1000;
extern APP_DATA appData;


/* Temp variable to track sensor change */
uint8_t curSensorState;


/* Temperature */
leFixedString p_TempValstring;
static char cTSliderCharBuffer[MAX_TEMP_LEN];
static leChar p_TSliderValBuff[MAX_TEMP_LEN] = {0};


/* Light */
leFixedString p_Lightstring;
static char cLightsCharBuffer[2];
static leChar p_LightsBuff[2] = {0};

/* Devices - Fan */
leFixedString p_Fanstring;
static char cFanCharBuffer[2];
static leChar p_FanBuff[2] = {0};


/* Window Sensor */
leFixedString p_Windowstring;
static char cWindowCharBuffer[2];
static leChar p_WindowValBuff[2] = {0};

static int16_t currentT;


struct gpiohandle_data datain, dataout;
extern struct gpiohandle_request req_out, req_in;

/* Some temporary variables to make demo implementation easy.
 * This needs to be handled with a proper data structure 
 * eventually.


 */
bool device1State; 
bool device2State;
uint8_t lights_on, dev_active, windows_open;

/* Some variables to display camera feed */
gfxIOCTLArg_Value arg;
gfxPixelBuffer pixelBuffer;
gfxDisplayDriver* gfxDisp;
uint8_t fbuf[350*250*4];
//uint8_t fbuf[1280*800*4];
extern const gfxDisplayDriver* leRenderer_DisplayInterface(void);
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************
/*static void secTimerCallback ( uintptr_t context )
{

    stick++;

}

static void tickTimerCallback ( uintptr_t context )
{
    tick++;
}*/


void grabFrame(GstElement *sink)
{
    GstSample *sample;
    GstBuffer *buffer;
    GstMapInfo map;
   
    sample = gst_app_sink_pull_sample(GST_APP_SINK(sink));
    if (!sample) return;
  
    buffer = gst_sample_get_buffer(sample);
    gst_buffer_map(buffer, &map, GST_MAP_READ);
    
    //The frame data (map.data) is displayed
    if(leIsDrawing() == LE_FALSE)
    {
          gfxDisplayDriver* gfxDisp = leRenderer_DisplayInterface();

          arg.value.v_uint = 0;
          gfxDisp->ioctl(GFX_IOCTL_SET_ACTIVE_LAYER, (void *) &arg);

          arg.value.v_colormode = GFX_COLOR_MODE_RGBA_8888;
          gfxDisp->ioctl(GFX_IOCTL_SET_LAYER_COLOR_MODE, (void *) &arg);

          gfxDisp->ioctl(GFX_IOCTL_GET_FRAMEBUFFER, (void*) &arg);
          
          memcpy(fbuf, map.data, map.size);
          //memcpy(fbuf, data, map.size);
          gfxDisp->blitBuffer(100, 200, &pixelBuffer);
          
         
    }

    gst_buffer_unmap(buffer, &map);
    gst_sample_unref(sample);
}

// *****************************************************************************
// *****************************************************************************
// Section: SplashScreen Local Functions
// *****************************************************************************
// *****************************************************************************





void APP_Screen_Init ( void )
{
    appData.screen_state = START_MAIN_SCREEN;
    /*tickTimer = SYS_TIME_CallbackRegisterMS(tickTimerCallback,
                           (uintptr_t) NULL,
                           tickIntervalMS,
                           SYS_TIME_PERIODIC);
    secTimer = SYS_TIME_CallbackRegisterMS(secTimerCallback,
                           (uintptr_t) NULL,
                           secIntervalMS,
                           SYS_TIME_PERIODIC); */
                           
    /* Temperature */                           
    leFixedString_Constructor(&p_TempValstring,  p_TSliderValBuff, MAX_TEMP_LEN *2);
    p_TempValstring.fn->setFont(&p_TempValstring, (leFont*)& notoSansBold_120);
    
    /* Lights */
    leFixedString_Constructor(&p_Lightstring,  p_LightsBuff, 4);
    p_Lightstring.fn->setFont(&p_Lightstring, (leFont*)& Figtree_32);
    
    /* Devices (Fan) */
    leFixedString_Constructor(&p_Fanstring,  p_FanBuff, 4);
    p_Fanstring.fn->setFont(&p_Fanstring, (leFont*)& Figtree_32);
    
    /* WindowSensor */
    leFixedString_Constructor(&p_Windowstring,  p_WindowValBuff, 4);
    p_Windowstring.fn->setFont(&p_Windowstring, (leFont*)& Figtree_32);
    
    /* Hard coding some temporary variables for easy demo implementation.
     * These should be eventually handled by proper functions */
    device1State = true;
    device2State = false;
    
    appData.heatMode = true;
    currentT = 75;
    lights_on= 3;
    dev_active=1;
    windows_open=0;
        
    gfxPixelBufferCreate(350,
                         250,
                         GFX_COLOR_MODE_RGBA_8888,
                         fbuf,
                         &pixelBuffer);

}



// *****************************************************************************
// *****************************************************************************
// Section: MainScreen Local Functions
// *****************************************************************************
// *****************************************************************************
void handleSensorTrip(uint8_t curSensorState)
{
    /* This must change based on type of reed sensor we are using */
    if(curSensorState ==0)
    {
        //window has opened- show warning, etc
        Home_Screen_imageO_Dev4->fn->setImage(Home_Screen_imageO_Dev4, (leImage*)&windowBttonOpen);
        Home_Screen_LabelDev12_status->fn->setString(Home_Screen_LabelDev12_status, (leString*)&string_OPEN);
        Home_Screen_LabelDev12_status->fn->setScheme(Home_Screen_LabelDev12_status, &SpringgreenScheme);
        Home_Screen_LabelRoom12->fn->setString(Home_Screen_LabelRoom12, (leString*)&string_livRoomB);
        Home_Screen_LabelDevice12->fn->setString(Home_Screen_LabelDevice12, (leString*)&string_WindowB); 
        Home_Screen_image_statusBar->fn->setImage(Home_Screen_image_statusBar, (leImage*)&StatusBarActive);
        Home_Screen_LabelSensorWarning->fn->setVisible(Home_Screen_LabelSensorWarning, LE_TRUE);
        Home_Screen_PanelDate_Time->fn->setVisible(Home_Screen_PanelDate_Time, LE_FALSE);
        sprintf(cWindowCharBuffer, "1");
        p_Windowstring.fn->setFromCStr(&p_Windowstring, cWindowCharBuffer);
        Home_Screen_LabelWindowsOpenNum->fn->setString(Home_Screen_LabelWindowsOpenNum, (leString*)&p_Windowstring);
     
    }
    else
    {
        //window closed - undo what is done previously
        Home_Screen_imageO_Dev4->fn->setImage(Home_Screen_imageO_Dev4, (leImage*)&windowBttonClosed);
        Home_Screen_LabelDev12_status->fn->setString(Home_Screen_LabelDev12_status, (leString*)&string_CLOSED);
        Home_Screen_LabelDev12_status->fn->setScheme(Home_Screen_LabelDev12_status, &LightGreyScheme);
        Home_Screen_LabelRoom12->fn->setString(Home_Screen_LabelRoom12, (leString*)&string_livRoom);
        Home_Screen_LabelDevice12->fn->setString(Home_Screen_LabelDevice12, (leString*)&string_Window);
        Home_Screen_image_statusBar->fn->setImage(Home_Screen_image_statusBar, (leImage*)&StatusBar);
        Home_Screen_LabelSensorWarning->fn->setVisible(Home_Screen_LabelSensorWarning, LE_FALSE);
        Home_Screen_PanelDate_Time->fn->setVisible(Home_Screen_PanelDate_Time, LE_TRUE);
        sprintf(cWindowCharBuffer, "0");
        p_Windowstring.fn->setFromCStr(&p_Windowstring, cWindowCharBuffer);
        Home_Screen_LabelWindowsOpenNum->fn->setString(Home_Screen_LabelWindowsOpenNum, (leString*)&p_Windowstring);
     
    }
}



// *****************************************************************************
// *****************************************************************************
// Section: SplashScreen Callback Functions
// *****************************************************************************
// *****************************************************************************

void SplashScreen_OnShow(void)
{
    //SYS_TIME_TimerStart(tickTimer);
}




void SplashScreen_OnUpdate ( void )
{
   static int counter=0;
    /* Check the application's current state. */
    switch ( appData.screen_state )
    {
        /* Application's initial state. */
        case SPLASH_SCREEN:
        {
            if (tick != prev_tick)
            {
                prev_tick = tick;
                uint32_t width = SplashScreen_rect_progressbarSlide->fn->getWidth(SplashScreen_rect_progressbarSlide);
                int32_t x = SplashScreen_circle_progressbarEnd->fn->getX(SplashScreen_circle_progressbarEnd);
                if(width <= 385)
                {
                    SplashScreen_rect_progressbarSlide->fn->setWidth(SplashScreen_rect_progressbarSlide, width+5);
                    SplashScreen_circle_progressbarEnd->fn->setX(SplashScreen_circle_progressbarEnd, x+5);
                }
                else
                {
                    SplashScreen_rect_progressbarSlide->fn->setWidth(SplashScreen_rect_progressbarSlide, 396);
                    SplashScreen_circle_progressbarEnd->fn->setX(SplashScreen_circle_progressbarEnd, 396);
                    
                    //SYS_TIME_TimerStop(tickTimer);
                    //SYS_TIME_TimerStart(secTimer); 
                    appData.screen_state = SPLASH_PAUSE_SCREEN;
                }
                
            }

            break;
        }
        case SPLASH_PAUSE_SCREEN:
        {
            if (stick != prev_stick)
            {
                prev_stick = stick; 
                counter++;
                if(counter>=2)
                {
                    //SYS_TIME_TimerStop(secTimer); 
                    counter=0;
                    appData.screen_state = START_MAIN_SCREEN;
                }
            }
            break;
        }
        case START_MAIN_SCREEN:
        {
            legato_showScreen(screenID_Home_Screen);
           
            break;
        }

      
        /* The default state should never be executed. */
        default:
        {
            
            break;
        }
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: MainScreen Callback Functions
// *****************************************************************************
// *****************************************************************************

void Home_Screen_OnShow(void)
{
    appData.menu_sel = HOME;
    appData.screen_state = MAIN_SCREEN_IDLE;

    /* Set priliminary values for light GPIO. We want light to be ON by default (not fan)
    */
    dataout.values[0] = 1; //set PD8 high
    ioctl(req_out.fd, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &dataout);

    /* Getting the initial value of sensor state */
    ioctl(req_in.fd, GPIOHANDLE_GET_LINE_VALUES_IOCTL, &datain);
    curSensorState = datain.values[0];

}

void Home_Screen_OnUpdate(void)
{
    switch ( appData.screen_state )
    {
        case MAIN_MENU_OPTION_CHANGE:
        {
            //moveNavBubble();
            break;
        }
        case MAIN_SCREEN_IDLE:
        {
            /* Poll for sensor input GPIO */
            if (ioctl(req_in.fd, GPIOHANDLE_GET_LINE_VALUES_IOCTL, &datain) < 0) 
            {
                printf("Could'nt get sensor state\r\n");
            }
            else
            {
                if(curSensorState != datain.values[0])
                {
                    curSensorState = datain.values[0];
                    handleSensorTrip(curSensorState);
                }
                
            }
            break;
        }
        default:
        {
            
            break;
        }
    }
}

  
void event_Home_Screen_ButtonDev1_OnReleased(leButtonWidget* btn)
{
    /* We are hard-coding this for now. We will toggle GPIO X .

     * But we should add the code required to maintain device state
     * and toggle accordingly. For now we have a global bool device1State. */
     if(device1State)
     {
         device1State = false;
         Home_Screen_LabelDev1_status->fn->setString(Home_Screen_LabelDev1_status, (leString*)&string_OFF);
         Home_Screen_LabelDev1_status->fn->setScheme(Home_Screen_LabelDev1_status, &LightGreyScheme);
         Home_Screen_imageR_Dev1->fn->setImage(Home_Screen_imageR_Dev1, (leImage*)&lampBttnOff);
         Home_Screen_LabelRoom1->fn->setString(Home_Screen_LabelRoom1, (leString*)&string_livRoom);
         Home_Screen_LabelDevice1->fn->setString(Home_Screen_LabelDevice1, (leString*)&string_Lights);
         lights_on--;
         dataout.values[0] = 0; //set PD8 low
         
     }
     else
     {
         device1State = true;
         Home_Screen_LabelDev1_status->fn->setString(Home_Screen_LabelDev1_status, (leString*)&string_ON);
         Home_Screen_LabelDev1_status->fn->setScheme(Home_Screen_LabelDev1_status, &SpringgreenScheme);         
         Home_Screen_imageR_Dev1->fn->setImage(Home_Screen_imageR_Dev1, (leImage*)&lampBttnOn);
         Home_Screen_LabelRoom1->fn->setString(Home_Screen_LabelRoom1, (leString*)&string_livRoomB);
         Home_Screen_LabelDevice1->fn->setString(Home_Screen_LabelDevice1, (leString*)&string_LightsB);
         lights_on++;
         dataout.values[0] = 1; //set PD8 high
     }
     memset(cLightsCharBuffer, 0, sizeof(cLightsCharBuffer));
     sprintf(cLightsCharBuffer, "%d", lights_on);
     p_Lightstring.fn->setFromCStr(&p_Lightstring, cLightsCharBuffer);
     Home_Screen_label_LightsOnNum->fn->setString(Home_Screen_label_LightsOnNum, (leString*)&p_Lightstring);
     ioctl(req_out.fd, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &dataout);
}

void event_Home_Screen_ButtonDev8_OnReleased(leButtonWidget* btn)
{
    /* We are hard-coding this for now. We will toggle GPIO X .
     * But we should add the code required to maintain device state
     * and toggle accordingly. For now we have a global bool device2State. */
     if(device2State)
     {
         device2State = false;
         Home_Screen_LabelDev8_status->fn->setString(Home_Screen_LabelDev8_status, (leString*)&string_OFF);
         Home_Screen_LabelDev8_status->fn->setScheme(Home_Screen_LabelDev8_status, &LightGreyScheme);
         Home_Screen_imageR_Dev8->fn->setImage(Home_Screen_imageR_Dev8, (leImage*)&fanBttnOff);
         Home_Screen_LabelRoom8->fn->setString(Home_Screen_LabelRoom8, (leString*)&string_Bedroom);
         Home_Screen_LabelDevice8->fn->setString(Home_Screen_LabelDevice8, (leString*)&string_Fan);
         dev_active--;
         dataout.values[1] = 0; //set PD9 low
     }
     else
     {
         device2State = true;
         Home_Screen_LabelDev8_status->fn->setString(Home_Screen_LabelDev8_status, (leString*)&string_ON);
         Home_Screen_LabelDev8_status->fn->setScheme(Home_Screen_LabelDev8_status, &SpringgreenScheme);
         Home_Screen_imageR_Dev8->fn->setImage(Home_Screen_imageR_Dev8, (leImage*)&fanBttnOn);
         Home_Screen_LabelRoom8->fn->setString(Home_Screen_LabelRoom8, (leString*)&string_BedroomB);
         Home_Screen_LabelDevice8->fn->setString(Home_Screen_LabelDevice8, (leString*)&string_FanB);
         dev_active++;
         dataout.values[1] = 1; //set PD9 high
     }
     memset(cFanCharBuffer, 0, sizeof(cFanCharBuffer));
     sprintf(cFanCharBuffer, "%d", dev_active);
     p_Fanstring.fn->setFromCStr(&p_Fanstring, cFanCharBuffer);
     Home_Screen_label_devicesActiveNum->fn->setString(Home_Screen_label_devicesActiveNum, (leString*)&p_Fanstring);
     ioctl(req_out.fd, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &dataout);

}

void event_Home_Screen_ButtonThermoMode_OnReleased(leButtonWidget* btn)
{      
    if(appData.heatMode == true)
    {
        appData.heatMode = false;
        Home_Screen_ImageThermoMode->fn->setImage(Home_Screen_ImageThermoMode, (leImage*)&coolThermostat);
        Home_Screen_LabelTempCur->fn->setScheme(Home_Screen_LabelTempCur, &BlueScheme);

        printf("cool\r\n");
        

    }
    else
    {
        appData.heatMode = true;
        Home_Screen_ImageThermoMode->fn->setImage(Home_Screen_ImageThermoMode, (leImage*)&hotThermostat);
        Home_Screen_LabelTempCur->fn->setScheme(Home_Screen_LabelTempCur, &SandybrownScheme);

        printf("hot\r\n");
    }
    
    
}
void event_Home_Screen_ButtonThermoUp_OnReleased(leButtonWidget* btn)
{
    currentT++;
    if(currentT>99)
      currentT--;
    memset(cTSliderCharBuffer, 0, sizeof(cTSliderCharBuffer));
    sprintf(cTSliderCharBuffer, "%d", currentT);
    p_TempValstring.fn->setFromCStr(&p_TempValstring, cTSliderCharBuffer);
    Home_Screen_LabelTempCur->fn->setString(Home_Screen_LabelTempCur, (leString*)&p_TempValstring);
    
}
void event_Home_Screen_ButtonThermoDown_OnReleased(leButtonWidget* btn)
{
    currentT--;
    if(currentT<50)
      currentT++;
    memset(cTSliderCharBuffer, 0, sizeof(cTSliderCharBuffer));
    sprintf(cTSliderCharBuffer, "%d", currentT);
    p_TempValstring.fn->setFromCStr(&p_TempValstring, cTSliderCharBuffer);
    Home_Screen_LabelTempCur->fn->setString(Home_Screen_LabelTempCur, (leString*)&p_TempValstring);    
}


/*******************************************************************************
 End of File
 */
