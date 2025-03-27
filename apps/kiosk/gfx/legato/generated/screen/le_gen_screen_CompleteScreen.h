#ifndef LE_GEN_SCREEN_COMPLETESCREEN_H
#define LE_GEN_SCREEN_COMPLETESCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* CompleteScreen_BackgroundPanel;
extern leImageWidget* CompleteScreen_imgMGS;
extern leLabelWidget* CompleteScreen_lblStay;
extern leLabelWidget* CompleteScreen_lblRoomNumber;
extern leLabelWidget* CompleteScreen_lblScan;
extern leLabelWidget* CompleteScreen_lblHope;
extern leImageWidget* CompleteScreen_imgQRCode;
extern leLabelWidget* CompleteScreen_LabelWidget_1;
extern leButtonWidget* CompleteScreen_btnExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_CompleteScreen_btnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_CompleteScreen(void); // called when Legato is initialized
leResult screenShow_CompleteScreen(void); // called when screen is shown
void screenHide_CompleteScreen(void); // called when screen is hidden
void screenDestroy_CompleteScreen(void); // called when Legato is destroyed
void screenUpdate_CompleteScreen(void); // called when Legato is updating

leWidget* screenGetRoot_CompleteScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void CompleteScreen_OnShow(void); // called when this screen is shown
void CompleteScreen_OnHide(void); // called when this screen is hidden
void CompleteScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_COMPLETESCREEN_H
