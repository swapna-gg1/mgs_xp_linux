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

#ifndef _APP_GUI_H
#define _APP_GUI_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

#define MAX_TEMP_BUFF_LENGTH 128

typedef struct
{
    TRANS_t transType;
    struct resInfo guestResInfo;
    bool upgradeLateCheckout;
    bool upgradeBalconyView;
    bool upgradeBreakfast;
} APP_GUI_CTXT_t;   

void APP_GUI_InitContext(void);
void APP_GUI_SetTransactionType(TRANS_t trans);
void APP_GUI_SetUpgrade(UP_t upgrade, bool enabled);
TRANS_t APP_GUI_GetTransactionType(void);
int APP_GUI_GetGuestDetails(const leString * lastName, const leString * confNum);
int APP_GUI_CompleteTransaction(const char * lastName, const char  * confNum, TRANS_t trans);
const APP_GUI_CTXT_t * APP_GUI_GetContext(void);
void APP_GUI_PlayAudio(unsigned int audioId);

extern const char * monthNames[];
extern const char * weekNames[];

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif

#endif

//DOM-IGNORE-END