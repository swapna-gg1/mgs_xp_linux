/*******************************************************************************
 Module for Microchip Legato Graphics Library

  Company:
    Microchip Technology Inc.

  File Name:
    le_gen_assets.h

  Summary:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.


  Description:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.

*******************************************************************************/


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

#ifndef LE_GEN_ASSETS_H
#define LE_GEN_ASSETS_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

#include "gfx/legato/legato.h"

extern const lePalette leGlobalPalette;

/*****************************************************************************
 * Legato Graphics Image Assets
 *****************************************************************************/
/*********************************
 * Legato Image Asset
 * Name:   bolt
 * Size:   50x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage bolt;

/*********************************
 * Legato Image Asset
 * Name:   ButtonOutline
 * Size:   106x43 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ButtonOutline;

/*********************************
 * Legato Image Asset
 * Name:   ChargingIcon
 * Size:   14x20 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ChargingIcon;

/*********************************
 * Legato Image Asset
 * Name:   CreditCard
 * Size:   65x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage CreditCard;

/*********************************
 * Legato Image Asset
 * Name:   finance
 * Size:   15x14 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage finance;

/*********************************
 * Legato Image Asset
 * Name:   GraphViewButton
 * Size:   104x43 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage GraphViewButton;

/*********************************
 * Legato Image Asset
 * Name:   Group
 * Size:   50x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Group;

/*********************************
 * Legato Image Asset
 * Name:   MetricViewButton
 * Size:   106x43 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage MetricViewButton;

/*********************************
 * Legato Image Asset
 * Name:   MGS_Logo
 * Size:   108x24 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage MGS_Logo;

/*********************************
 * Legato Image Asset
 * Name:   NotConnectedIcon
 * Size:   25x24 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage NotConnectedIcon;

/*********************************
 * Legato Image Asset
 * Name:   power_off
 * Size:   25x24 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage power_off;

/*********************************
 * Legato Image Asset
 * Name:   QRCode
 * Size:   50x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage QRCode;

/*********************************
 * Legato Image Asset
 * Name:   RFID
 * Size:   50x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage RFID;

/*********************************
 * Legato Image Asset
 * Name:   CarImage
 * Size:   281x383 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage CarImage;

/*********************************
 * Legato Image Asset
 * Name:   BattEmpty
 * Size:   256x122 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BattEmpty;

/*********************************
 * Legato Image Asset
 * Name:   BattFull
 * Size:   306x180 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BattFull;

/*********************************
 * Legato Image Asset
 * Name:   MGSLogoBig
 * Size:   174x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage MGSLogoBig;

/*********************************
 * Legato Image Asset
 * Name:   Image0
 * Size:   220x30 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Image0;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         Inter12
 * Height:       38
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  16
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Inter12;

/*********************************
 * Legato Font Asset
 * Name:         InterBlack
 * Height:       38
 * Baseline:     39
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  14
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont InterBlack;

/*********************************
 * Legato Font Asset
 * Name:         InterBlack15
 * Height:       38
 * Baseline:     15
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  5
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBlack15;

/*********************************
 * Legato Font Asset
 * Name:         InterBold14
 * Height:       38
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  15
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBold14;

/*********************************
 * Legato Font Asset
 * Name:         InterLight15
 * Height:       38
 * Baseline:     15
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  14
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterLight15;

/*********************************
 * Legato Font Asset
 * Name:         InterBlock25
 * Height:       38
 * Baseline:     25
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  5
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBlock25;

/*********************************
 * Legato Font Asset
 * Name:         InterBlack32
 * Height:       38
 * Baseline:     31
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  8
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBlack32;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   25
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_FullyCharged    0
#define stringID_Unplug    1
#define stringID_Plug    2
#define stringID_BattPctValue    3
#define stringID_DelEnergy    4
#define stringID_Charging    5
#define stringID_ElapsedTimeValue    6
#define stringID_TimeValue    7
#define stringID_GraphLabel    8
#define stringID_PaymentTitle    9
#define stringID_ElapsedTime    10
#define stringID_PayInBrowser    11
#define stringID_DelEnergyValue    12
#define stringID_OutputPower    13
#define stringID_PayCC    14
#define stringID_BattFullValue    15
#define stringID_OutputPowerValue    16
#define stringID_Average    17
#define stringID_RemTime    18
#define stringID_RemTimeValue    19
#define stringID_OutPower    20
#define stringID_NotConnected    21
#define stringID_RFIDCard    22
#define stringID_ExitString    23
#define stringID_DateValue    24

extern const leStringTable stringTable;


// string list
extern leTableString string_FullyCharged;
extern leTableString string_Unplug;
extern leTableString string_Plug;
extern leTableString string_BattPctValue;
extern leTableString string_DelEnergy;
extern leTableString string_Charging;
extern leTableString string_ElapsedTimeValue;
extern leTableString string_TimeValue;
extern leTableString string_GraphLabel;
extern leTableString string_PaymentTitle;
extern leTableString string_ElapsedTime;
extern leTableString string_PayInBrowser;
extern leTableString string_DelEnergyValue;
extern leTableString string_OutputPower;
extern leTableString string_PayCC;
extern leTableString string_BattFullValue;
extern leTableString string_OutputPowerValue;
extern leTableString string_Average;
extern leTableString string_RemTime;
extern leTableString string_RemTimeValue;
extern leTableString string_OutPower;
extern leTableString string_NotConnected;
extern leTableString string_RFIDCard;
extern leTableString string_ExitString;
extern leTableString string_DateValue;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
