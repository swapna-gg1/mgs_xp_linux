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
extern leWidget* SplashScreen_Panel_0;
extern leWidget* SplashScreen_MchpLogoPanel;
extern leWidget* SplashScreen_MGSLogoPanel;
extern leImageWidget* SplashScreen_MicrochipLogo;
extern leImageWidget* SplashScreen_MGSLogo;

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
void SplashScreen_OnHide(void); // called when this screen is hidden
void SplashScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SPLASHSCREEN_H
