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
#include <string.h>

#include "gfx/legato/generated/le_gen_init.h"

#include "app_dataIntf.h"
#include "app_audioIntf.h"
#include "app_gui.h"

const char * monthNames[] = 
{
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec"
};

const char * weekNames[] = 
{
    "Sun",
    "Mon",
    "Tue",
    "Wed",
    "Thu",
    "Fri",
    "Sat",
};

static APP_GUI_CTXT_t guiContext;

void APP_GUI_InitContext(void)
{
    memset((void*) &guiContext, 0, sizeof(APP_GUI_CTXT_t));
}

const APP_GUI_CTXT_t * APP_GUI_GetContext(void)
{
    return &guiContext;
}

void APP_GUI_SetTransactionType(TRANS_t trans)
{
    guiContext.transType = trans;
}

void APP_GUI_SetUpgrade(UP_t upgrade, bool enabled)
{
    switch (upgrade)
    {
        case BALCONY_VIEW:
        {
            guiContext.upgradeBalconyView = enabled;
            break;
        }
        case LATE_CHECKOUT:
        {
            guiContext.upgradeLateCheckout = enabled;
            break;
        }
        case BREAKFAST:
        {
            guiContext.upgradeBreakfast = enabled;
            break;
        }
        default:
        {
            break;
        }
    }
}

TRANS_t APP_GUI_GetTransactionType(void)
{
    return guiContext.transType;
}

int APP_GUI_GetGuestDetails(const leString * lastName, const leString * confNum)
{
    uint32_t nameLength = lastName->fn->length(lastName);
    uint32_t confLength = confNum->fn->length(confNum);
    uint32_t i;
    
    /* empty strings */
    if (nameLength == 0 || confLength == 0)
    {
        return -1;
    }
    
    //convert leString to char array
    //direct char cast support ASCII chars only
    for (i = 0; i < nameLength && i < MAX_GUEST_NAME_LENGTH - 1; i++)
    {
        guiContext.guestResInfo.lastName[i] = (char) (lastName->fn->charAt(lastName, i));
    }

    guiContext.guestResInfo.lastName[i] = '\0';
    
    for (i = 0; i < nameLength && i < MAX_GUEST_NAME_LENGTH - 1; i++)
    {
        guiContext.guestResInfo.confNum[i] = (char) (confNum->fn->charAt(confNum, i));
    }

    guiContext.guestResInfo.confNum[i] = '\0';
    
    printf("name is %s \r\n", guiContext.guestResInfo.lastName);
    printf("conf is %s \r\n", guiContext.guestResInfo.confNum);
    
    return get_reservation(guiContext.guestResInfo.lastName,
                           guiContext.guestResInfo.confNum,
                           &guiContext.guestResInfo);
}

int APP_GUI_CompleteTransaction(const char * lastName, const char  * confNum, TRANS_t trans)
{
    return complete_reservation(lastName, confNum, trans);
}

void APP_GUI_PlayAudio(unsigned int audioId)
{
    play_sound(audioId);
}





