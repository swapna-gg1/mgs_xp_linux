#ifndef LE_GEN_SCREEN_LANDINGPAGE_H
#define LE_GEN_SCREEN_LANDINGPAGE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* LandingPage_Landing_Screen;
extern leButtonWidget* LandingPage_btnPower;
extern leButtonWidget* LandingPage_btnAdmin;
extern leButtonWidget* LandingPage_btnOperator;
extern leImageWidget* LandingPage_imgMchpLogo;
extern leImageWidget* LandingPage_imgPM5Logo;
extern leImageWidget* LandingPage_ImageWidget_0;
extern leLabelWidget* LandingPage_LabelWidget_0;
extern leImageWidget* LandingPage_ImageWidget_0_0;
extern leLabelWidget* LandingPage_LabelWidget_0_0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_LandingPage_btnAdmin_OnReleased(leButtonWidget* btn);
void event_LandingPage_btnOperator_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_LandingPage(void); // called when Legato is initialized
leResult screenShow_LandingPage(void); // called when screen is shown
void screenHide_LandingPage(void); // called when screen is hidden
void screenDestroy_LandingPage(void); // called when Legato is destroyed
void screenUpdate_LandingPage(void); // called when Legato is updating

leWidget* screenGetRoot_LandingPage(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void LandingPage_OnShow(void); // called when this screen is shown
void LandingPage_OnHide(void); // called when this screen is hidden
void LandingPage_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_LANDINGPAGE_H
