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

static leDynamicString * roomNumberString;
static const APP_GUI_CTXT_t * guiContext;

void event_CompleteScreen_btnExit_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_WelcomeScreen);
}

void CompleteScreen_OnShow(void)
{

    roomNumberString = leDynamicString_New(); 
    roomNumberString->fn->setFont(roomNumberString, (leFont*) &Alata80);

    guiContext = APP_GUI_GetContext();
    if (guiContext != NULL)
    {    
        int error = 0;

        char tempString[MAX_TEMP_BUFF_LENGTH];

        snprintf(tempString, MAX_TEMP_BUFF_LENGTH, "%d",
                 guiContext->guestResInfo.roomNumber);
        roomNumberString->fn->setFromCStr(roomNumberString, tempString);
        APP_LE_SETLABELSTRING(CompleteScreen_lblRoomNumber, roomNumberString);

        if (guiContext->transType == CHECKIN)
        {


            CompleteScreen_lblStay->fn->setString(CompleteScreen_lblStay, 
                                                (leString *) &string_strYouStay);
            CompleteScreen_lblScan->fn->setVisible(CompleteScreen_lblScan, LE_TRUE);
            CompleteScreen_imgQRCode->fn->setVisible(CompleteScreen_imgQRCode, LE_TRUE);
            CompleteScreen_lblHope->fn->setString(CompleteScreen_lblHope,
                                                (leString *) &string_strHope);

            if (guiContext->upgradeLateCheckout == true)
            {
                    error = upgrade_reservation(
                    guiContext->guestResInfo.lastName,
                    guiContext->guestResInfo.confNum,
                    LATE_CHECKOUT);
            }

            if (error == 0 && guiContext->upgradeBalconyView == true)
            {
                error = upgrade_reservation(
                            guiContext->guestResInfo.lastName,
                            guiContext->guestResInfo.confNum,
                            BALCONY_VIEW);
            }

            if (error == 0 && guiContext->upgradeBreakfast == true)
            {
                error = upgrade_reservation(
                            guiContext->guestResInfo.lastName,
                            guiContext->guestResInfo.confNum,
                            BREAKFAST);
            }                                                
        }
        else 
        {
            CompleteScreen_lblStay->fn->setString(CompleteScreen_lblStay, 
                                                (leString *) &string_strYouCheckedOut);
            CompleteScreen_lblScan->fn->setVisible(CompleteScreen_lblScan, LE_FALSE);
            CompleteScreen_imgQRCode->fn->setVisible(CompleteScreen_imgQRCode, LE_FALSE);
            CompleteScreen_lblHope->fn->setString(CompleteScreen_lblHope,
                                                (leString *) &string_strHopeCheckout);
        }

        if (error == 0)
        {
            APP_GUI_PlayAudio((guiContext->transType == CHECKIN) 
                            ? AUDIO_CHECKIN_DONE : AUDIO_CHECKOUT_DONE);

            APP_GUI_CompleteTransaction(guiContext->guestResInfo.lastName,
                                        guiContext->guestResInfo.confNum,
                                        guiContext->transType);        
        }
    }
}

void CompleteScreen_OnHide(void)
{
    leString_Delete((leString *) roomNumberString);
}

void CompleteScreen_OnUpdate(void)
{
    
}