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

#include "gfx/legato/generated/le_gen_init.h"

#include "app_dataIntf.h"
#include "app_audioIntf.h"
#include "app_gui.h"

void WelcomeScreen_OnShow(void)
{
    APP_GUI_InitContext();

    APP_GUI_PlayAudio(AUDIO_WELCOME);
    
}

void WelcomeScreen_OnHide(void)
{
    
}

void WelcomeScreen_OnUpdate(void)
{
    
}

void event_WelcomeScreen_btnChkOut_OnReleased(leButtonWidget* btn)
{
    APP_GUI_SetTransactionType(CHECKOUT);
    
    legato_showScreen(screenID_LastNameConfScreen);
}

void event_WelcomeScreen_btnChkIn_OnReleased(leButtonWidget* btn)
{
    APP_GUI_SetTransactionType(CHECKIN);
    
    legato_showScreen(screenID_LastNameConfScreen);
}
