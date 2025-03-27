/*******************************************************************************
* Copyright (C) 2024 Microchip Technology Inc. and its subsidiaries.
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

/*******************************************************************************
  GFX GLCD Driver Interface Declarations for Static Single Instance Driver

  Company:
    Microchip Technology Inc.

  File Name:
    gfx_canvas_config.h

  Summary:
    GFX Canvas Virtual Display Component config header file

  Description:
    The GFX Canvas provides a virtual display driver interface. 

  Remarks:
    None
*******************************************************************************/

/** \file gfx_canvas_config.h
 * @brief  GFX Canvas Virtual Display config definitions.
 *
 * @details The GFX Canvas provides a virtual display driver interface.
 */

#ifndef _GFX_CANVAS_CONFIG_H    /* Guard against multiple inclusion */
#define _GFX_CANVAS_CONFIG_H

#include "gfx/driver/gfx_driver.h"

#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
    
#define CONFIG_BUFFER_PER_LAYER 1
#define CONFIG_NUM_LAYERS 3
#define CANVAS_DEFAULT_FORMAT GFX_COLOR_MODE_RGBA_8888
    
#define CONFIG_NUM_CANVAS_OBJ 3
/**
 * @brief This struct represents a gfx canvas objects.
 * @details .
 */
typedef struct 
{
	int width;
	int height;
	gfxColorMode mode;
} GFXC_CANVAS_OBJ_PARAMS;

GFXC_CANVAS_OBJ_PARAMS CanvasObjParms[CONFIG_NUM_CANVAS_OBJ] = {
	{800, 480, GFX_COLOR_MODE_RGBA_8888},
	{800, 320, GFX_COLOR_MODE_RGBA_8888},
	{430, 180, GFX_COLOR_MODE_RGBA_8888}
};

#define CONFIG_FX_INTERVAL_MS 40

#ifdef __cplusplus	// Provide C++ Compatibility
}
#endif

#endif /* _GFX_CANVAS_CONFIG_H */

/* *****************************************************************************
 End of File
 */
