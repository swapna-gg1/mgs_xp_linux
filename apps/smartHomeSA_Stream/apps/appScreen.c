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
#include <libinput.h>
#include <libudev.h>
#include <linux/input-event-codes.h>
#include <poll.h>
// *****************************************************************************
// *****************************************************************************
// Section: Global variables
// *****************************************************************************
// *****************************************************************************
#define MAX_TEMP_LEN     3
#define DEBOUNCE_DELAY_MS 50  // Debounce delay in milliseconds

static uint32_t prev_tick, tick, prev_stick=0, stick =0;

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


/* Blinds */
leFixedString p_Blindstring;
static char cBlindCharBuffer[2];
static leChar p_BlindValBuff[2] = {0};

/* Window Sensor */
leFixedString p_Windowstring;
static char cWindowCharBuffer[2];
static leChar p_WindowValBuff[2] = {0};

static int16_t currentT;

void handleSensorTrip();

/* Some temporary variables to make demo implementation easy.
 * This needs to be handled with a proper data structure 
 * eventually.


 */
/* Hard coding some temporary variables for easy demo implementation.
     * These should be eventually handled by proper functions */
bool deviceStates[] = {true, true, true, false, true, true, false, false};  
uint8_t lights_on, dev_active, blinds_open;
struct libinput *li = NULL;
struct udev *udev = NULL;
struct pollfd fds;
/* Some variables to display camera feed */
gfxIOCTLArg_Value arg;
gfxPixelBuffer pixelBuffer;
gfxDisplayDriver* gfxDisp;

uint8_t fbuf[350*250*4];
uint8_t Camfbuf[350*250*4];

uint32_t buf_s;

//uint8_t fbuf[1280*800*4];
bool updateCamFeed = false;
extern const gfxDisplayDriver* leRenderer_DisplayInterface(void);

void pollButtonPress(void);
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************
// Called when a new frame is available
void grabFrame(GstAppSink *appsink)
{
    GstSample *sample;
    GstBuffer *buffer;
    GstMapInfo map;
   
    sample = gst_app_sink_pull_sample(appsink);
    if (!sample) return;
    buffer = gst_sample_get_buffer(sample);
    
    GstCaps *caps = gst_sample_get_caps(sample);
    GstStructure *s = gst_caps_get_structure(caps, 0);
    
    gst_buffer_map(buffer, &map, GST_MAP_READ);
    //printf("Buffer size: %zu\n", map.size);
    memcpy(Camfbuf, map.data, map.size);
    buf_s = map.size;
    gst_buffer_unmap(buffer, &map);
    gst_sample_unref(sample);  
    updateCamFeed = true;

}

static int open_restricted(const char *path, int flags, void *user_data) {
    return open(path, flags);
}

static void close_restricted(int fd, void *user_data) {
    close(fd);
}

static const struct libinput_interface interface = {
    .open_restricted = open_restricted,
    .close_restricted = close_restricted,
};



// *****************************************************************************
// *****************************************************************************
// Section: SplashScreen Local Functions
// *****************************************************************************
// *****************************************************************************





void APP_Screen_Init ( void )
{
    appData.screen_state = START_MAIN_SCREEN;

                           
    /* Temperature */                           
    leFixedString_Constructor(&p_TempValstring,  p_TSliderValBuff, MAX_TEMP_LEN *2);
    p_TempValstring.fn->setFont(&p_TempValstring, (leFont*)& notoSansBold_120);
    
    /* Lights */
    leFixedString_Constructor(&p_Lightstring,  p_LightsBuff, 4);
    p_Lightstring.fn->setFont(&p_Lightstring, (leFont*)& Figtree_32);
    
    /* Devices (Fan) */
    leFixedString_Constructor(&p_Fanstring,  p_FanBuff, 4);
    p_Fanstring.fn->setFont(&p_Fanstring, (leFont*)& Figtree_32);
    
    /* Blinds */
    leFixedString_Constructor(&p_Blindstring,  p_BlindValBuff, 4);
    p_Blindstring.fn->setFont(&p_Blindstring, (leFont*)& Figtree_32);
    
    
    /* WindowSensor */
    leFixedString_Constructor(&p_Windowstring,  p_WindowValBuff, 4);
    p_Windowstring.fn->setFont(&p_Windowstring, (leFont*)& Figtree_32);
    
    
    appData.heatMode = true;
    currentT = 75;
    lights_on= 3;
    dev_active=1;
    blinds_open=1;
                      
    set_led("1");

    
    udev = udev_new();
    if (!udev) 
      printf("Failed to create udev\n");
         
    li = libinput_udev_create_context(&interface, NULL, udev);
    if (!li) 
      printf("Failed to create libinput context\n");

    libinput_udev_assign_seat(li, "seat0");

    fds.fd = libinput_get_fd(li);
    fds.events = POLLIN;
    
    gfxPixelBufferCreate(350,
                         250,
                         GFX_COLOR_MODE_RGB_565,
                         fbuf,
                         &pixelBuffer);                             
    updateCamFeed = false;
    
}



// *****************************************************************************
// *****************************************************************************
// Section: MainScreen Local Functions
// *****************************************************************************
// *****************************************************************************
void pollButtonPress(void)
{
    int timeout_ms = 0;  // non-blocking, adjust as needed
    if (poll(&fds, 1, timeout_ms) > 0) 
    {
        libinput_dispatch(li);
        struct libinput_event *event;
        while ((event = libinput_get_event(li))) 
        {
            if (libinput_event_get_type(event) == LIBINPUT_EVENT_KEYBOARD_KEY) 
            {
                struct libinput_event_keyboard *k = libinput_event_get_keyboard_event(event);
                uint32_t key = libinput_event_keyboard_get_key(k);
                uint32_t state = libinput_event_keyboard_get_key_state(k);
                if (state == LIBINPUT_KEY_STATE_PRESSED)
                {
                    //printf("button pressed!\n");
                    handleSensorTrip();
                }
            }
            libinput_event_destroy(event);
        }
    }
}

void set_led(const char *value)
{
    char path[128];
    snprintf(path, sizeof(path), "/sys/class/leds/blue/brightness");

    FILE *f = fopen(path, "w");
    if (!f) {
        perror("fopen");
        return;
    }

    fprintf(f, "%s", value);
    fclose(f);
}

void handleSensorTrip()
{
    /* This must change based on type of reed sensor we are using */
    if(curSensorState == 0)
    {
        curSensorState = 1;
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
        curSensorState = 0;
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

    curSensorState = 0;
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
            if(updateCamFeed == true)
            {
                
                if(leIsDrawing() == LE_FALSE)
                {
                      gfxDisplayDriver* gfxDisp = leRenderer_DisplayInterface();

                      arg.value.v_uint = 0;
                      gfxDisp->ioctl(GFX_IOCTL_SET_ACTIVE_LAYER, (void *) &arg);

                      //arg.value.v_colormode = GFX_COLOR_MODE_RGBA_8888;
                      arg.value.v_colormode = GFX_COLOR_MODE_RGB_565;
                      gfxDisp->ioctl(GFX_IOCTL_SET_LAYER_COLOR_MODE, (void *) &arg);

                      gfxDisp->ioctl(GFX_IOCTL_GET_FRAMEBUFFER, (void*) &arg);
                      
                      //memcpy(fbuf, map.data, map.size);
                      memcpy(fbuf, Camfbuf, buf_s);
                      gfxDisp->blitBuffer(100, 200, &pixelBuffer);
                      
                     
                }
    
                updateCamFeed = false;
            }

            pollButtonPress();
         
            break;
        }
        case MAIN_LED_TOGGLE:
        {
            if(deviceStates[0]==true)
                set_led("1");
            else
                set_led("0");
            appData.screen_state = MAIN_SCREEN_IDLE;
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
     * and toggle accordingly. For now we have a global bool deviceStates[0]. */
     if(deviceStates[0]==true)
     {
         deviceStates[0] = false;
         Home_Screen_LabelDev1_status->fn->setString(Home_Screen_LabelDev1_status, (leString*)&string_OFF);
         Home_Screen_LabelDev1_status->fn->setScheme(Home_Screen_LabelDev1_status, &LightGreyScheme);
         Home_Screen_imageR_Dev1->fn->setImage(Home_Screen_imageR_Dev1, (leImage*)&lampBttnOff);
         Home_Screen_LabelRoom1->fn->setString(Home_Screen_LabelRoom1, (leString*)&string_livRoom);
         Home_Screen_LabelDevice1->fn->setString(Home_Screen_LabelDevice1, (leString*)&string_Lights);
         lights_on--;
         
         //dataout.values[0] = 0; //set PD8 low
         
     }
     else
     {
         deviceStates[0] = true;
         Home_Screen_LabelDev1_status->fn->setString(Home_Screen_LabelDev1_status, (leString*)&string_ON);
         Home_Screen_LabelDev1_status->fn->setScheme(Home_Screen_LabelDev1_status, &SpringgreenScheme);         
         Home_Screen_imageR_Dev1->fn->setImage(Home_Screen_imageR_Dev1, (leImage*)&lampBttnOn);
         Home_Screen_LabelRoom1->fn->setString(Home_Screen_LabelRoom1, (leString*)&string_livRoomB);
         Home_Screen_LabelDevice1->fn->setString(Home_Screen_LabelDevice1, (leString*)&string_LightsB);
         lights_on++;
         
         //dataout.values[0] = 1; //set PD8 high
     }
     memset(cLightsCharBuffer, 0, sizeof(cLightsCharBuffer));
     sprintf(cLightsCharBuffer, "%d", lights_on);
     p_Lightstring.fn->setFromCStr(&p_Lightstring, cLightsCharBuffer);
     Home_Screen_label_LightsOnNum->fn->setString(Home_Screen_label_LightsOnNum, (leString*)&p_Lightstring);
     //ioctl(req_out.fd, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &dataout);
     appData.screen_state = MAIN_LED_TOGGLE;
}

void event_Home_Screen_ButtonDev8_OnReleased(leButtonWidget* btn)
{
    /* We are hard-coding this for now. We will toggle GPIO X .
     * But we should add the code required to maintain device state
     * and toggle accordingly. For now we have a global bool deviceStates[7]. */
     if(deviceStates[7]==true)
     {
         deviceStates[7] = false;
         Home_Screen_LabelDev8_status->fn->setString(Home_Screen_LabelDev8_status, (leString*)&string_OFF);
         Home_Screen_LabelDev8_status->fn->setScheme(Home_Screen_LabelDev8_status, &LightGreyScheme);
         Home_Screen_imageR_Dev8->fn->setImage(Home_Screen_imageR_Dev8, (leImage*)&fanBttnOff);
         Home_Screen_LabelRoom8->fn->setString(Home_Screen_LabelRoom8, (leString*)&string_Bedroom);
         Home_Screen_LabelDevice8->fn->setString(Home_Screen_LabelDevice8, (leString*)&string_Fan);
         dev_active--;
         //dataout.values[1] = 0; //set PD9 low
     }
     else
     {
         deviceStates[7] = true;
         Home_Screen_LabelDev8_status->fn->setString(Home_Screen_LabelDev8_status, (leString*)&string_ON);
         Home_Screen_LabelDev8_status->fn->setScheme(Home_Screen_LabelDev8_status, &SpringgreenScheme);
         Home_Screen_imageR_Dev8->fn->setImage(Home_Screen_imageR_Dev8, (leImage*)&fanBttnOn);
         Home_Screen_LabelRoom8->fn->setString(Home_Screen_LabelRoom8, (leString*)&string_BedroomB);
         Home_Screen_LabelDevice8->fn->setString(Home_Screen_LabelDevice8, (leString*)&string_FanB);
         dev_active++;
         //dataout.values[1] = 1; //set PD9 high
     }
     memset(cFanCharBuffer, 0, sizeof(cFanCharBuffer));
     sprintf(cFanCharBuffer, "%d", dev_active);
     p_Fanstring.fn->setFromCStr(&p_Fanstring, cFanCharBuffer);
     Home_Screen_label_devicesActiveNum->fn->setString(Home_Screen_label_devicesActiveNum, (leString*)&p_Fanstring);
     //ioctl(req_out.fd, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &dataout);

}

void event_Home_Screen_ButtonDev2_OnReleased(leButtonWidget* btn)
{
    if(deviceStates[1]==true)
     {
         deviceStates[1] = false;
         Home_Screen_LabelDev2_status->fn->setString(Home_Screen_LabelDev2_status, (leString*)&string_OFF);
         Home_Screen_LabelDev2_status->fn->setScheme(Home_Screen_LabelDev2_status, &LightGreyScheme);
         Home_Screen_imageR_Dev2->fn->setImage(Home_Screen_imageR_Dev2, (leImage*)&lampBttnOff);
         Home_Screen_LabelRoom2->fn->setString(Home_Screen_LabelRoom2, (leString*)&string_kichen);
         Home_Screen_LabelDevice2->fn->setString(Home_Screen_LabelDevice2, (leString*)&string_Lights);
         lights_on--;
                  
     }
     else
     {
         deviceStates[1] = true;
         Home_Screen_LabelDev2_status->fn->setString(Home_Screen_LabelDev2_status, (leString*)&string_ON);
         Home_Screen_LabelDev2_status->fn->setScheme(Home_Screen_LabelDev2_status, &SpringgreenScheme);         
         Home_Screen_imageR_Dev2->fn->setImage(Home_Screen_imageR_Dev2, (leImage*)&lampBttnOn);
         Home_Screen_LabelRoom2->fn->setString(Home_Screen_LabelRoom2, (leString*)&string_kichenB);
         Home_Screen_LabelDevice2->fn->setString(Home_Screen_LabelDevice2, (leString*)&string_LightsB);
         lights_on++;        
     }
     memset(cLightsCharBuffer, 0, sizeof(cLightsCharBuffer));
     sprintf(cLightsCharBuffer, "%d", lights_on);
     p_Lightstring.fn->setFromCStr(&p_Lightstring, cLightsCharBuffer);
     Home_Screen_label_LightsOnNum->fn->setString(Home_Screen_label_LightsOnNum, (leString*)&p_Lightstring);
}

void event_Home_Screen_ButtonDev3_OnReleased(leButtonWidget* btn)
{
    if(deviceStates[2]==true)
     {
         deviceStates[2] = false;
         Home_Screen_LabelDev3_status->fn->setString(Home_Screen_LabelDev3_status, (leString*)&string_OFF);
         Home_Screen_LabelDev3_status->fn->setScheme(Home_Screen_LabelDev3_status, &LightGreyScheme);
         Home_Screen_imageR_Dev3->fn->setImage(Home_Screen_imageR_Dev3, (leImage*)&lampBttnOff);
         Home_Screen_LabelRoom3->fn->setString(Home_Screen_LabelRoom3, (leString*)&string_Bedroom);
         Home_Screen_LabelDevice3->fn->setString(Home_Screen_LabelDevice3, (leString*)&string_Lights);
         lights_on--;
                  
     }
     else
     {
         deviceStates[2] = true;
         Home_Screen_LabelDev3_status->fn->setString(Home_Screen_LabelDev3_status, (leString*)&string_ON);
         Home_Screen_LabelDev3_status->fn->setScheme(Home_Screen_LabelDev3_status, &SpringgreenScheme);         
         Home_Screen_imageR_Dev3->fn->setImage(Home_Screen_imageR_Dev3, (leImage*)&lampBttnOn);
         Home_Screen_LabelRoom3->fn->setString(Home_Screen_LabelRoom3, (leString*)&string_BedroomB);
         Home_Screen_LabelDevice3->fn->setString(Home_Screen_LabelDevice3, (leString*)&string_LightsB);
         lights_on++;        
     }
     memset(cLightsCharBuffer, 0, sizeof(cLightsCharBuffer));
     sprintf(cLightsCharBuffer, "%d", lights_on);
     p_Lightstring.fn->setFromCStr(&p_Lightstring, cLightsCharBuffer);
     Home_Screen_label_LightsOnNum->fn->setString(Home_Screen_label_LightsOnNum, (leString*)&p_Lightstring);
}

void event_Home_Screen_ButtonDev4_OnReleased(leButtonWidget* btn)
{
    if(deviceStates[3]==true)
     {
         deviceStates[3] = false;
         Home_Screen_LabelDev4_status->fn->setString(Home_Screen_LabelDev4_status, (leString*)&string_OFF);
         Home_Screen_LabelDev4_status->fn->setScheme(Home_Screen_LabelDev4_status, &LightGreyScheme);
         Home_Screen_imageR_Dev4->fn->setImage(Home_Screen_imageR_Dev4, (leImage*)&fanBttnOff);
         Home_Screen_LabelRoom4->fn->setString(Home_Screen_LabelRoom4, (leString*)&string_livRoom);
         Home_Screen_LabelDevice4->fn->setString(Home_Screen_LabelDevice4, (leString*)&string_Fan);
         dev_active--;        
     }
     else
     {
         deviceStates[3] = true;
         Home_Screen_LabelDev4_status->fn->setString(Home_Screen_LabelDev4_status, (leString*)&string_ON);
         Home_Screen_LabelDev4_status->fn->setScheme(Home_Screen_LabelDev4_status, &SpringgreenScheme);
         Home_Screen_imageR_Dev4->fn->setImage(Home_Screen_imageR_Dev4, (leImage*)&fanBttnOn);
         Home_Screen_LabelRoom4->fn->setString(Home_Screen_LabelRoom4, (leString*)&string_livRoomB);
         Home_Screen_LabelDevice4->fn->setString(Home_Screen_LabelDevice4, (leString*)&string_FanB);
         dev_active++;
     }
     memset(cFanCharBuffer, 0, sizeof(cFanCharBuffer));
     sprintf(cFanCharBuffer, "%d", dev_active);
     p_Fanstring.fn->setFromCStr(&p_Fanstring, cFanCharBuffer);
     Home_Screen_label_devicesActiveNum->fn->setString(Home_Screen_label_devicesActiveNum, (leString*)&p_Fanstring);
}

void event_Home_Screen_ButtonDev5_OnReleased(leButtonWidget* btn)
{
    if(deviceStates[4]==true)
     {
         deviceStates[4] = false;
         Home_Screen_LabelDev5_status->fn->setString(Home_Screen_LabelDev5_status, (leString*)&string_CLOSED);
         Home_Screen_LabelDev5_status->fn->setScheme(Home_Screen_LabelDev5_status, &LightGreyScheme);
         Home_Screen_imageR_Dev5->fn->setImage(Home_Screen_imageR_Dev5, (leImage*)&blindsBttnOff);
         Home_Screen_LabelRoom5->fn->setString(Home_Screen_LabelRoom5, (leString*)&string_Bedroom);
         Home_Screen_LabelDevice5->fn->setString(Home_Screen_LabelDevice5, (leString*)&string_Blinds);
         blinds_open--;

     }
     else
     {
         deviceStates[4] = true;
         Home_Screen_LabelDev5_status->fn->setString(Home_Screen_LabelDev5_status, (leString*)&string_OPEN);
         Home_Screen_LabelDev5_status->fn->setScheme(Home_Screen_LabelDev5_status, (leString*)&SpringgreenScheme);
         Home_Screen_imageR_Dev5->fn->setImage(Home_Screen_imageR_Dev5, (leImage*)&blindsBttnOn);
         Home_Screen_LabelRoom5->fn->setString(Home_Screen_LabelRoom5, (leString*)&string_BedroomB);
         Home_Screen_LabelDevice5->fn->setString(Home_Screen_LabelDevice5, (leString*)&string_BlindsB);
         blinds_open++;

     }
     memset(cBlindCharBuffer, 0, sizeof(cBlindCharBuffer));
     sprintf(cBlindCharBuffer, "%d", blinds_open);
     p_Blindstring.fn->setFromCStr(&p_Blindstring, cBlindCharBuffer);
     Home_Screen_label_blindsOnNum->fn->setString(Home_Screen_label_blindsOnNum, (leString*)&p_Blindstring);

}
void event_Home_Screen_ButtonDev6_OnReleased(leButtonWidget* btn)
{
    if(deviceStates[5]==true)
     {
         deviceStates[5] = false;
         Home_Screen_LabelDev6_status->fn->setString(Home_Screen_LabelDev6_status, (leString*)&string_OFF);
         Home_Screen_LabelDev6_status->fn->setScheme(Home_Screen_LabelDev6_status, &LightGreyScheme);
         Home_Screen_imageR_Dev6->fn->setImage(Home_Screen_imageR_Dev6, (leImage*)&tvBttnOff);
         Home_Screen_LabelRoom6->fn->setString(Home_Screen_LabelRoom6, (leString*)&string_livRoom);
         Home_Screen_LabelDevice6->fn->setString(Home_Screen_LabelDevice6, (leString*)&string_TV);
         dev_active--;

     }
     else
     {
         deviceStates[5] = true;
         Home_Screen_LabelDev6_status->fn->setString(Home_Screen_LabelDev6_status, (leString*)&string_ON);
         Home_Screen_LabelDev6_status->fn->setScheme(Home_Screen_LabelDev6_status, &SpringgreenScheme);
         Home_Screen_imageR_Dev6->fn->setImage(Home_Screen_imageR_Dev6, (leImage*)&tvBttnOn);
         Home_Screen_LabelRoom6->fn->setString(Home_Screen_LabelRoom6, (leString*)&string_livRoomB);
         Home_Screen_LabelDevice6->fn->setString(Home_Screen_LabelDevice6, (leString*)&string_TVB);
         dev_active++;

     }
     memset(cFanCharBuffer, 0, sizeof(cFanCharBuffer));
     sprintf(cFanCharBuffer, "%d", dev_active);
     p_Fanstring.fn->setFromCStr(&p_Fanstring, cFanCharBuffer);
     Home_Screen_label_devicesActiveNum->fn->setString(Home_Screen_label_devicesActiveNum, (leString*)&p_Fanstring);
}
void event_Home_Screen_ButtonDev7_OnReleased(leButtonWidget* btn)
{
    if(deviceStates[6]==true)
     {
         deviceStates[6] = false;
         Home_Screen_LabelDev7_status->fn->setString(Home_Screen_LabelDev7_status, (leString*)&string_OFF);
         Home_Screen_LabelDev7_status->fn->setScheme(Home_Screen_LabelDev7_status, &LightGreyScheme);
         Home_Screen_imageR_Dev7->fn->setImage(Home_Screen_imageR_Dev7, (leImage*)&robVacuumOff);
         Home_Screen_LabelRoom7->fn->setString(Home_Screen_LabelRoom7, (leString*)&string_roboVaccum);
         dev_active--;

     }
     else
     {
         deviceStates[6] = true;
         Home_Screen_LabelDev7_status->fn->setString(Home_Screen_LabelDev7_status, (leString*)&string_ON);
         Home_Screen_LabelDev7_status->fn->setScheme(Home_Screen_LabelDev7_status, &SpringgreenScheme);
         Home_Screen_imageR_Dev7->fn->setImage(Home_Screen_imageR_Dev7, (leImage*)&robVacuumOn);
         Home_Screen_LabelRoom7->fn->setString(Home_Screen_LabelRoom7, (leString*)&string_roboVaccumB);
         dev_active++;

     }
     memset(cFanCharBuffer, 0, sizeof(cFanCharBuffer));
     sprintf(cFanCharBuffer, "%d", dev_active);
     p_Fanstring.fn->setFromCStr(&p_Fanstring, cFanCharBuffer);
     Home_Screen_label_devicesActiveNum->fn->setString(Home_Screen_label_devicesActiveNum, (leString*)&p_Fanstring);
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
