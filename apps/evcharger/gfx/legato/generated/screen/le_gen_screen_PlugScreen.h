#ifndef LE_GEN_SCREEN_PLUGSCREEN_H
#define LE_GEN_SCREEN_PLUGSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* PlugScreen_Panel_0;
extern leWidget* PlugScreen_Panel_0_0;
extern leImageWidget* PlugScreen_ImageWidget_0_0;
extern leLabelWidget* PlugScreen_LabelWidget_0;
extern leLabelWidget* PlugScreen_labelDate;
extern leLabelWidget* PlugScreen_labelTime;
extern leImageWidget* PlugScreen_imageMGS;
extern leWidget* PlugScreen_BackgroundPanel_0;
extern leButtonWidget* PlugScreen_ExitButton;
extern leButtonWidget* PlugScreen_buttonConnect;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_PlugScreen_ExitButton_OnReleased(leButtonWidget* btn);
void event_PlugScreen_buttonConnect_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_PlugScreen(void); // called when Legato is initialized
leResult screenShow_PlugScreen(void); // called when screen is shown
void screenHide_PlugScreen(void); // called when screen is hidden
void screenDestroy_PlugScreen(void); // called when Legato is destroyed
void screenUpdate_PlugScreen(void); // called when Legato is updating

leWidget* screenGetRoot_PlugScreen(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_PLUGSCREEN_H
