#ifndef LE_GEN_SCREEN_DETAILSSCREEN_H
#define LE_GEN_SCREEN_DETAILSSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* DetailsScreen_BackgroundPanel;
extern leButtonWidget* DetailsScreen_btnBack;
extern leImageWidget* DetailsScreen_imgMGS;
extern leLabelWidget* DetailsScreen_LabelWidget_2;
extern leLabelWidget* DetailsScreen_LabelWidget_1;
extern leLabelWidget* DetailsScreen_LabelWidget_0;
extern leImageWidget* DetailsScreen_ImageWidget_1_0;
extern leWidget* DetailsScreen_pnlRoomInfo;
extern leWidget* DetailsScreen_pnlChargesInfo;
extern leWidget* DetailsScreen_pnlUpgrades;
extern leImageWidget* DetailsScreen_ImageWidget_2;
extern leButtonWidget* DetailsScreen_btnContinue;
extern leWidget* DetailsScreen_pnlError;
extern leLabelWidget* DetailsScreen_lblBedDetails;
extern leLabelWidget* DetailsScreen_lblStayDates;
extern leLabelWidget* DetailsScreen_lblRoomInfo;
extern leLabelWidget* DetailsScreen_lblSummaryOfCharges;
extern leLabelWidget* DetailsScreen_lblTotal;
extern leLabelWidget* DetailsScreen_lblAmount;
extern leLabelWidget* DetailsScreen_lblBookingPaid;
extern leImageWidget* DetailsScreen_imgBalconyView;
extern leImageWidget* DetailsScreen_imgBreakfast;
extern leImageWidget* DetailsScreen_imgLateCheckout;
extern leLabelWidget* DetailsScreen_lblUpgrades;
extern leButtonWidget* DetailsScreen_btnBalconyView;
extern leLabelWidget* DetailsScreen_LabelWidget_3;
extern leLabelWidget* DetailsScreen_LabelWidget_3_0;
extern leButtonWidget* DetailsScreen_btnBreakfast;
extern leLabelWidget* DetailsScreen_LabelWidget_3_1;
extern leLabelWidget* DetailsScreen_LabelWidget_3_0_0;
extern leButtonWidget* DetailsScreen_btnLateCheckout;
extern leLabelWidget* DetailsScreen_LabelWidget_3_1_0;
extern leLabelWidget* DetailsScreen_LabelWidget_3_0_0_0;
extern leLabelWidget* DetailsScreen_LabelWidget_2_0;
extern leLabelWidget* DetailsScreen_LabelWidget_4_0;
extern leButtonWidget* DetailsScreen_btnErrorBack_0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_DetailsScreen_btnBack_OnReleased(leButtonWidget* btn);
void event_DetailsScreen_btnContinue_OnReleased(leButtonWidget* btn);
void event_DetailsScreen_btnBalconyView_OnPressed(leButtonWidget* btn);
void event_DetailsScreen_btnBalconyView_OnReleased(leButtonWidget* btn);
void event_DetailsScreen_btnBreakfast_OnPressed(leButtonWidget* btn);
void event_DetailsScreen_btnBreakfast_OnReleased(leButtonWidget* btn);
void event_DetailsScreen_btnLateCheckout_OnPressed(leButtonWidget* btn);
void event_DetailsScreen_btnLateCheckout_OnReleased(leButtonWidget* btn);
void event_DetailsScreen_btnErrorBack_0_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_DetailsScreen(void); // called when Legato is initialized
leResult screenShow_DetailsScreen(void); // called when screen is shown
void screenHide_DetailsScreen(void); // called when screen is hidden
void screenDestroy_DetailsScreen(void); // called when Legato is destroyed
void screenUpdate_DetailsScreen(void); // called when Legato is updating

leWidget* screenGetRoot_DetailsScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void DetailsScreen_OnShow(void); // called when this screen is shown
void DetailsScreen_OnHide(void); // called when this screen is hidden
void DetailsScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_DETAILSSCREEN_H
