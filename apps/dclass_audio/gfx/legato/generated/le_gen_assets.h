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
 * Name:   BeamBlue
 * Size:   134x34 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BeamBlue;

/*********************************
 * Legato Image Asset
 * Name:   BeamRed
 * Size:   134x34 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BeamRed;

/*********************************
 * Legato Image Asset
 * Name:   BeamWhite
 * Size:   134x34 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BeamWhite;

/*********************************
 * Legato Image Asset
 * Name:   Btn1
 * Size:   160x60 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn1;

/*********************************
 * Legato Image Asset
 * Name:   Btn1P
 * Size:   160x60 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn1P;

/*********************************
 * Legato Image Asset
 * Name:   Btn2
 * Size:   150x50 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn2;

/*********************************
 * Legato Image Asset
 * Name:   Btn2P
 * Size:   150x50 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn2P;

/*********************************
 * Legato Image Asset
 * Name:   Btn3
 * Size:   190x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn3;

/*********************************
 * Legato Image Asset
 * Name:   Btn3P
 * Size:   190x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn3P;

/*********************************
 * Legato Image Asset
 * Name:   Btn4
 * Size:   106x42 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn4;

/*********************************
 * Legato Image Asset
 * Name:   Btn4P
 * Size:   106x42 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn4P;

/*********************************
 * Legato Image Asset
 * Name:   BtnDown
 * Size:   49x66 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BtnDown;

/*********************************
 * Legato Image Asset
 * Name:   BtnDownP
 * Size:   49x66 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BtnDownP;

/*********************************
 * Legato Image Asset
 * Name:   BtnUp
 * Size:   49x66 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BtnUp;

/*********************************
 * Legato Image Asset
 * Name:   BtnUpP
 * Size:   49x66 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage BtnUpP;

/*********************************
 * Legato Image Asset
 * Name:   Eq
 * Size:   18x20 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Eq;

/*********************************
 * Legato Image Asset
 * Name:   Knob
 * Size:   32x64 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Knob;

/*********************************
 * Legato Image Asset
 * Name:   Wave
 * Size:   22x16 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Wave;

/*********************************
 * Legato Image Asset
 * Name:   Btn5
 * Size:   335x75 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn5;

/*********************************
 * Legato Image Asset
 * Name:   Btn5P
 * Size:   335x75 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Btn5P;

/*********************************
 * Legato Image Asset
 * Name:   Mchp_0
 * Size:   127x16 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Mchp_0;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         FontBig
 * Height:       23
 * Baseline:     24
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  10
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont FontBig;

/*********************************
 * Legato Font Asset
 * Name:         FontMidRegular
 * Height:       23
 * Baseline:     16
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  11
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont FontMidRegular;

/*********************************
 * Legato Font Asset
 * Name:         FontMidBold
 * Height:       23
 * Baseline:     18
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  14
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont FontMidBold;

/*********************************
 * Legato Font Asset
 * Name:         FontSmallRegular
 * Height:       23
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont FontSmallRegular;

/*********************************
 * Legato Font Asset
 * Name:         FontTinyRegular
 * Height:       23
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  15
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont FontTinyRegular;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   41
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_strMono    0
#define stringID_strClassD    1
#define stringID_strMonoType    2
#define stringID_strVol    3
#define stringID_strn3    4
#define stringID_strSourceSelect    5
#define stringID_strDeemph    6
#define stringID_strEnabled    7
#define stringID_strn6    8
#define stringID_strLeft    9
#define stringID_strn10    10
#define stringID_strSwap    11
#define stringID_strn15    12
#define stringID_strMid    13
#define stringID_strMute    14
#define stringID_strn25    15
#define stringID_str12    16
#define stringID_strn8    17
#define stringID_strEq    18
#define stringID_strSource    19
#define stringID_str0    20
#define stringID_strBass    21
#define stringID_strSat    22
#define stringID_strPause    23
#define stringID_str5    24
#define stringID_strRight    25
#define stringID_str6    26
#define stringID_strStop    27
#define stringID_str8    28
#define stringID_strn12    29
#define stringID_strn5    30
#define stringID_str10    31
#define stringID_strFilename    32
#define stringID_strClose    33
#define stringID_strMix    34
#define stringID_strPlay    35
#define stringID_strn20    36
#define stringID_strReset    37
#define stringID_strDisabled    38
#define stringID_strTreble    39
#define stringID_str3    40

extern const leStringTable stringTable;


// string list
extern leTableString string_strMono;
extern leTableString string_strClassD;
extern leTableString string_strMonoType;
extern leTableString string_strVol;
extern leTableString string_strn3;
extern leTableString string_strSourceSelect;
extern leTableString string_strDeemph;
extern leTableString string_strEnabled;
extern leTableString string_strn6;
extern leTableString string_strLeft;
extern leTableString string_strn10;
extern leTableString string_strSwap;
extern leTableString string_strn15;
extern leTableString string_strMid;
extern leTableString string_strMute;
extern leTableString string_strn25;
extern leTableString string_str12;
extern leTableString string_strn8;
extern leTableString string_strEq;
extern leTableString string_strSource;
extern leTableString string_str0;
extern leTableString string_strBass;
extern leTableString string_strSat;
extern leTableString string_strPause;
extern leTableString string_str5;
extern leTableString string_strRight;
extern leTableString string_str6;
extern leTableString string_strStop;
extern leTableString string_str8;
extern leTableString string_strn12;
extern leTableString string_strn5;
extern leTableString string_str10;
extern leTableString string_strFilename;
extern leTableString string_strClose;
extern leTableString string_strMix;
extern leTableString string_strPlay;
extern leTableString string_strn20;
extern leTableString string_strReset;
extern leTableString string_strDisabled;
extern leTableString string_strTreble;
extern leTableString string_str3;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
