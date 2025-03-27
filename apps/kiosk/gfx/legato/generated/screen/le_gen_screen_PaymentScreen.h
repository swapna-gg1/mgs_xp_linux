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
extern leButtonWidget* PaymentScreen_btnBack;
extern leImageWidget* PaymentScreen_imgMGS;
extern leLabelWidget* PaymentScreen_lblCheckInOut;
extern leLabelWidget* PaymentScreen_LabelWidget_1;
extern leImageWidget* PaymentScreen_ImageWidget_1_0;
extern leWidget* PaymentScreen_pnlRoomInfo;
extern leWidget* PaymentScreen_pnlChargesInfo;
extern leImageWidget* PaymentScreen_ImageWidget_2;
extern leButtonWidget* PaymentScreen_btnPayCard;
extern leButtonWidget* PaymentScreen_btnPayTap;
extern leWidget* PaymentScreen_pnlError;
extern leLabelWidget* PaymentScreen_lblBedDetails;
extern leLabelWidget* PaymentScreen_lblStayDates;
extern leLabelWidget* PaymentScreen_lblRoomInfo;
extern leLabelWidget* PaymentScreen_lblNeededToday;
extern leLabelWidget* PaymentScreen_lblTotal;
extern leLabelWidget* PaymentScreen_lblAmount;
extern leLabelWidget* PaymentScreen_lblBookingPaid;
extern leWidget* PaymentScreen_pnlDeposit;
extern leWidget* PaymentScreen_pnlLateCheckoutCost;
extern leWidget* PaymentScreen_pnlBalcony;
extern leWidget* PaymentScreen_pnlBreakfast;
extern leLabelWidget* PaymentScreen_lblDeposit;
extern leLabelWidget* PaymentScreen_lblDepositAmt;
extern leLabelWidget* PaymentScreen_lblLateCheckout;
extern leLabelWidget* PaymentScreen_lblLateCheckoutAmt;
extern leLabelWidget* PaymentScreen_lblBalcony;
extern leLabelWidget* PaymentScreen_lblBalconyAmt;
extern leLabelWidget* PaymentScreen_lblBalcony;
extern leLabelWidget* PaymentScreen_lblBalconyAmt;
extern leLabelWidget* PaymentScreen_LabelWidget_2_0_0;
extern leLabelWidget* PaymentScreen_LabelWidget_4_0_0;
extern leButtonWidget* PaymentScreen_btnErrorBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_PaymentScreen_btnBack_OnReleased(leButtonWidget* btn);
void event_PaymentScreen_btnPayCard_OnReleased(leButtonWidget* btn);
void event_PaymentScreen_btnPayTap_OnReleased(leButtonWidget* btn);
void event_PaymentScreen_btnErrorBack_OnReleased(leButtonWidget* btn);

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
void PaymentScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_PAYMENTSCREEN_H
