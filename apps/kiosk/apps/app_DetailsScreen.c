// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C)  Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END
#include <stdbool.h>
#include <stdio.h>

#include "gfx/legato/generated/le_gen_init.h"

#include "app_dataIntf.h"
#include "app_audioIntf.h"
#include "app_gui.h"
#include "app_screen.h"

typedef enum
{
    DET_INIT,
    DET_CHECKIN,
    DET_ERROR,
} DET_SCRN_STATE_t;

typedef enum
{
    DET_EVT_NONE,
    DET_EVT_BACK,
    DET_EVT_CONTINUE,
    DET_EVT_BALCONY_YES,
    DET_EVT_BALCONY_NO,
    DET_EVT_LATECHECKOUT_YES,
    DET_EVT_LATECHECKOUT_NO,
    DET_EVT_BREAKFAST_YES,
    DET_EVT_BREAKFAST_NO,
} DET_SCRN_EVENT_t;

static DET_SCRN_STATE_t detailScreenState;
static const APP_GUI_CTXT_t * guiContext;

static leDynamicString * datesString;
static leDynamicString * totalString;
static leDynamicString * roomInfoString;

static DET_SCRN_EVENT_t detailsScreenEvent;
static float totalCharges;

static void DetailsScreen_UpdateTotalLabel(float total)
{
    char tempString[MAX_TEMP_BUFF_LENGTH];

    snprintf(tempString, MAX_TEMP_BUFF_LENGTH, "$%.02f USD", total);
    totalString->fn->setFromCStr(totalString, tempString);
    APP_LE_SETLABELSTRING(DetailsScreen_lblAmount, totalString);
}


void DetailsScreen_SetEvent(DET_SCRN_EVENT_t event)
{
    detailsScreenEvent = event;
}

void DetailsScreen_OnShow(void)
{
    //Allocate dynamic string object, must be freed with leString_Delete
    datesString = leDynamicString_New(); 
    datesString->fn->setFont(datesString, (leFont*) &Lora24);
    
    totalString = leDynamicString_New(); 
    totalString->fn->setFont(totalString, (leFont*) &Lora24);

    roomInfoString = leDynamicString_New(); 
    roomInfoString->fn->setFont(roomInfoString, (leFont*) &Lora24);

    guiContext = APP_GUI_GetContext();
    if (guiContext != NULL)
    {
        char tempString[MAX_TEMP_BUFF_LENGTH];

        switch(guiContext->guestResInfo.bedType)
        {
            case KING:
            {
                APP_LE_SETLABELSTRING(DetailsScreen_lblBedDetails, &string_strBedKing);
                break;
            }
            case DOUBLE_QUEEN:
            {
                APP_LE_SETLABELSTRING(DetailsScreen_lblBedDetails, &string_strBedDouble);
                break;
            }
            case QUEEN:
            default:
            {
                APP_LE_SETLABELSTRING(DetailsScreen_lblBedDetails, &string_strBedQueen);
                break;
            }
        }

        snprintf(tempString, MAX_TEMP_BUFF_LENGTH, "%s %s %d, %d - %s %s %d, %d",
            weekNames[guiContext->guestResInfo.dateIn.wkDay],
            monthNames[guiContext->guestResInfo.dateIn.month],
            guiContext->guestResInfo.dateIn.day,
            guiContext->guestResInfo.dateIn.year,
            weekNames[guiContext->guestResInfo.dateOut.wkDay],
            monthNames[guiContext->guestResInfo.dateOut.month],
            guiContext->guestResInfo.dateOut.day,
            guiContext->guestResInfo.dateOut.year);

        datesString->fn->setFromCStr(datesString, tempString);
        APP_LE_SETLABELSTRING(DetailsScreen_lblStayDates, datesString);

        snprintf(tempString, MAX_TEMP_BUFF_LENGTH, "%d %s, %d %s",
            guiContext->guestResInfo.numRooms,
            (guiContext->guestResInfo.numRooms < 2) ? "Room" : "Rooms",
            guiContext->guestResInfo.numAdults,
            (guiContext->guestResInfo.numAdults < 2) ? "Adult" : "Adults");

        roomInfoString->fn->setFromCStr(roomInfoString, tempString);
        APP_LE_SETLABELSTRING(DetailsScreen_lblRoomInfo, roomInfoString);        

        totalCharges = guiContext->guestResInfo.totalCharges;

        DetailsScreen_UpdateTotalLabel(totalCharges);
        
        APP_LE_SETPOSITION(DetailsScreen_pnlError, -540, 300);

        if (guiContext->upgradeLateCheckout == true)
        {
            DetailsScreen_btnLateCheckout->fn->setPressed(DetailsScreen_btnLateCheckout, LE_TRUE);
        }

        if (guiContext->upgradeBalconyView == true)
        {
            DetailsScreen_btnBalconyView->fn->setPressed(DetailsScreen_btnBalconyView, LE_TRUE);
        }

        if (guiContext->upgradeBreakfast == true)
        {
            DetailsScreen_btnBreakfast->fn->setPressed(DetailsScreen_btnBreakfast, LE_TRUE);
        }            

        detailScreenState = DET_INIT;
    }
    else
    {
        APP_LE_SETPOSITION(DetailsScreen_pnlError, 380, 300);

        detailScreenState = DET_ERROR;
    }

    detailsScreenEvent = DET_EVT_NONE;    
}

void DetailsScreen_OnHide(void)
{
    leString_Delete((leString *) datesString);
    leString_Delete((leString *) totalString);
}

void DetailsScreen_OnUpdate(void)
{
    switch(detailScreenState)
    {
        case DET_INIT:
        {
            if (guiContext != NULL)
            {
                APP_GUI_PlayAudio(AUDIO_STAYDETAILS);
                detailScreenState = DET_CHECKIN;
            }
            else
            {
                APP_LE_SETPOSITION(DetailsScreen_pnlError, 380, 300);
                
                detailScreenState = DET_ERROR;
            }

            break;
        }
        case DET_CHECKIN:
        {
            switch(detailsScreenEvent)
            {
                case DET_EVT_BALCONY_YES:
                {
                    if (guiContext->upgradeBalconyView == false)
                    {
                        totalCharges += BALCONY_FEE;
                        APP_GUI_PlayAudio(AUDIO_BALCONY_YES);
                        APP_GUI_SetUpgrade(BALCONY_VIEW, true); 
                        DetailsScreen_UpdateTotalLabel(totalCharges);
                    }
                    break;
                }
                case DET_EVT_BALCONY_NO:
                {
                    if (guiContext->upgradeBalconyView == true)
                    {
                        totalCharges -= BALCONY_FEE;
                        APP_GUI_PlayAudio(AUDIO_BALCONY_NO);
                        APP_GUI_SetUpgrade(BALCONY_VIEW, false); 
                        DetailsScreen_UpdateTotalLabel(totalCharges);
                    }
                    break;
                }
                case DET_EVT_LATECHECKOUT_YES:
                {
                    if (guiContext->upgradeLateCheckout == false)
                    {
                        totalCharges += LATECHECKOUT_FEE;
                        APP_GUI_PlayAudio(AUDIO_LATECHECKOUT_YES);
                        APP_GUI_SetUpgrade(LATE_CHECKOUT, true); 
                        DetailsScreen_UpdateTotalLabel(totalCharges);
                    }
                    break;
                }
                case DET_EVT_LATECHECKOUT_NO:
                {
                    if (guiContext->upgradeLateCheckout == true)
                    {
                        totalCharges -= LATECHECKOUT_FEE;
                        APP_GUI_PlayAudio(AUDIO_LATECHECKOUT_NO);
                        APP_GUI_SetUpgrade(LATE_CHECKOUT, false); 
                        DetailsScreen_UpdateTotalLabel(totalCharges);
                    }                    
                    break;
                }
                case DET_EVT_BREAKFAST_YES:
                {
                    if (guiContext->upgradeBreakfast == false)
                    {
                        totalCharges += BREAKFAST_FEE;
                        APP_GUI_PlayAudio(AUDIO_BREAKFAST_YES);
                        APP_GUI_SetUpgrade(BREAKFAST, true);
                        DetailsScreen_UpdateTotalLabel(totalCharges);
                    }                    
                    break;
                }
                case DET_EVT_BREAKFAST_NO:
                {
                    if (guiContext->upgradeBreakfast == true)
                    {
                        totalCharges -= BREAKFAST_FEE;
                        APP_GUI_PlayAudio(AUDIO_BREAKFAST_NO);
                        APP_GUI_SetUpgrade(BREAKFAST, false); 
                        DetailsScreen_UpdateTotalLabel(totalCharges);
                    }

                    break;
                }
                case DET_EVT_BACK:
                {
                    legato_showScreen(screenID_LastNameConfScreen);

                    break;
                }
                case DET_EVT_CONTINUE:
                {
                    legato_showScreen(screenID_PaymentScreen);

                    break;
                }
                default:
                    break;
            }

            detailsScreenEvent = DET_EVT_NONE;

            break;
        }
        case DET_ERROR:
        {
            if (detailsScreenEvent == DET_EVT_BACK)
            {
                legato_showScreen(screenID_WelcomeScreen);

                detailsScreenEvent = DET_EVT_NONE;
            }

            break;
        }
        default:
        {
            break;
        }
    }
}

void event_DetailsScreen_btnBack_OnReleased(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_BACK);
}

void event_DetailsScreen_btnContinue_OnReleased(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_CONTINUE);
}

void event_DetailsScreen_btnBalconyView_OnReleased(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_BALCONY_NO);
}

void event_DetailsScreen_btnBreakfast_OnReleased(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_BREAKFAST_NO);
}

void event_DetailsScreen_btnLateCheckout_OnReleased(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_LATECHECKOUT_NO);
}

void event_DetailsScreen_btnBalconyView_OnPressed(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_BALCONY_YES);
}

void event_DetailsScreen_btnBreakfast_OnPressed(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_BREAKFAST_YES);
}

void event_DetailsScreen_btnLateCheckout_OnPressed(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_LATECHECKOUT_YES);
}

void event_DetailsScreen_btnErrorBack_0_OnReleased(leButtonWidget* btn)
{
    DetailsScreen_SetEvent(DET_EVT_BACK);
}

