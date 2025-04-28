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
 * Name:   MicrochipLogo
 * Size:   229x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage MicrochipLogo;

/*********************************
 * Legato Image Asset
 * Name:   progressBarBase
 * Size:   408x8 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage progressBarBase;

/*********************************
 * Legato Image Asset
 * Name:   blindsBttnOff
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage blindsBttnOff;

/*********************************
 * Legato Image Asset
 * Name:   blindsBttnOn
 * Size:   137x136 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage blindsBttnOn;

/*********************************
 * Legato Image Asset
 * Name:   fanBttnOff
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage fanBttnOff;

/*********************************
 * Legato Image Asset
 * Name:   fanBttnOn
 * Size:   136x136 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage fanBttnOn;

/*********************************
 * Legato Image Asset
 * Name:   lampBttnOff
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage lampBttnOff;

/*********************************
 * Legato Image Asset
 * Name:   lampBttnOn
 * Size:   136x136 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage lampBttnOn;

/*********************************
 * Legato Image Asset
 * Name:   navBar
 * Size:   22x800 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage navBar;

/*********************************
 * Legato Image Asset
 * Name:   StatusBar
 * Size:   1138x88 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage StatusBar;

/*********************************
 * Legato Image Asset
 * Name:   StatusBarActive
 * Size:   1138x88 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage StatusBarActive;

/*********************************
 * Legato Image Asset
 * Name:   tvBttnOff
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage tvBttnOff;

/*********************************
 * Legato Image Asset
 * Name:   tvBttnOn
 * Size:   137x136 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage tvBttnOn;

/*********************************
 * Legato Image Asset
 * Name:   Sunny
 * Size:   28x28 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Sunny;

/*********************************
 * Legato Image Asset
 * Name:   ChevronDown
 * Size:   32x32 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ChevronDown;

/*********************************
 * Legato Image Asset
 * Name:   ThermostatCard
 * Size:   542x280 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ThermostatCard;

/*********************************
 * Legato Image Asset
 * Name:   hotThermostat
 * Size:   98x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage hotThermostat;

/*********************************
 * Legato Image Asset
 * Name:   ModeDropdown
 * Size:   165x56 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ModeDropdown;

/*********************************
 * Legato Image Asset
 * Name:   figmaImg_Mode_Fan
 * Size:   24x24 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage figmaImg_Mode_Fan;

/*********************************
 * Legato Image Asset
 * Name:   figmaImg_Chevron_Down
 * Size:   88x88 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage figmaImg_Chevron_Down;

/*********************************
 * Legato Image Asset
 * Name:   figmaImg_Chevron_Up
 * Size:   88x88 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage figmaImg_Chevron_Up;

/*********************************
 * Legato Image Asset
 * Name:   coolThermostat
 * Size:   98x40 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage coolThermostat;

/*********************************
 * Legato Image Asset
 * Name:   robVacuumOff
 * Size:   121x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage robVacuumOff;

/*********************************
 * Legato Image Asset
 * Name:   navBubble
 * Size:   22x57 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage navBubble;

/*********************************
 * Legato Image Asset
 * Name:   ButtonAddDevice
 * Size:   121x36 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage ButtonAddDevice;

/*********************************
 * Legato Image Asset
 * Name:   doorBttnClosed
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage doorBttnClosed;

/*********************************
 * Legato Image Asset
 * Name:   windowBttonClosed
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage windowBttonClosed;

/*********************************
 * Legato Image Asset
 * Name:   windowBttonOpen
 * Size:   136x136 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage windowBttonOpen;

/*********************************
 * Legato Image Asset
 * Name:   garageBttnClosed
 * Size:   120x120 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage garageBttnClosed;

/*********************************
 * Legato Image Asset
 * Name:   DevicesSensors_Card
 * Size:   588x687 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage DevicesSensors_Card;

/*********************************
 * Legato Image Asset
 * Name:   Devices_Card
 * Size:   588x400 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage Devices_Card;

/*********************************
 * Legato Image Asset
 * Name:   sensorsCard
 * Size:   588x280 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage sensorsCard;

/*********************************
 * Legato Image Asset
 * Name:   SecurityCard
 * Size:   542x400 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage SecurityCard;

/*********************************
 * Legato Image Asset
 * Name:   robVacuumOn
 * Size:   137x136 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage robVacuumOn;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         Figtree_40
 * Height:       21
 * Baseline:     31
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Figtree_40;

/*********************************
 * Legato Font Asset
 * Name:         Figtree_18
 * Height:       21
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  10
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Figtree_18;

/*********************************
 * Legato Font Asset
 * Name:         Figtree_12
 * Height:       21
 * Baseline:     10
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  18
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Figtree_12;

/*********************************
 * Legato Font Asset
 * Name:         Figtree_14
 * Height:       21
 * Baseline:     12
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  15
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont Figtree_14;

/*********************************
 * Legato Font Asset
 * Name:         Figtree_32
 * Height:       21
 * Baseline:     26
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  3
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Figtree_32;

/*********************************
 * Legato Font Asset
 * Name:         notoSansBold_120
 * Height:       21
 * Baseline:     92
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  3
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont notoSansBold_120;

/*********************************
 * Legato Font Asset
 * Name:         notoSansBold_14
 * Height:       21
 * Baseline:     11
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  14
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont notoSansBold_14;

/*********************************
 * Legato Font Asset
 * Name:         notoSansBold_25
 * Height:       21
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  12
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont notoSansBold_25;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   55
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_date_example    0
#define stringID_figmaStr_DevicesActive    1
#define stringID_Bedroom    2
#define stringID_figmaStr_Living_Room_Camera    3
#define stringID_devices    4
#define stringID_three    5
#define stringID_warning    6
#define stringID_WindowB    7
#define stringID_TemperatureExample    8
#define stringID_roboVaccumB    9
#define stringID_home    10
#define stringID_kichen    11
#define stringID_SleepMode    12
#define stringID_CLOSED    13
#define stringID_TVB    14
#define stringID_VacationMode    15
#define stringID_OFF    16
#define stringID_figmaStr_Lights_On    17
#define stringID_livRoomB    18
#define stringID_figmaStr_WindowsOpen    19
#define stringID_figmaStr_Doorbell_Camera    20
#define stringID_one    21
#define stringID_figmaStr_BlindsOpen    22
#define stringID_ON    23
#define stringID_zero    24
#define stringID_TV    25
#define stringID_DoorB    26
#define stringID_lamp1b    27
#define stringID_Door    28
#define stringID_Garage    29
#define stringID_BedroomB    30
#define stringID_Fan    31
#define stringID_livRoom    32
#define stringID_roboVaccum    33
#define stringID_time_example    34
#define stringID_Window    35
#define stringID_kichenB    36
#define stringID_DaytimeMode    37
#define stringID_restroomB    38
#define stringID_figmaStr_CamerEvents    39
#define stringID_FanB    40
#define stringID_Blinds    41
#define stringID_LightsB    42
#define stringID_Front    43
#define stringID_lamp2    44
#define stringID_figmaStr_DoorsOpen    45
#define stringID_restroom    46
#define stringID_OPEN    47
#define stringID_figmaStr_Backyard_Camera    48
#define stringID_settings    49
#define stringID_Lights    50
#define stringID_FrontB    51
#define stringID_BlindsB    52
#define stringID_AwayMode    53
#define stringID_security    54

extern const leStringTable stringTable;


// string list
extern leTableString string_date_example;
extern leTableString string_figmaStr_DevicesActive;
extern leTableString string_Bedroom;
extern leTableString string_figmaStr_Living_Room_Camera;
extern leTableString string_devices;
extern leTableString string_three;
extern leTableString string_warning;
extern leTableString string_WindowB;
extern leTableString string_TemperatureExample;
extern leTableString string_roboVaccumB;
extern leTableString string_home;
extern leTableString string_kichen;
extern leTableString string_SleepMode;
extern leTableString string_CLOSED;
extern leTableString string_TVB;
extern leTableString string_VacationMode;
extern leTableString string_OFF;
extern leTableString string_figmaStr_Lights_On;
extern leTableString string_livRoomB;
extern leTableString string_figmaStr_WindowsOpen;
extern leTableString string_figmaStr_Doorbell_Camera;
extern leTableString string_one;
extern leTableString string_figmaStr_BlindsOpen;
extern leTableString string_ON;
extern leTableString string_zero;
extern leTableString string_TV;
extern leTableString string_DoorB;
extern leTableString string_lamp1b;
extern leTableString string_Door;
extern leTableString string_Garage;
extern leTableString string_BedroomB;
extern leTableString string_Fan;
extern leTableString string_livRoom;
extern leTableString string_roboVaccum;
extern leTableString string_time_example;
extern leTableString string_Window;
extern leTableString string_kichenB;
extern leTableString string_DaytimeMode;
extern leTableString string_restroomB;
extern leTableString string_figmaStr_CamerEvents;
extern leTableString string_FanB;
extern leTableString string_Blinds;
extern leTableString string_LightsB;
extern leTableString string_Front;
extern leTableString string_lamp2;
extern leTableString string_figmaStr_DoorsOpen;
extern leTableString string_restroom;
extern leTableString string_OPEN;
extern leTableString string_figmaStr_Backyard_Camera;
extern leTableString string_settings;
extern leTableString string_Lights;
extern leTableString string_FrontB;
extern leTableString string_BlindsB;
extern leTableString string_AwayMode;
extern leTableString string_security;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
