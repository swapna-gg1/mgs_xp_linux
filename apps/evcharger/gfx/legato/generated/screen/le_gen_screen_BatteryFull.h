#ifndef LE_GEN_SCREEN_BATTERYFULL_H
#define LE_GEN_SCREEN_BATTERYFULL_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* BatteryFull_Panel_0;
extern leLabelWidget* BatteryFull_LabelWidget_0;
extern leLabelWidget* BatteryFull_LabelWidget_1;
extern leImageWidget* BatteryFull_imageMGS;
extern leWidget* BatteryFull_BackgroundPanel_0;
extern leButtonWidget* BatteryFull_buttonHome;
extern leButtonWidget* BatteryFull_ExitButton;
extern leImageWidget* BatteryFull_imgBattFull;
extern leLabelWidget* BatteryFull_labelBatPct;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_BatteryFull_buttonHome_OnReleased(leButtonWidget* btn);
void event_BatteryFull_ExitButton_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_BatteryFull(void); // called when Legato is initialized
leResult screenShow_BatteryFull(void); // called when screen is shown
void screenHide_BatteryFull(void); // called when screen is hidden
void screenDestroy_BatteryFull(void); // called when Legato is destroyed
void screenUpdate_BatteryFull(void); // called when Legato is updating

leWidget* screenGetRoot_BatteryFull(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_BATTERYFULL_H
