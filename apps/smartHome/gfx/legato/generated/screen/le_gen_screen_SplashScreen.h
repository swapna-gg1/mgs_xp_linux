#ifndef LE_GEN_SCREEN_SPLASHSCREEN_H
#define LE_GEN_SCREEN_SPLASHSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* SplashScreen_panel_Background;
extern leImageWidget* SplashScreen_image_MchpLogo;
extern leImageWidget* SplashScreen_image_progressbarBase;
extern leCircleWidget* SplashScreen_circle_progressbarStart;
extern leRectangleWidget* SplashScreen_rect_progressbarSlide;
extern leCircleWidget* SplashScreen_circle_progressbarEnd;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_SplashScreen(void); // called when Legato is initialized
leResult screenShow_SplashScreen(void); // called when screen is shown
void screenHide_SplashScreen(void); // called when screen is hidden
void screenDestroy_SplashScreen(void); // called when Legato is destroyed
void screenUpdate_SplashScreen(void); // called when Legato is updating

leWidget* screenGetRoot_SplashScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void SplashScreen_OnShow(void); // called when this screen is shown
void SplashScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SPLASHSCREEN_H
