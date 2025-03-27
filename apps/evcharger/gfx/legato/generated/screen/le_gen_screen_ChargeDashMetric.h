#ifndef LE_GEN_SCREEN_CHARGEDASHMETRIC_H
#define LE_GEN_SCREEN_CHARGEDASHMETRIC_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ChargeDashMetric_Panel_0;
extern leWidget* ChargeDashMetric_BackColorPanel;
extern leImageWidget* ChargeDashMetric_imageMGS;
extern leImageWidget* ChargeDashMetric_imageCar;
extern leImageWidget* ChargeDashMetric_imgBattEmpty;
extern leLabelWidget* ChargeDashMetric_labelDate;
extern leLabelWidget* ChargeDashMetric_labelTime;
extern leLabelWidget* ChargeDashMetric_labelDate;
extern leLabelWidget* ChargeDashMetric_labelTime;
extern leWidget* ChargeDashMetric_GraphPanelStatic;
extern leWidget* ChargeDashMetric_GraphGridPanel;
extern leLabelWidget* ChargeDashMetric_labelRemTime1_0;
extern leLabelWidget* ChargeDashMetric_labelAve1_0;
extern leLabelWidget* ChargeDashMetric_labelElapsed1_0;
extern leLabelWidget* ChargeDashMetric_labelDate_0;
extern leRectangleWidget* ChargeDashMetric_RectBorder;
extern leRectangleWidget* ChargeDashMetric_RectY0;
extern leRectangleWidget* ChargeDashMetric_RectY1;
extern leRectangleWidget* ChargeDashMetric_RectY2;
extern leRectangleWidget* ChargeDashMetric_RectY3;
extern leRectangleWidget* ChargeDashMetric_RectY4;
extern leRectangleWidget* ChargeDashMetric_RectY5;
extern leRectangleWidget* ChargeDashMetric_RectY6;
extern leRectangleWidget* ChargeDashMetric_RectX0;
extern leRectangleWidget* ChargeDashMetric_RectX1;
extern leRectangleWidget* ChargeDashMetric_RectX2;
extern leRectangleWidget* ChargeDashMetric_RectX3;
extern leRectangleWidget* ChargeDashMetric_RectX4;
extern leRectangleWidget* ChargeDashMetric_RectX5;
extern leWidget* ChargeDashMetric_BackgroundPanel_0;
extern leWidget* ChargeDashMetric_GraphPanel;
extern leWidget* ChargeDashMetric_MetricPanel;
extern leButtonWidget* ChargeDashMetric_ExitButton;
extern leLabelWidget* ChargeDashMetric_labelCharging;
extern leImageWidget* ChargeDashMetric_imgChargingIcon;
extern leImageWidget* ChargeDashMetric_imgBattFull;
extern leLabelWidget* ChargeDashMetric_labelBatPct;
extern leButtonWidget* ChargeDashMetric_buttonMetricView;
extern leLineGraphWidget* ChargeDashMetric_LineGraphWidget_0;
extern leLabelWidget* ChargeDashMetric_labelDelEnergyValue1;
extern leLabelWidget* ChargeDashMetric_labelOutputPowValue1;
extern leLabelWidget* ChargeDashMetric_labelRemTimeValue1;
extern leLabelWidget* ChargeDashMetric_labelElapsedTime1;
extern leLabelWidget* ChargeDashMetric_LabelWidget_0;
extern leLabelWidget* ChargeDashMetric_LabelWidget_0_0;
extern leLabelWidget* ChargeDashMetric_LabelWidget_0_1;
extern leLabelWidget* ChargeDashMetric_LabelWidget_0_2;
extern leLabelWidget* ChargeDashMetric_labelElapsedTime;
extern leLabelWidget* ChargeDashMetric_labelRemTimeValue;
extern leLabelWidget* ChargeDashMetric_labelOutputPowValue;
extern leLabelWidget* ChargeDashMetric_labelDelEnergyValue;
extern leButtonWidget* ChargeDashMetric_buttonGraphView;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ChargeDashMetric_ExitButton_OnReleased(leButtonWidget* btn);
void event_ChargeDashMetric_buttonMetricView_OnReleased(leButtonWidget* btn);
void event_ChargeDashMetric_buttonGraphView_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ChargeDashMetric(void); // called when Legato is initialized
leResult screenShow_ChargeDashMetric(void); // called when screen is shown
void screenHide_ChargeDashMetric(void); // called when screen is hidden
void screenDestroy_ChargeDashMetric(void); // called when Legato is destroyed
void screenUpdate_ChargeDashMetric(void); // called when Legato is updating

leWidget* screenGetRoot_ChargeDashMetric(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void ChargeDashMetric_OnShow(void); // called when this screen is shown
void ChargeDashMetric_OnHide(void); // called when this screen is hidden
void ChargeDashMetric_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_CHARGEDASHMETRIC_H
