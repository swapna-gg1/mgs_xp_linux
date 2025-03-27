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

#ifndef _APP_AUDIOINTF_H
#define _APP_AUDIOINTF_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

enum
{
    AUDIO_WELCOME,
    AUDIO_CHECKIN,
    AUDIO_CHECKOUT,
    AUDIO_STAYDETAILS,
    AUDIO_LATECHECKOUT_YES,
    AUDIO_LATECHECKOUT_NO,
    AUDIO_BALCONY_YES,
    AUDIO_BALCONY_NO,
    AUDIO_BREAKFAST_YES,
    AUDIO_BREAKFAST_NO,
    AUDIO_PAYMENT,
    AUDIO_CHECKIN_DONE,
    AUDIO_CHECKOUT_DONE,
};
    
int set_volume (unsigned int vol);
int play_sound (unsigned int id);

    
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif

#endif
//DOM-IGNORE-END