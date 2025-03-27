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
 * Name:   imgPassFail
 * Size:   20x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgPassFail;

/*********************************
 * Legato Image Asset
 * Name:   imgHome
 * Size:   56x56 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgHome;

/*********************************
 * Legato Image Asset
 * Name:   imgSettings
 * Size:   40x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgSettings;

/*********************************
 * Legato Image Asset
 * Name:   imgNotes
 * Size:   40x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgNotes;

/*********************************
 * Legato Image Asset
 * Name:   imgProgram
 * Size:   40x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgProgram;

/*********************************
 * Legato Image Asset
 * Name:   imgPower
 * Size:   40x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgPower;

/*********************************
 * Legato Image Asset
 * Name:   imgMchp
 * Size:   50x26 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgMchp;

/*********************************
 * Legato Image Asset
 * Name:   imgMenuButton
 * Size:   146x68 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgMenuButton;

/*********************************
 * Legato Image Asset
 * Name:   imgPABar
 * Size:   138x2 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgPABar;

/*********************************
 * Legato Image Asset
 * Name:   imgPABarRed
 * Size:   138x2 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgPABarRed;

/*********************************
 * Legato Image Asset
 * Name:   imgBigButton
 * Size:   245x115 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgBigButton;

/*********************************
 * Legato Image Asset
 * Name:   imgOperator
 * Size:   32x32 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgOperator;

/*********************************
 * Legato Image Asset
 * Name:   imgAdmin
 * Size:   32x32 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgAdmin;

/*********************************
 * Legato Image Asset
 * Name:   imgPM5Logo
 * Size:   188x179 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgPM5Logo;

/*********************************
 * Legato Image Asset
 * Name:   panel_back
 * Size:   680x101 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage panel_back;

/*********************************
 * Legato Image Asset
 * Name:   passfail_back
 * Size:   20x48 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage passfail_back;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         InterSmall
 * Height:       38
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  13
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterSmall;

/*********************************
 * Legato Font Asset
 * Name:         InterBigSemiBold
 * Height:       38
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  4
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterBigSemiBold;

/*********************************
 * Legato Font Asset
 * Name:         InterSmallSemiBold
 * Height:       38
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  13
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterSmallSemiBold;

/*********************************
 * Legato Font Asset
 * Name:         InterMidSmallSemiBold
 * Height:       38
 * Baseline:     18
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  2
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont InterMidSmallSemiBold;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   26
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_strEnv    0
#define stringID_strOperator    1
#define stringID_strProgram    2
#define stringID_strFailed    3
#define stringID_strPA2    4
#define stringID_strSocket    5
#define stringID_strPA1Big    6
#define stringID_strPA3Big    7
#define stringID_strRead    8
#define stringID_strDefaultCount    9
#define stringID_strPassed    10
#define stringID_strPA4Big    11
#define stringID_strAllPAs    12
#define stringID_strPA2Big    13
#define stringID_strAdmin    14
#define stringID_strPA1    15
#define stringID_strDefaulSocket    16
#define stringID_strPA0    17
#define stringID_strDevice    18
#define stringID_strDefaultDev    19
#define stringID_strBlank    20
#define stringID_strPA0Big    21
#define stringID_strPA3    22
#define stringID_strDefaulEnv    23
#define stringID_strErase    24
#define stringID_strVerify    25

extern const leStringTable stringTable;


// string list
extern leTableString string_strEnv;
extern leTableString string_strOperator;
extern leTableString string_strProgram;
extern leTableString string_strFailed;
extern leTableString string_strPA2;
extern leTableString string_strSocket;
extern leTableString string_strPA1Big;
extern leTableString string_strPA3Big;
extern leTableString string_strRead;
extern leTableString string_strDefaultCount;
extern leTableString string_strPassed;
extern leTableString string_strPA4Big;
extern leTableString string_strAllPAs;
extern leTableString string_strPA2Big;
extern leTableString string_strAdmin;
extern leTableString string_strPA1;
extern leTableString string_strDefaulSocket;
extern leTableString string_strPA0;
extern leTableString string_strDevice;
extern leTableString string_strDefaultDev;
extern leTableString string_strBlank;
extern leTableString string_strPA0Big;
extern leTableString string_strPA3;
extern leTableString string_strDefaulEnv;
extern leTableString string_strErase;
extern leTableString string_strVerify;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
