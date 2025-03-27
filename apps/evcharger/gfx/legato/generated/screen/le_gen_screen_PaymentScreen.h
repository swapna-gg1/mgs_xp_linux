#ifndef LE_GEN_SCREEN_PAYMENTSCREEN_H
#define LE_GEN_SCREEN_PAYMENTSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* PaymentScreen_BackgroundPanel;
extern leImageWidget* PaymentScreen_ImageWidget_0;
extern leImageWidget* PaymentScreen_ImageWidget_0_0;
extern leLabelWidget* PaymentScreen_LabelWidget_0;
extern leWidget* PaymentScreen_BackgroundPanel_0;
extern leButtonWidget* PaymentScreen_buttonPayRFID;
extern leButtonWidget* PaymentScreen_buttonPayCredit;
extern leButtonWidget* PaymentScreen_buttonPayBrowser;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_PaymentScreen_buttonPayRFID_OnReleased(leButtonWidget* btn);
void event_PaymentScreen_buttonPayCredit_OnReleased(leButtonWidget* btn);
void event_PaymentScreen_buttonPayBrowser_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_PaymentScreen(void); // called when Legato is initialized
leResult screenShow_PaymentScreen(void); // called when screen is shown
void screenHide_PaymentScreen(void); // called when screen is hidden
void screenDestroy_PaymentScreen(void); // called when Legato is destroyed
void screenUpdate_PaymentScreen(void); // called when Legato is updating

leWidget* screenGetRoot_PaymentScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void PaymentScreen_OnShow(void); // called when this screen is shown
void PaymentScreen_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_PAYMENTSCREEN_H
