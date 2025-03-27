#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "app_gui.h"

#define MIN_PAPANEL_YPOS (-424)
#define MAX_PAPANEL_YPOS (212)
#define MIN_TOUCH_SCROLL_DELTA 25
#define PANEL_SCROLL_DELTA 106

typedef struct 
{
    leWidget ** imgPAPanel;
    int32_t pAPanelYPos;
} PA_PANEL_t;

static PA_PANEL_t paPanels[PA_MAX] = 
{
    {(leWidget **) &HomeScreen_imgPA0Panel, 0},
    {(leWidget **) &HomeScreen_imgPA1Panel, 106},
    {(leWidget **) &HomeScreen_imgPA2Panel, 212},
    {(leWidget **) &HomeScreen_imgPA3Panel, 318},
    {(leWidget **) &HomeScreen_imgPA4Panel, 424}
};

static PA_TYPE_t activePAPanel = PA_ALL;
static int32_t lastY;

/* This will capture touch events on the PA Panel to handle scrolling */
static leBool PAPanel_filterEvent(leWidget* target, leWidgetEvent* evt, void* data)
{
    leBool retval = LE_FALSE;

    int32_t y, deltaY;
    
    switch(evt->id)
    {
        case LE_EVENT_TOUCH_DOWN:
        {
            lastY = ((leWidgetEvent_TouchDown *) evt)->y;                    
            
            evt->accepted = LE_TRUE;
            evt->owner = target;
            
            retval = LE_TRUE;
            
            break;
        }   
        case LE_EVENT_TOUCH_UP:            
        {
            y = ((leWidgetEvent_TouchMove *) evt)->y;

            /* Only scroll if all panels are visible */
            if (activePAPanel == PA_ALL)
            {
                int32_t panelY = HomeScreen_pnlPAPanels->fn->getY(HomeScreen_pnlPAPanels);
                int32_t i;

                for (i = PA_MAX - 1; i >= 0; i--)
                {
                    if (panelY <= (-paPanels[i].pAPanelYPos))
                    {
                        HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, -paPanels[i].pAPanelYPos);
                        break;
                    }
                    else if (panelY > 0)
                    {
                        HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, 0);
                        break;
                    }
                }
            }

            
            evt->accepted = LE_TRUE;
                    
            retval = LE_TRUE;

            break;        
        }
        case LE_EVENT_TOUCH_MOVE:            
        {
            y = ((leWidgetEvent_TouchMove *) evt)->y;

            /* Only scroll if all panels are visible */
            if (activePAPanel == PA_ALL)
            {
                int32_t panelY = HomeScreen_pnlPAPanels->fn->getY(HomeScreen_pnlPAPanels);

                deltaY = y - lastY;

                if (abs(deltaY) > MIN_TOUCH_SCROLL_DELTA)
                {

                    panelY = (deltaY < 0) ? panelY - PANEL_SCROLL_DELTA : panelY + PANEL_SCROLL_DELTA;

                    if (panelY >= MIN_PAPANEL_YPOS && panelY <= MAX_PAPANEL_YPOS)
                    {
                        HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, panelY);
                    }
                    // else if (panelY < MIN_PAPANEL_YPOS)
                    // {
                    //     HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, MIN_PAPANEL_YPOS);
                    // }
                    // else if (panelY > 0)
                    // {
                    //     HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, 0);
                    // }

                    lastY = y;
                }
            }
            
            evt->accepted = LE_TRUE;
                    
            retval = LE_TRUE;
           
            break;
        }
        default:
            break;
    }
    
   return retval;
}

static leWidgetEventFilter PAPanel_eventFilter =
{
    PAPanel_filterEvent,
    NULL
};

static void HomeScreen_ShowPAPanel(PA_TYPE_t pa)
{
    uint32_t i;

    if (pa == PA_ALL)
    {
        for (i = 0; i < PA_ALL; i++)
        {
            (*(paPanels[i].imgPAPanel))->fn->setVisible(*(paPanels[i].imgPAPanel), LE_TRUE);
        }

        HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, 0);

        activePAPanel = PA_ALL;
    }
    else if (pa < PA_ALL)
    {
        for (i = 0; i < PA_ALL; i++)
        {
            (*(paPanels[i].imgPAPanel))->fn->setVisible(*(paPanels[i].imgPAPanel), LE_FALSE);
        }

        (*(paPanels[pa].imgPAPanel))->fn->setVisible(*(paPanels[pa].imgPAPanel), LE_TRUE);

        HomeScreen_pnlPAPanels->fn->setY(HomeScreen_pnlPAPanels, -paPanels[pa].pAPanelYPos);

        activePAPanel = pa;
    }
}

void HomeScreen_OnShow(void)
{
    HomeScreen_pnlPAPanels->fn->installEventFilter(HomeScreen_pnlPAPanels, PAPanel_eventFilter);
}

void HomeScreen_OnHide(void)
{
    HomeScreen_pnlPAPanels->fn->removeEventFilter(HomeScreen_pnlPAPanels, PAPanel_eventFilter);
}

void HomeScreen_OnUpdate(void)
{

}

void event_HomeScreen_btnPower_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_LandingPage);
}

void event_HomeScreen_btnPA0Tab_OnReleased(leButtonWidget* btn)
{
    HomeScreen_ShowPAPanel(PA0);
}

void event_HomeScreen_btnPA1Tab_OnReleased(leButtonWidget* btn)
{
    HomeScreen_ShowPAPanel(PA1);
}

void event_HomeScreen_btnPA2Tab_OnReleased(leButtonWidget* btn)
{
    HomeScreen_ShowPAPanel(PA2);
}

void event_HomeScreen_btnPA3Tab_OnReleased(leButtonWidget* btn)
{
    HomeScreen_ShowPAPanel(PA3);
}

void event_HomeScreen_btnAllPAsTab_OnReleased(leButtonWidget* btn)
{
    HomeScreen_ShowPAPanel(PA_ALL);
}