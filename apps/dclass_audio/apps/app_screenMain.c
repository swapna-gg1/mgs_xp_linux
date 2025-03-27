#include <stdio.h>
#include <string.h>

#include "gfx/legato/generated/le_gen_init.h"
#include "app_macros.h"
#include "app_dclassIntf.h"

#define EQ_KNOB_YPOS_2P -10
#define EQ_KNOB_YPOS_1P 55
#define EQ_KNOB_YPOS_0 120
#define EQ_KNOB_YPOS_1N 180
#define EQ_KNOB_YPOS_2N 240

#define VOL_KNOB_YPOS_MAX 60
#define VOL_KNOB_YPOS_MIN 340

#define EVT_PLAY 1
#define EVT_PAUSE 0

#define EVT_ENABLED 1
#define EVT_DISABLED 0

#define EVT_ON 1
#define EVT_OFF 0

#define MAX_SOURCE_FILES 15
#define NUM_SOURCES_PER_SCREEN 5
#define MAX_SOURCE_FILENAME_LENGTH 32

typedef enum
{
    SCRN_STATE_INIT,
    SCRN_STATE_PROCESS,
} SCREEN_STATES;

typedef enum
{
    BEAM_COLOR_WHITE,
    BEAM_COLOR_GREEN,
    BEAM_COLOR_RED,
} BEAM_COLOR;

typedef enum
{
    EQ_VAL_2,
    EQ_VAL_1,
    EQ_VAL_0,
    EQ_VAL_N1,
    EQ_VAL_N2,
}  SCREEN_EQ_VALS;

typedef enum
{
    SCRN_EVT_PLAY_PAUSE,
    SCRN_EVT_STOP,

    SCRN_EVT_SWAP_ENABLED,
    SCRN_EVT_SWAP_DISABLED,

    SCRN_EVT_MONO_ENABLED,
    SCRN_EVT_MONO_DISABLED,

    SCRN_EVT_MONO_TYPE_MIX,
    SCRN_EVT_MONO_TYPE_LEFT,
    SCRN_EVT_MONO_TYPE_SAT,
    SCRN_EVT_MONO_TYPE_RIGHT,
    
    SCRN_EVT_SOURCE_SHOW,
    SCRN_EVT_SOURCE_SELECT,
    SCRN_EVT_SOURCE_SETPAGE,
    SCRN_EVT_SOURCE_HIDE,

    SCRN_EVT_DEEMPH_ENABLED,
    SCRN_EVT_DEEMPH_DISABLED,

    SCRN_EVT_EQ_BASS_SET,
    SCRN_EVT_EQ_MID_SET,
    SCRN_EVT_EQ_TREB_SET,
    SCRN_EVT_EQ_RESET,
    
    SCRN_EVT_VOL_SET,
    SCRN_EVT_VOL_MUTE,

    SCRN_EVT_NUM,

    /* DO NOT EXCEED 64 events */
    SCRN_EVT_MAX = 63, 
} SCREEN_EVENTS;

typedef struct
{
    uint64_t screenEventFlags;
    void * screenEventParm[SCRN_EVT_NUM];
} SCREEN_EVENT;

typedef void (*SCRN_EVT_HANDLER) (SCREEN_EVENTS event, void * screenEventParm);

void scrnPlayPauseEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnStopEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnSwapEnabledEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnMonoEnabledEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnMonoTypeEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnSourceEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnSourceSelectEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnSourcePageEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnSourceCloseEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnDeemphEnabledEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnBassSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnMidSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnTrebSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnEqRstEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnVolSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);
void scrnVolMuteEvtHndlr(SCREEN_EVENTS event, void * screenEventParm);

static SCREEN_STATES screenState;
static SCREEN_EVENT screenEvent;

static int fileSourcePageNum;
static int fileSourceIdx;

static unsigned int volume;

static char sourceFilesnames[MAX_SOURCE_FILES][MAX_SOURCE_FILENAME_LENGTH] = 
{
    "Filename1.wav",
    "Filename2.wav",
    "Filename3.wav",
    "Filename4.wav",
    "Filename5.wav",
    "Filename6.wav",
    "Filename7.wav",
    "Filename8.wav",
    "Filename9.wav",
    "Filename10.wav",
    "Filename11.wav",
    "Filename12.wav",
    "Filename13.wav",
    "Filename14.wav",
    "Filename15.wav",
};

static SCRN_EVT_HANDLER screenEventHandlers[SCRN_EVT_NUM] =
{
    scrnPlayPauseEvtHndlr,
    scrnStopEvtHndlr,

    scrnSwapEnabledEvtHndlr,
    scrnSwapEnabledEvtHndlr,
    
    scrnMonoEnabledEvtHndlr,
    scrnMonoEnabledEvtHndlr,

    scrnMonoTypeEvtHndlr,
    scrnMonoTypeEvtHndlr,
    scrnMonoTypeEvtHndlr,
    scrnMonoTypeEvtHndlr,

    scrnSourceEvtHndlr,
    scrnSourceSelectEvtHndlr,
    scrnSourcePageEvtHndlr,
    scrnSourceCloseEvtHndlr,

    scrnDeemphEnabledEvtHndlr,
    scrnDeemphEnabledEvtHndlr,
    
    scrnBassSetEvtHndlr,
    scrnMidSetEvtHndlr,
    scrnTrebSetEvtHndlr,
    scrnEqRstEvtHndlr,
    
    scrnVolSetEvtHndlr,
    scrnVolMuteEvtHndlr,
};

static leButtonWidget ** filenameBtnWidgets[NUM_SOURCES_PER_SCREEN] = 
{
    &Screen0_btnSource1,
    &Screen0_btnSource2,
    &Screen0_btnSource3,
    &Screen0_btnSource4,
    &Screen0_btnSource5,
};

static leDynamicString * filenameStr[MAX_SOURCE_FILES];
static leDynamicString * sourceFilenameStr;

static void scrnSetEvent(SCREEN_EVENTS evID, void * parm)
{
    screenEvent.screenEventFlags |= (1u << evID);
    screenEvent.screenEventParm[evID] = parm;
}

char * appGetSourceFileName(unsigned int index)
{
    if (index < MAX_SOURCE_FILES)
    {
        return sourceFilesnames[index];
    }
    else
    {
        return NULL;
    }
}

int appSetSourceFileName(int32_t index, char * filename)
{
    if (index < MAX_SOURCE_FILES)
    {
        strncpy(sourceFilesnames[index], filename, MAX_SOURCE_FILENAME_LENGTH);
    }
}

static void scrnUpdateSourceFilename(unsigned int activeIdx)
{
    char * filename = appGetSourceFileName(activeIdx);
    if (filename != NULL)
    {
        sourceFilenameStr->fn->setFromCStr(sourceFilenameStr, filename);
        Screen0_lblFilename->fn->setString(Screen0_lblFilename, 
                                           (leString *) sourceFilenameStr);
    }
}

static void scrnUpdateSourceFilenames(unsigned int fileSourcePageNum, unsigned int activeIdx)
{
    char * filename;
    unsigned int i;

    /* Populate the filenames, determine the first file to show */
    for (i = (fileSourcePageNum * NUM_SOURCES_PER_SCREEN); 
         i < (fileSourcePageNum * NUM_SOURCES_PER_SCREEN) + NUM_SOURCES_PER_SCREEN; 
         i++)
    {
        filename = appGetSourceFileName(i);
        if (filename != NULL)
        {
            filenameStr[i]->fn->setFromCStr(filenameStr[i], filename);
            (*(filenameBtnWidgets[i % NUM_SOURCES_PER_SCREEN]))->fn->setString(
                                *(filenameBtnWidgets[i % NUM_SOURCES_PER_SCREEN]), 
                                (leString *)  filenameStr[i]);
            
            /* Highlight the active filename */
            if (i == activeIdx)
            {
                APP_LE_SETBTNIMAGE((*(filenameBtnWidgets[i % NUM_SOURCES_PER_SCREEN])), Btn3P);
            }
            else
            {
                APP_LE_SETBTNIMAGE((*(filenameBtnWidgets[i % NUM_SOURCES_PER_SCREEN])), Btn3);
            }

            APP_LE_SETVISIBLE((*(filenameBtnWidgets[i % NUM_SOURCES_PER_SCREEN])), LE_TRUE);
        }
        else
        {
            APP_LE_SETVISIBLE((*(filenameBtnWidgets[i % NUM_SOURCES_PER_SCREEN])), LE_FALSE);
        }
    }
}

static leBool Knob_filterEvent(leWidget* target, leWidgetEvent* evt, void* data)
{
    leBool retval = LE_FALSE;    
    lePoint pnt;
    
    switch(evt->id)
    {
        case LE_EVENT_TOUCH_DOWN:
        {
            evt->accepted = LE_TRUE;
            evt->owner = target;
            
            break;
        }
        case LE_EVENT_TOUCH_MOVE:         
        {
            uint32_t height = target->fn->getHeight(target);
            int32_t ypos = APP_LE_GETY(target);

            SCREEN_EQ_VALS val;
            
            evt->accepted = LE_TRUE;
            evt->owner = target;

            height = target->fn->getHeight(target);

            pnt.x = ((leWidgetEvent_TouchDown *) evt)->x;
            pnt.y = ((leWidgetEvent_TouchDown *) evt)->y - (height/2);  

            leUtils_PointScreenToLocalSpace(target->parent, &pnt);

            if (target == (leWidget*) Screen0_btnKnobVol)
            {
                leUtils_PointScreenToLocalSpace(target->parent, &pnt);

                pnt.y = pnt.y < VOL_KNOB_YPOS_MAX ? VOL_KNOB_YPOS_MAX : pnt.y;
                pnt.y = pnt.y > VOL_KNOB_YPOS_MIN ? VOL_KNOB_YPOS_MIN : pnt.y;

                val = (VOL_KNOB_YPOS_MIN - pnt.y) * 100 / (VOL_KNOB_YPOS_MIN - VOL_KNOB_YPOS_MAX);

                if (ypos != pnt.y)
                {
                    APP_LE_SETY(target, pnt.y);

                    scrnSetEvent(SCRN_EVT_VOL_SET, (void*) val);
                }
            }
            else
            {
                pnt.y = pnt.y < EQ_KNOB_YPOS_2P ? EQ_KNOB_YPOS_2P : pnt.y;
                pnt.y = pnt.y > EQ_KNOB_YPOS_2N ? EQ_KNOB_YPOS_2N : pnt.y;

                /* Snap */
                if (pnt.y <= EQ_KNOB_YPOS_1P - (EQ_KNOB_YPOS_1P - EQ_KNOB_YPOS_2P)/2)
                {
                    pnt.y = EQ_KNOB_YPOS_2P;
                    val = EQ_VAL_2;
                }
                else if ((pnt.y > EQ_KNOB_YPOS_1P - (EQ_KNOB_YPOS_1P - EQ_KNOB_YPOS_2P)/2) && 
                         (pnt.y <= EQ_KNOB_YPOS_1P + (EQ_KNOB_YPOS_0 - EQ_KNOB_YPOS_1P)/2))
                {
                    pnt.y = EQ_KNOB_YPOS_1P;
                    val = EQ_VAL_1;
                }
                else if ((pnt.y > EQ_KNOB_YPOS_1P + (EQ_KNOB_YPOS_0 - EQ_KNOB_YPOS_1P)/2) && 
                         (pnt.y <= EQ_KNOB_YPOS_0 + (EQ_KNOB_YPOS_1N - EQ_KNOB_YPOS_0)/2))
                {
                    pnt.y = EQ_KNOB_YPOS_0;
                    val = EQ_VAL_0;
                }
                else if ((pnt.y > EQ_KNOB_YPOS_1N - (EQ_KNOB_YPOS_1N - EQ_KNOB_YPOS_0)/2) && 
                         (pnt.y <= EQ_KNOB_YPOS_1N + (EQ_KNOB_YPOS_2N - EQ_KNOB_YPOS_1N)/2))
                {
                    pnt.y = EQ_KNOB_YPOS_1N;
                    val = EQ_VAL_N1;
                }
                else if (pnt.y > EQ_KNOB_YPOS_2N - (EQ_KNOB_YPOS_2N - EQ_KNOB_YPOS_1N)/2)
                {
                    pnt.y = EQ_KNOB_YPOS_2N;
                    val = EQ_VAL_N2;
                }

                if (ypos != pnt.y)
                {
                    APP_LE_SETY(target, pnt.y);

                    if (target == (leWidget*) Screen0_btnKnobBass)
                    {
                        scrnSetEvent(SCRN_EVT_EQ_BASS_SET, (void*) val);
                    }
                    else if (target == (leWidget*) Screen0_btnKnobMid)
                    {
                        scrnSetEvent(SCRN_EVT_EQ_MID_SET, (void*) val);
                    }
                    else if (target == (leWidget*) Screen0_btnKnobTreble)
                    {
                        scrnSetEvent(SCRN_EVT_EQ_TREB_SET, (void*) val);
                    }  
                    
                }
            }

            retval = LE_TRUE;
            
            break;
        }   
        case LE_EVENT_TOUCH_UP:            
        {
            evt->accepted = LE_TRUE;
                    
            retval = LE_TRUE;

            break;        
        }
        default:
            break;
    }
    
   return retval;
}

static leWidgetEventFilter KnobArea_eventFilter =
{
    Knob_filterEvent,
    NULL
};

void Screen0_OnShow(void)
{
    int i;

    fileSourcePageNum = 0;
    fileSourceIdx = 0;
    volume = 50;

    /* Initialize dynamic strings for filenames */
    for (i = 0; i < MAX_SOURCE_FILES; i++)
    {
        filenameStr[i] = leDynamicString_New();
        filenameStr[i]->fn->setFont(filenameStr[i], (leFont*) &FontMidRegular); 
    }

    sourceFilenameStr = leDynamicString_New();
    sourceFilenameStr->fn->setFont(sourceFilenameStr, (leFont*) &FontMidRegular); 
    Screen0_lblFilename->fn->setEnabled(Screen0_lblFilename, LE_FALSE);

    scrnUpdateSourceFilename(fileSourceIdx);
    
    /* Update the sources dialog box filenames */
    scrnUpdateSourceFilenames(fileSourcePageNum, fileSourceIdx);

    screenState = SCRN_STATE_INIT;

    screenEvent.screenEventFlags = 0;

    APP_LE_SETEVENTFILTER(Screen0_btnKnobBass, KnobArea_eventFilter);
    APP_LE_SETEVENTFILTER(Screen0_btnKnobMid, KnobArea_eventFilter);
    APP_LE_SETEVENTFILTER(Screen0_btnKnobTreble, KnobArea_eventFilter);
    APP_LE_SETEVENTFILTER(Screen0_btnKnobVol, KnobArea_eventFilter);

    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeMix, Btn2P);
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeLeft, Btn2);
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeSat, Btn2);
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeRight, Btn2);


}

void Screen0_OnHide(void)
{
    int i;

    /* Free up dynamic strings for filenames */
    for (i = 0; i < MAX_SOURCE_FILES; i++)
    {
        leString_Delete((leString *) filenameStr[i]);
    }

}

void Screen0_OnUpdate(void)
{
    switch(screenState)
    {
        case SCRN_STATE_INIT:
        {
            screenState = SCRN_STATE_PROCESS;
            break;
        }
        case SCRN_STATE_PROCESS:
        {
            SCREEN_EVENTS evtID;

            for (evtID = 0; evtID < SCRN_EVT_NUM; evtID++)
            {
                if ((screenEvent.screenEventFlags >> evtID) == 0x1)
                {
                    screenEvent.screenEventFlags &= ~(1 << evtID);

                    if(screenEventHandlers[evtID] != NULL)
                    {
                        screenEventHandlers[evtID](evtID, 
                                                   screenEvent.screenEventParm[evtID]);
                    }
                }
            }

            break;
        }
        default:
            break;

    }
}

void event_Screen0_btnSource_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_SOURCE_SHOW, NULL);
}

void event_Screen0_btnPlayPause_OnPressed(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_PLAY_PAUSE, (void*) EVT_PLAY);
}

void event_Screen0_btnPlayPause_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_PLAY_PAUSE, (void*) EVT_PAUSE);
}

void event_Screen0_btnStop_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_STOP, NULL);
}

void event_Screen0_btnMute_OnPressed(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_VOL_MUTE, (void*) EVT_ON);
}

void event_Screen0_btnMute_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_VOL_MUTE, (void*) EVT_OFF);
}

void event_Screen0_btnSwapEnable_OnPressed(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_SWAP_ENABLED, NULL);
}

void event_Screen0_btnSwapEnable_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_SWAP_DISABLED, NULL);
}

void event_Screen0_btnDeempEnable_OnPressed(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_DEEMPH_ENABLED, NULL);
}

void event_Screen0_btnDeempEnable_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_DEEMPH_DISABLED, NULL);
}

void event_Screen0_btnMonoEnable_OnPressed(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_MONO_ENABLED, NULL);
}

void event_Screen0_btnMonoEnable_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_MONO_DISABLED, NULL);
}

void event_Screen0_btnMonoTypeClose_OnReleased(leButtonWidget* btn)
{
    APP_LE_SETX(Screen0_pnlMonoType, -348);
}

void event_Screen0_btnSourceSelectClose_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_SOURCE_HIDE, NULL);
}

void event_Screen0_btnMonoType_OnReleased(leButtonWidget* btn)
{
    APP_LE_SETX(Screen0_pnlMonoType, 10);
}

void event_Screen0_btnEqReset_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_EQ_RESET, NULL);
}

void event_Screen0_btnMonoTypeMix_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_MONO_TYPE_MIX, NULL);
}

void event_Screen0_btnMonoTypeLeft_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_MONO_TYPE_LEFT, NULL);
}

void event_Screen0_btnMonoTypeSat_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_MONO_TYPE_SAT, NULL);
}

void event_Screen0_btnMonoTypeRight_OnReleased(leButtonWidget* btn)
{
    scrnSetEvent(SCRN_EVT_MONO_TYPE_RIGHT, NULL);
}

void event_Screen0_btnSource1_OnReleased(leButtonWidget* btn)
{
    fileSourceIdx = fileSourcePageNum * NUM_SOURCES_PER_SCREEN;

    scrnSetEvent(SCRN_EVT_SOURCE_SELECT, (void*) fileSourceIdx);
}

void event_Screen0_btnSource2_OnReleased(leButtonWidget* btn)
{
    fileSourceIdx = fileSourcePageNum * NUM_SOURCES_PER_SCREEN + 1;

    scrnSetEvent(SCRN_EVT_SOURCE_SELECT, (void*) fileSourceIdx);
}

void event_Screen0_btnSource3_OnReleased(leButtonWidget* btn)
{
    fileSourceIdx = fileSourcePageNum * NUM_SOURCES_PER_SCREEN + 2;

    scrnSetEvent(SCRN_EVT_SOURCE_SELECT, (void*) fileSourceIdx);
}

void event_Screen0_btnSource4_OnReleased(leButtonWidget* btn)
{
    fileSourceIdx = fileSourcePageNum * NUM_SOURCES_PER_SCREEN + 3;

    scrnSetEvent(SCRN_EVT_SOURCE_SELECT, (void*) fileSourceIdx);
}

void event_Screen0_btnSource5_OnReleased(leButtonWidget* btn)
{
    fileSourceIdx = fileSourcePageNum * NUM_SOURCES_PER_SCREEN + 4;

    scrnSetEvent(SCRN_EVT_SOURCE_SELECT, (void*) fileSourceIdx);
}

void event_Screen0_btnSourceScrollUp_OnReleased(leButtonWidget* btn)
{
    fileSourcePageNum = (fileSourcePageNum > 0) ?
        fileSourcePageNum - 1 : 0;

    scrnSetEvent(SCRN_EVT_SOURCE_SETPAGE, (void*) fileSourcePageNum);
}

void event_Screen0_btnSourceScrollDown_OnReleased(leButtonWidget* btn)
{
    fileSourcePageNum = (fileSourcePageNum < MAX_SOURCE_FILES/NUM_SOURCES_PER_SCREEN - 1) ?
        fileSourcePageNum + 1 : MAX_SOURCE_FILES/NUM_SOURCES_PER_SCREEN;

    scrnSetEvent(SCRN_EVT_SOURCE_SETPAGE, (void*) fileSourcePageNum);
}


/* Event Handlers */
void scrnPlayPauseEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    int parm = (int) screenEventParm;

    if (parm == EVT_PLAY)
    {
        char * filename = appGetSourceFileName(fileSourceIdx);
        if (filename != NULL)
        {
            APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqVolBeam, BEAM_COLOR_GREEN);
            APP_LE_SETBTNSTRING(Screen0_btnPlayPause, string_strPause);
            play_sound_file(filename);
            resume_sound_file();
        }
        else
        {
            Screen0_btnPlayPause->fn->setPressed(Screen0_btnPlayPause, LE_FALSE);
        }
    }   
    else
    {
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqVolBeam, BEAM_COLOR_WHITE);
        APP_LE_SETBTNSTRING(Screen0_btnPlayPause, string_strPlay);
        pause_sound_file();
    }
}

void scrnStopEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    Screen0_btnPlayPause->fn->setPressed(Screen0_btnPlayPause, LE_FALSE);
    APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqVolBeam, BEAM_COLOR_WHITE);
    stop_sound_file();
}

void scrnSwapEnabledEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    if (event == SCRN_EVT_SWAP_ENABLED)
    {
        APP_LE_SETBTNSTRING(Screen0_btnSwapEnable, string_strEnabled);
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqSwapBeam, BEAM_COLOR_GREEN);
        enable_swap_mode();
    }   
    else if (event == SCRN_EVT_SWAP_DISABLED)
    {
        APP_LE_SETBTNSTRING(Screen0_btnSwapEnable, string_strDisabled);
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqSwapBeam, BEAM_COLOR_WHITE);
        disable_swap_mode();
    }
}

void scrnMonoEnabledEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    if (event == SCRN_EVT_MONO_ENABLED)
    {
        APP_LE_SETBTNSTRING(Screen0_btnMonoEnable, string_strEnabled);
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqMonoBeam, BEAM_COLOR_GREEN);
        enable_mono_mode();
    }   
    else if (event == SCRN_EVT_MONO_DISABLED)
    {
        APP_LE_SETBTNSTRING(Screen0_btnMonoEnable, string_strDisabled);
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqMonoBeam, BEAM_COLOR_WHITE);
        printf("MONO DISABLED\r\n");
        disable_mono_mode();
    }
}

void scrnMonoTypeEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeMix, Btn2);
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeLeft, Btn2);
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeSat, Btn2);
    APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeRight, Btn2);

    switch(event)
    {
        case SCRN_EVT_MONO_TYPE_MIX:
        {
            APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeMix, Btn2P);
            APP_LE_SETBTNSTRING(Screen0_btnMonoType, string_strMix);
            set_mono_mode_type(MONO_MIX);
            break;
        }
        case SCRN_EVT_MONO_TYPE_LEFT:
        {
            APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeLeft, Btn2P);
            APP_LE_SETBTNSTRING(Screen0_btnMonoType, string_strLeft);
            set_mono_mode_type(MONO_LEFT);
            break;
        }
        case SCRN_EVT_MONO_TYPE_SAT:
        {
            APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeSat, Btn2P);
            APP_LE_SETBTNSTRING(Screen0_btnMonoType, string_strSat);
            set_mono_mode_type(MONO_SAT);
            break;
        }
        case SCRN_EVT_MONO_TYPE_RIGHT:
        {
            APP_LE_SETBTNIMAGE(Screen0_btnMonoTypeRight, Btn2P);
            APP_LE_SETBTNSTRING(Screen0_btnMonoType, string_strRight);
            set_mono_mode_type(MONO_RIGHT);
            break;
        }
        default:
            break;
    }
}

void scrnSourceEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    fileSourcePageNum = fileSourceIdx / NUM_SOURCES_PER_SCREEN;

    scrnUpdateSourceFilenames(fileSourcePageNum, fileSourceIdx);

    /* Show the source dialog box */
    APP_LE_SETX(Screen0_pnlSourceSelect, 10);
}

void scrnSourceSelectEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    unsigned int fileIndex = (unsigned int) screenEventParm;
    /* Update the sources dialog box filenames */
    scrnUpdateSourceFilenames(fileSourcePageNum, fileIndex);
}

void scrnSourcePageEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    unsigned int pageNum = (unsigned int) screenEventParm;

    /* Update the sources dialog box filenames */
    scrnUpdateSourceFilenames(pageNum, fileSourceIdx);
}

void scrnSourceCloseEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    scrnUpdateSourceFilename(fileSourceIdx);
    APP_LE_SETX(Screen0_pnlSourceSelect, -348);
}

void scrnDeemphEnabledEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    if (event == SCRN_EVT_DEEMPH_ENABLED)
    {
        APP_LE_SETBTNSTRING(Screen0_btnDeempEnable, string_strEnabled);
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqDeemphBeam, BEAM_COLOR_GREEN);
        enable_deemphasis_filter();
    }   
    else if (event == SCRN_EVT_DEEMPH_DISABLED)
    {
        APP_LE_SETBTNSTRING(Screen0_btnDeempEnable, string_strDisabled);
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqDeemphBeam, BEAM_COLOR_WHITE);
        disable_deemphasis_filter();
    }
}

void scrnBassSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    int parm = (int) screenEventParm;
    switch(parm)
    {
        case EQ_VAL_2:
        {
            set_equalizer(BBOOST12);
            break;
        }
        case EQ_VAL_1:
        {
            set_equalizer(BBOOST6);
            break;
        }
        case EQ_VAL_0:
        {
            // set_equalizer(ZERO); //FIX
            break;
        }
        case EQ_VAL_N1:
        {
            set_equalizer(BCUT6);
            break;
        }
        case EQ_VAL_N2:
        {
            set_equalizer(BCUT12);
            break;
        }
        default:
            break;
    }
}

void scrnMidSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    int parm = (int) screenEventParm;
    switch(parm)
    {
        case EQ_VAL_2:
        {
            set_equalizer(MBOOST8);
            break;
        }
        case EQ_VAL_1:
        {
            set_equalizer(MBOOST3);
            break;
        }
        case EQ_VAL_0:
        {
            // set_equalizer(ZERO); //FIX
            break;
        }
        case EQ_VAL_N1:
        {
            set_equalizer(MCUT3);
            break;
        }
        case EQ_VAL_N2:
        {
            set_equalizer(MCUT8);
            break;
        }
        default:
            break;
    }
}

void scrnTrebSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    int parm = (int) screenEventParm;
    switch(parm)
    {
        case EQ_VAL_2:
        {
            set_equalizer(TBOOST12);
            break;
        }
        case EQ_VAL_1:
        {
            set_equalizer(TBOOST6);
            break;
        }
        case EQ_VAL_0:
        {
            // set_equalizer(ZERO); //FIX
            break;
        }
        case EQ_VAL_N1:
        {
            set_equalizer(TCUT6);
            break;
        }
        case EQ_VAL_N2:
        {
            set_equalizer(TCUT12);
            break;
        }
        default:
            break;
    }
}

void scrnEqRstEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    APP_LE_SETY(Screen0_btnKnobBass, EQ_KNOB_YPOS_0);
    APP_LE_SETY(Screen0_btnKnobMid, EQ_KNOB_YPOS_0);
    APP_LE_SETY(Screen0_btnKnobTreble, EQ_KNOB_YPOS_0);
    set_equalizer(ZERO);
}

void scrnVolSetEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    int parm = (int) screenEventParm;
    if (parm < 100 && parm >= 0)
    {
        volume = parm;
        set_volume(volume);
    }
}

void scrnVolMuteEvtHndlr(SCREEN_EVENTS event, void * screenEventParm)
{
    int parm = (int) screenEventParm;

    if (parm == EVT_ON)
    {
        APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqVolBeam, BEAM_COLOR_RED);
        set_volume(0);
    }   
    else
    {
        if (Screen0_btnPlayPause->fn->getPressed(Screen0_btnPlayPause) == LE_TRUE)
        {
            APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqVolBeam, BEAM_COLOR_GREEN);
        }
        else
        {
            APP_LE_SHOWIMAGE_IDX(Screen0_imgSeqVolBeam, BEAM_COLOR_WHITE);
        }
        set_volume(volume);
    }
}

