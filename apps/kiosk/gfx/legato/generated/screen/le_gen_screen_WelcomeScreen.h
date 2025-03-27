#ifndef LE_GEN_SCREEN_WELCOMESCREEN_H
#define LE_GEN_SCREEN_WELCOMESCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* WelcomeScreen_BackgroundPanel;
extern leButtonWidget* WelcomeScreen_btnChkOut;
extern leLabelWidget* WelcomeScreen_LabelWidget_0;
extern leLabelWidget* WelcomeScreen_LabelWidget_0_0;
extern leLabelWidget* WelcomeScreen_LabelWidget_0_1;
extern leImageWidget* WelcomeScreen_imgMGS;
extern leButtonWidget* WelcomeScreen_btnChkIn;
extern leImageWidget* WelcomeScreen_ImageWidget_1;
extern leLabelWidget* WelcomeScreen_LabelWidget_1;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_WelcomeScreen_btnChkOut_OnReleased(leButtonWidget* btn);
void event_WelcomeScreen_btnChkIn_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_WelcomeScreen(void); // called when Legato is initialized
leResult screenShow_WelcomeScreen(void); // called when screen is shown
void screenHide_WelcomeScreen(void); // called when screen is hidden
void screenDestroy_WelcomeScreen(void); // called when Legato is destroyed
void screenUpdate_WelcomeScreen(void); // called when Legato is updating

leWidget* screenGetRoot_WelcomeScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void WelcomeScreen_OnShow(void); // called when this screen is shown
void WelcomeScreen_OnHide(void); // called when this screen is hidden
void WelcomeScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_WELCOMESCREEN_H
