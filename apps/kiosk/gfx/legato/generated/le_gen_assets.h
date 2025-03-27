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
 * Name:   mchpLogo_small
 * Size:   120x28 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage mchpLogo_small;

/*********************************
 * Legato Image Asset
 * Name:   CheckOut
 * Size:   260x354 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage CheckOut;

/*********************************
 * Legato Image Asset
 * Name:   CheckIn
 * Size:   260x353 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage CheckIn;

/*********************************
 * Legato Image Asset
 * Name:   MGS_40h
 * Size:   149x40 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage MGS_40h;

/*********************************
 * Legato Image Asset
 * Name:   BackCircles
 * Size:   1280x830 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage BackCircles;

/*********************************
 * Legato Image Asset
 * Name:   upgradeOverlay200
 * Size:   200x105 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage upgradeOverlay200;

/*********************************
 * Legato Image Asset
 * Name:   BackspaceKey
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage BackspaceKey;

/*********************************
 * Legato Image Asset
 * Name:   BackspaceKeyPressed
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage BackspaceKeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   contactless90
 * Size:   90x90 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage contactless90;

/*********************************
 * Legato Image Asset
 * Name:   credit_card90
 * Size:   90x90 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage credit_card90;

/*********************************
 * Legato Image Asset
 * Name:   EnterKey
 * Size:   120x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage EnterKey;

/*********************************
 * Legato Image Asset
 * Name:   EnterKeyPressed
 * Size:   120x80 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage EnterKeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   imgBack
 * Size:   130x57 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgBack;

/*********************************
 * Legato Image Asset
 * Name:   imgBackWhite
 * Size:   130x57 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgBackWhite;

/*********************************
 * Legato Image Asset
 * Name:   Key
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage Key;

/*********************************
 * Legato Image Asset
 * Name:   KeyPressed
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage KeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   qrcode190
 * Size:   190x190 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage qrcode190;

/*********************************
 * Legato Image Asset
 * Name:   ShiftKey
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage ShiftKey;

/*********************************
 * Legato Image Asset
 * Name:   ShiftKeyPressed
 * Size:   80x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage ShiftKeyPressed;

/*********************************
 * Legato Image Asset
 * Name:   spacekey
 * Size:   580x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage spacekey;

/*********************************
 * Legato Image Asset
 * Name:   spacekeypressed
 * Size:   580x80 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage spacekeypressed;

/*********************************
 * Legato Image Asset
 * Name:   upgradeBalcony200
 * Size:   200x105 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage upgradeBalcony200;

/*********************************
 * Legato Image Asset
 * Name:   upgradeBreakfast200
 * Size:   200x105 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage upgradeBreakfast200;

/*********************************
 * Legato Image Asset
 * Name:   upgradeLate200
 * Size:   200x105 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage upgradeLate200;

/*********************************
 * Legato Image Asset
 * Name:   Image0
 * Size:   761x175 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage Image0;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         Alata56
 * Height:       21
 * Baseline:     50
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  13
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Alata56;

/*********************************
 * Legato Font Asset
 * Name:         Alata40
 * Height:       21
 * Baseline:     36
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  16
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Alata40;

/*********************************
 * Legato Font Asset
 * Name:         Alata80
 * Height:       21
 * Baseline:     71
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  13
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Alata80;

/*********************************
 * Legato Font Asset
 * Name:         Lora32
 * Height:       20
 * Baseline:     27
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  13
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Lora32;

/*********************************
 * Legato Font Asset
 * Name:         Roboto
 * Height:       37
 * Baseline:     26
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  6
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Roboto;

/*********************************
 * Legato Font Asset
 * Name:         RobotoSmall
 * Height:       37
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  12
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont RobotoSmall;

/*********************************
 * Legato Font Asset
 * Name:         Lora24
 * Height:       20
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  19
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Lora24;

/*********************************
 * Legato Font Asset
 * Name:         Alata
 * Height:       21
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  14
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Alata;

/*********************************
 * Legato Font Asset
 * Name:         Lora14
 * Height:       20
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  16
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Lora14;

/*********************************
 * Legato Font Asset
 * Name:         NotoSans
 * Height:       21
 * Baseline:     9
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  8
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont NotoSans;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   140
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_totalPriceDefault    0
#define stringID_strn    1
#define stringID_strE    2
#define stringID_strXPLinux    3
#define stringID_str3    4
#define stringID_strf    5
#define stringID_strplus    6
#define stringID_strDetailsInfo    7
#define stringID_strUpgrades    8
#define stringID_strN    9
#define stringID_strEnterName    10
#define stringID_strBalconySmall    11
#define stringID_strBedQueen    12
#define stringID_strqs    13
#define stringID_strDateDetails    14
#define stringID_strPress    15
#define stringID_strpct    16
#define stringID_strQ    17
#define stringID_strF    18
#define stringID_strBreakfastSmall    19
#define stringID_strCheckIn    20
#define stringID_strRoomNumDefault    21
#define stringID_strquot    22
#define stringID_stra    23
#define stringID_strHopeCheckout    24
#define stringID_strI    25
#define stringID_strexc    26
#define stringID_strSummary    27
#define stringID_str0    28
#define stringID_strCheckOut    29
#define stringID_strRoomDetails    30
#define stringID_strO    31
#define stringID_str6    32
#define stringID_strB    33
#define stringID_strt    34
#define stringID_strYouCheckedOut    35
#define stringID_strx    36
#define stringID_str7    37
#define stringID_strv    38
#define stringID_strp    39
#define stringID_strd    40
#define stringID_strC    41
#define stringID_strUpgradesInfo    42
#define stringID_strBreakfastPrice    43
#define stringID_strBedKing    44
#define stringID_strles    45
#define stringID_strChargesNote    46
#define stringID_strHope    47
#define stringID_strz    48
#define stringID_strL    49
#define stringID_strat    50
#define stringID_strScan    51
#define stringID_strb    52
#define stringID_stry    53
#define stringID_strHotelName    54
#define stringID_strCma    55
#define stringID_stroppar    56
#define stringID_strJ    57
#define stringID_strLastName    58
#define stringID_strk    59
#define stringID_strErrorOccured    60
#define stringID_strEnter    61
#define stringID_strapos    62
#define stringID_strConfNum    63
#define stringID_strj    64
#define stringID_strA    65
#define stringID_strabc    66
#define stringID_strM    67
#define stringID_strK    68
#define stringID_strr    69
#define stringID_strNum    70
#define stringID_strHotelNameSmall    71
#define stringID_strDeposit    72
#define stringID_strDot    73
#define stringID_strBalconyView    74
#define stringID_strNeeded    75
#define stringID_strbar    76
#define stringID_strContinue    77
#define stringID_strclpar    78
#define stringID_strs    79
#define stringID_strSpace    80
#define stringID_strDepositHeld    81
#define stringID_stri    82
#define stringID_strV    83
#define stringID_strsemi    84
#define stringID_strP    85
#define stringID_strTotalCharges    86
#define stringID_strBalconyPrice    87
#define stringID_strLateCheckout    88
#define stringID_str9    89
#define stringID_strhyph    90
#define stringID_strT    91
#define stringID_stre    92
#define stringID_strc    93
#define stringID_strH    94
#define stringID_strX    95
#define stringID_strw    96
#define stringID_str1    97
#define stringID_strYouStay    98
#define stringID_strBedDouble    99
#define stringID_strtild    100
#define stringID_strG    101
#define stringID_strslash    102
#define stringID_strWelcome    103
#define stringID_strBreakfast    104
#define stringID_strClose    105
#define stringID_strpnd    106
#define stringID_stramp    107
#define stringID_strU    108
#define stringID_str4    109
#define stringID_streq    110
#define stringID_strStayDetails    111
#define stringID_strW    112
#define stringID_strErrorGuestInfo    113
#define stringID_strcol    114
#define stringID_strDepositAmount    115
#define stringID_strdol    116
#define stringID_strCard    117
#define stringID_strEnterConf    118
#define stringID_str2    119
#define stringID_stro    120
#define stringID_strD    121
#define stringID_strm    122
#define stringID_strstar    123
#define stringID_strR    124
#define stringID_strS    125
#define stringID_strbslash    126
#define stringID_strl    127
#define stringID_strLateCheckoutPrice    128
#define stringID_strg    129
#define stringID_strLateCheckoutSmall    130
#define stringID_strY    131
#define stringID_strZ    132
#define stringID_stru    133
#define stringID_strSorry    134
#define stringID_str5    135
#define stringID_strq    136
#define stringID_str8    137
#define stringID_strh    138
#define stringID_strmor    139

extern const leStringTable stringTable;


// string list
extern leTableString string_totalPriceDefault;
extern leTableString string_strn;
extern leTableString string_strE;
extern leTableString string_strXPLinux;
extern leTableString string_str3;
extern leTableString string_strf;
extern leTableString string_strplus;
extern leTableString string_strDetailsInfo;
extern leTableString string_strUpgrades;
extern leTableString string_strN;
extern leTableString string_strEnterName;
extern leTableString string_strBalconySmall;
extern leTableString string_strBedQueen;
extern leTableString string_strqs;
extern leTableString string_strDateDetails;
extern leTableString string_strPress;
extern leTableString string_strpct;
extern leTableString string_strQ;
extern leTableString string_strF;
extern leTableString string_strBreakfastSmall;
extern leTableString string_strCheckIn;
extern leTableString string_strRoomNumDefault;
extern leTableString string_strquot;
extern leTableString string_stra;
extern leTableString string_strHopeCheckout;
extern leTableString string_strI;
extern leTableString string_strexc;
extern leTableString string_strSummary;
extern leTableString string_str0;
extern leTableString string_strCheckOut;
extern leTableString string_strRoomDetails;
extern leTableString string_strO;
extern leTableString string_str6;
extern leTableString string_strB;
extern leTableString string_strt;
extern leTableString string_strYouCheckedOut;
extern leTableString string_strx;
extern leTableString string_str7;
extern leTableString string_strv;
extern leTableString string_strp;
extern leTableString string_strd;
extern leTableString string_strC;
extern leTableString string_strUpgradesInfo;
extern leTableString string_strBreakfastPrice;
extern leTableString string_strBedKing;
extern leTableString string_strles;
extern leTableString string_strChargesNote;
extern leTableString string_strHope;
extern leTableString string_strz;
extern leTableString string_strL;
extern leTableString string_strat;
extern leTableString string_strScan;
extern leTableString string_strb;
extern leTableString string_stry;
extern leTableString string_strHotelName;
extern leTableString string_strCma;
extern leTableString string_stroppar;
extern leTableString string_strJ;
extern leTableString string_strLastName;
extern leTableString string_strk;
extern leTableString string_strErrorOccured;
extern leTableString string_strEnter;
extern leTableString string_strapos;
extern leTableString string_strConfNum;
extern leTableString string_strj;
extern leTableString string_strA;
extern leTableString string_strabc;
extern leTableString string_strM;
extern leTableString string_strK;
extern leTableString string_strr;
extern leTableString string_strNum;
extern leTableString string_strHotelNameSmall;
extern leTableString string_strDeposit;
extern leTableString string_strDot;
extern leTableString string_strBalconyView;
extern leTableString string_strNeeded;
extern leTableString string_strbar;
extern leTableString string_strContinue;
extern leTableString string_strclpar;
extern leTableString string_strs;
extern leTableString string_strSpace;
extern leTableString string_strDepositHeld;
extern leTableString string_stri;
extern leTableString string_strV;
extern leTableString string_strsemi;
extern leTableString string_strP;
extern leTableString string_strTotalCharges;
extern leTableString string_strBalconyPrice;
extern leTableString string_strLateCheckout;
extern leTableString string_str9;
extern leTableString string_strhyph;
extern leTableString string_strT;
extern leTableString string_stre;
extern leTableString string_strc;
extern leTableString string_strH;
extern leTableString string_strX;
extern leTableString string_strw;
extern leTableString string_str1;
extern leTableString string_strYouStay;
extern leTableString string_strBedDouble;
extern leTableString string_strtild;
extern leTableString string_strG;
extern leTableString string_strslash;
extern leTableString string_strWelcome;
extern leTableString string_strBreakfast;
extern leTableString string_strClose;
extern leTableString string_strpnd;
extern leTableString string_stramp;
extern leTableString string_strU;
extern leTableString string_str4;
extern leTableString string_streq;
extern leTableString string_strStayDetails;
extern leTableString string_strW;
extern leTableString string_strErrorGuestInfo;
extern leTableString string_strcol;
extern leTableString string_strDepositAmount;
extern leTableString string_strdol;
extern leTableString string_strCard;
extern leTableString string_strEnterConf;
extern leTableString string_str2;
extern leTableString string_stro;
extern leTableString string_strD;
extern leTableString string_strm;
extern leTableString string_strstar;
extern leTableString string_strR;
extern leTableString string_strS;
extern leTableString string_strbslash;
extern leTableString string_strl;
extern leTableString string_strLateCheckoutPrice;
extern leTableString string_strg;
extern leTableString string_strLateCheckoutSmall;
extern leTableString string_strY;
extern leTableString string_strZ;
extern leTableString string_stru;
extern leTableString string_strSorry;
extern leTableString string_str5;
extern leTableString string_strq;
extern leTableString string_str8;
extern leTableString string_strh;
extern leTableString string_strmor;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
