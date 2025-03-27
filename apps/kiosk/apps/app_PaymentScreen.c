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
    PAY_INIT,
    PAY_RUN,
    PAY_ERROR,
} PAYMENT_SCRN_STATE_t;

typedef enum
{
    PAY_EVT_NONE,
    PAY_EVT_BACK,
    PAY_EVT_CONTINUE,
    PAY_EVT_PAYCARD,
    PAY_EVT_PAYTAP,
} PAY_SCRN_EVENT_t;

static PAY_SCRN_EVENT_t payScreenEvent;

static PAYMENT_SCRN_STATE_t payScreenState;
static const APP_GUI_CTXT_t * guiContext;

static leDynamicString * datesString;
static leDynamicString * totalString;
static leDynamicString * roomInfoString;

void PayScreen_SetEvent(PAY_SCRN_EVENT_t event)
{
    payScreenEvent = event;
}

static void PaymentScreen_UpdateTotalLabel(float total)
{
    static char tempString[MAX_TEMP_BUFF_LENGTH];

    snprintf(tempString, MAX_TEMP_BUFF_LENGTH, "$%.02f USD", total);
    totalString->fn->setFromCStr(totalString, tempString);
    APP_LE_SETLABELSTRING(PaymentScreen_lblAmount, totalString);
}

void PaymentScreen_OnShow(void)
{
    //Allocate dynamic string object, must be freed with leString_Delete
    datesString = leDynamicString_New(); 
    datesString->fn->setFont(datesString, (leFont*) &Lora24);
    
    totalString = leDynamicString_New(); 
    totalString->fn->setFont(totalString, (leFont*) &Lora24);

    roomInfoString = leDynamicString_New(); 
    roomInfoString->fn->setFont(roomInfoString, (leFont*) &Lora24);

    payScreenEvent = PAY_EVT_NONE;

    guiContext = APP_GUI_GetContext();
    if (guiContext != NULL)
    {
        static char tempString[MAX_TEMP_BUFF_LENGTH];

        switch(guiContext->guestResInfo.bedType)
        {
            case KING:
            {
                APP_LE_SETLABELSTRING(PaymentScreen_lblBedDetails, &string_strBedKing);
                break;
            }
            case DOUBLE_QUEEN:
            {
                APP_LE_SETLABELSTRING(PaymentScreen_lblBedDetails, &string_strBedDouble);
                break;
            }
            case QUEEN:
            default:
            {
                APP_LE_SETLABELSTRING(PaymentScreen_lblBedDetails, &string_strBedQueen);
                break;
            }
        }

        switch(guiContext->transType)
        {
            case CHECKIN:
            {
                APP_LE_SETLABELSTRING(PaymentScreen_lblCheckInOut, &string_strCheckIn);
                
                APP_LE_SETVISIBLE(PaymentScreen_pnlDeposit, LE_TRUE);
                APP_LE_SETVISIBLE(PaymentScreen_pnlLateCheckoutCost, LE_FALSE);
                APP_LE_SETVISIBLE(PaymentScreen_pnlBalcony, LE_FALSE);
                APP_LE_SETVISIBLE(PaymentScreen_pnlBreakfast, LE_FALSE);

                PaymentScreen_UpdateTotalLabel(DEPOSIT_FEE);

                break;
            }
            case CHECKOUT:
            default:
            {
                APP_LE_SETLABELSTRING(PaymentScreen_lblCheckInOut, &string_strCheckOut);

                APP_LE_SETVISIBLE(PaymentScreen_pnlDeposit, LE_FALSE);
                APP_LE_SETVISIBLE(PaymentScreen_pnlLateCheckoutCost, 
                                 (guiContext->guestResInfo.hasLateCheckout == true) ? LE_TRUE : LE_FALSE);
                APP_LE_SETVISIBLE(PaymentScreen_pnlBalcony, 
                                 (guiContext->guestResInfo.hasBalconyView == true) ? LE_TRUE : LE_FALSE);
                APP_LE_SETVISIBLE(PaymentScreen_pnlBreakfast, 
                                 (guiContext->guestResInfo.hasBreakfast == true) ? LE_TRUE : LE_FALSE);

                PaymentScreen_UpdateTotalLabel(guiContext->guestResInfo.totalCharges);

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
        APP_LE_SETLABELSTRING(PaymentScreen_lblStayDates, datesString);

        snprintf(tempString, MAX_TEMP_BUFF_LENGTH, "%d %s, %d %s",
            guiContext->guestResInfo.numRooms,
            (guiContext->guestResInfo.numRooms < 2) ? "Room" : "Rooms",
            guiContext->guestResInfo.numAdults,
            (guiContext->guestResInfo.numAdults < 2) ? "Adult" : "Adults");

        roomInfoString->fn->setFromCStr(roomInfoString, tempString);
        APP_LE_SETLABELSTRING(PaymentScreen_lblRoomInfo, roomInfoString);

        APP_LE_SETPOSITION(PaymentScreen_pnlError, -540, 300);

        payScreenState = PAY_INIT;
    }
    else
    {
        APP_LE_SETPOSITION(PaymentScreen_pnlError, 380, 300);

        payScreenState = PAY_ERROR;
    }
}

void PaymentScreen_OnHide(void)
{
    
}

void PaymentScreen_OnUpdate(void)
{
    switch(payScreenState)
    {
        case PAY_INIT:
        {
            if (guiContext != NULL)
            {
                APP_GUI_PlayAudio(AUDIO_PAYMENT);

                payScreenState = PAY_RUN;
            }
            else
            {
                APP_LE_SETPOSITION(PaymentScreen_pnlError, 380, 300);

                payScreenState = PAY_ERROR;                
            }

            break;
        }
        case PAY_RUN:
        {
            switch(payScreenEvent)
            {
                case PAY_EVT_BACK:
                {
                    legato_showScreen(screenID_LastNameConfScreen);

                    break;
                }
                case PAY_EVT_PAYCARD:
                case PAY_EVT_PAYTAP:
                {
                    legato_showScreen(screenID_CompleteScreen);

                    break;
                }
                default:
                    break;
            }

            payScreenEvent = PAY_EVT_NONE;

            break;
        }
        case PAY_ERROR:
        {
            if (payScreenEvent == PAY_EVT_BACK)
            {
                legato_showScreen(screenID_WelcomeScreen);

                payScreenEvent = PAY_EVT_NONE;
            }
            break;
        }
        default:
            break;
    }
}

void event_PaymentScreen_btnBack_OnReleased(leButtonWidget* btn)
{
    PayScreen_SetEvent(PAY_EVT_BACK);
}

void event_PaymentScreen_btnPayCard_OnReleased(leButtonWidget* btn)
{
    PayScreen_SetEvent(PAY_EVT_PAYCARD);
}

void event_PaymentScreen_btnPayTap_OnReleased(leButtonWidget* btn)
{
    PayScreen_SetEvent(PAY_EVT_PAYTAP);
}

void event_PaymentScreen_btnErrorBack_OnReleased(leButtonWidget* btn)
{
    PayScreen_SetEvent(PAY_EVT_BACK);
}
