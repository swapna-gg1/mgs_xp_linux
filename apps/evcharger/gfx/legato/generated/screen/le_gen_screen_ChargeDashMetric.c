#include "gfx/legato/generated/screen/le_gen_screen_ChargeDashMetric.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leWidget* ChargeDashMetric_Panel_0;
leWidget* ChargeDashMetric_BackColorPanel;
leImageWidget* ChargeDashMetric_imageMGS;
leImageWidget* ChargeDashMetric_imageCar;
leImageWidget* ChargeDashMetric_imgBattEmpty;
leLabelWidget* ChargeDashMetric_labelDate;
leLabelWidget* ChargeDashMetric_labelTime;
leLabelWidget* ChargeDashMetric_labelDate;
leLabelWidget* ChargeDashMetric_labelTime;
leWidget* ChargeDashMetric_GraphPanelStatic;
leWidget* ChargeDashMetric_GraphGridPanel;
leLabelWidget* ChargeDashMetric_labelRemTime1_0;
leLabelWidget* ChargeDashMetric_labelAve1_0;
leLabelWidget* ChargeDashMetric_labelElapsed1_0;
leLabelWidget* ChargeDashMetric_labelDate_0;
leRectangleWidget* ChargeDashMetric_RectBorder;
leRectangleWidget* ChargeDashMetric_RectY0;
leRectangleWidget* ChargeDashMetric_RectY1;
leRectangleWidget* ChargeDashMetric_RectY2;
leRectangleWidget* ChargeDashMetric_RectY3;
leRectangleWidget* ChargeDashMetric_RectY4;
leRectangleWidget* ChargeDashMetric_RectY5;
leRectangleWidget* ChargeDashMetric_RectY6;
leRectangleWidget* ChargeDashMetric_RectX0;
leRectangleWidget* ChargeDashMetric_RectX1;
leRectangleWidget* ChargeDashMetric_RectX2;
leRectangleWidget* ChargeDashMetric_RectX3;
leRectangleWidget* ChargeDashMetric_RectX4;
leRectangleWidget* ChargeDashMetric_RectX5;
leWidget* ChargeDashMetric_BackgroundPanel_0;
leWidget* ChargeDashMetric_GraphPanel;
leWidget* ChargeDashMetric_MetricPanel;
leButtonWidget* ChargeDashMetric_ExitButton;
leLabelWidget* ChargeDashMetric_labelCharging;
leImageWidget* ChargeDashMetric_imgChargingIcon;
leImageWidget* ChargeDashMetric_imgBattFull;
leLabelWidget* ChargeDashMetric_labelBatPct;
leButtonWidget* ChargeDashMetric_buttonMetricView;
leLineGraphWidget* ChargeDashMetric_LineGraphWidget_0;
leLabelWidget* ChargeDashMetric_labelDelEnergyValue1;
leLabelWidget* ChargeDashMetric_labelOutputPowValue1;
leLabelWidget* ChargeDashMetric_labelRemTimeValue1;
leLabelWidget* ChargeDashMetric_labelElapsedTime1;
leLabelWidget* ChargeDashMetric_LabelWidget_0;
leLabelWidget* ChargeDashMetric_LabelWidget_0_0;
leLabelWidget* ChargeDashMetric_LabelWidget_0_1;
leLabelWidget* ChargeDashMetric_LabelWidget_0_2;
leLabelWidget* ChargeDashMetric_labelElapsedTime;
leLabelWidget* ChargeDashMetric_labelRemTimeValue;
leLabelWidget* ChargeDashMetric_labelOutputPowValue;
leLabelWidget* ChargeDashMetric_labelDelEnergyValue;
leButtonWidget* ChargeDashMetric_buttonGraphView;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ChargeDashMetric(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ChargeDashMetric(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 800, 480);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    ChargeDashMetric_Panel_0 = leWidget_New();
    ChargeDashMetric_Panel_0->fn->setPosition(ChargeDashMetric_Panel_0, 0, 0);
    ChargeDashMetric_Panel_0->fn->setSize(ChargeDashMetric_Panel_0, 420, 480);
    ChargeDashMetric_Panel_0->fn->setScheme(ChargeDashMetric_Panel_0, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)ChargeDashMetric_Panel_0);

    ChargeDashMetric_imageMGS = leImageWidget_New();
    ChargeDashMetric_imageMGS->fn->setPosition(ChargeDashMetric_imageMGS, 5, 5);
    ChargeDashMetric_imageMGS->fn->setSize(ChargeDashMetric_imageMGS, 124, 41);
    ChargeDashMetric_imageMGS->fn->setBackgroundType(ChargeDashMetric_imageMGS, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_imageMGS->fn->setBorderType(ChargeDashMetric_imageMGS, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_imageMGS->fn->setImage(ChargeDashMetric_imageMGS, (leImage*)&MGS_Logo);
    ChargeDashMetric_Panel_0->fn->addChild(ChargeDashMetric_Panel_0, (leWidget*)ChargeDashMetric_imageMGS);

    ChargeDashMetric_imageCar = leImageWidget_New();
    ChargeDashMetric_imageCar->fn->setPosition(ChargeDashMetric_imageCar, 138, 218);
    ChargeDashMetric_imageCar->fn->setSize(ChargeDashMetric_imageCar, 283, 262);
    ChargeDashMetric_imageCar->fn->setBackgroundType(ChargeDashMetric_imageCar, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_imageCar->fn->setBorderType(ChargeDashMetric_imageCar, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_imageCar->fn->setVAlignment(ChargeDashMetric_imageCar, LE_VALIGN_TOP);
    ChargeDashMetric_imageCar->fn->setImage(ChargeDashMetric_imageCar, (leImage*)&CarImage);
    ChargeDashMetric_Panel_0->fn->addChild(ChargeDashMetric_Panel_0, (leWidget*)ChargeDashMetric_imageCar);

    ChargeDashMetric_imgBattEmpty = leImageWidget_New();
    ChargeDashMetric_imgBattEmpty->fn->setPosition(ChargeDashMetric_imgBattEmpty, 75, 126);
    ChargeDashMetric_imgBattEmpty->fn->setSize(ChargeDashMetric_imgBattEmpty, 290, 145);
    ChargeDashMetric_imgBattEmpty->fn->setBackgroundType(ChargeDashMetric_imgBattEmpty, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_imgBattEmpty->fn->setBorderType(ChargeDashMetric_imgBattEmpty, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_imgBattEmpty->fn->setImage(ChargeDashMetric_imgBattEmpty, (leImage*)&BattEmpty);
    ChargeDashMetric_Panel_0->fn->addChild(ChargeDashMetric_Panel_0, (leWidget*)ChargeDashMetric_imgBattEmpty);

    ChargeDashMetric_BackColorPanel = leWidget_New();
    ChargeDashMetric_BackColorPanel->fn->setPosition(ChargeDashMetric_BackColorPanel, 420, 0);
    ChargeDashMetric_BackColorPanel->fn->setSize(ChargeDashMetric_BackColorPanel, 380, 480);
    ChargeDashMetric_BackColorPanel->fn->setScheme(ChargeDashMetric_BackColorPanel, &PanelScheme);
    root0->fn->addChild(root0, (leWidget*)ChargeDashMetric_BackColorPanel);

    ChargeDashMetric_labelDate = leLabelWidget_New();
    ChargeDashMetric_labelDate->fn->setPosition(ChargeDashMetric_labelDate, 3, 4);
    ChargeDashMetric_labelDate->fn->setSize(ChargeDashMetric_labelDate, 86, 25);
    ChargeDashMetric_labelDate->fn->setScheme(ChargeDashMetric_labelDate, &WhiteScheme);
    ChargeDashMetric_labelDate->fn->setBackgroundType(ChargeDashMetric_labelDate, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelDate->fn->setHAlignment(ChargeDashMetric_labelDate, LE_HALIGN_CENTER);
    ChargeDashMetric_labelDate->fn->setString(ChargeDashMetric_labelDate, (leString*)&string_DateValue);
    ChargeDashMetric_BackColorPanel->fn->addChild(ChargeDashMetric_BackColorPanel, (leWidget*)ChargeDashMetric_labelDate);

    ChargeDashMetric_labelTime = leLabelWidget_New();
    ChargeDashMetric_labelTime->fn->setPosition(ChargeDashMetric_labelTime, 303, 4);
    ChargeDashMetric_labelTime->fn->setSize(ChargeDashMetric_labelTime, 69, 25);
    ChargeDashMetric_labelTime->fn->setScheme(ChargeDashMetric_labelTime, &WhiteScheme);
    ChargeDashMetric_labelTime->fn->setBackgroundType(ChargeDashMetric_labelTime, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelTime->fn->setHAlignment(ChargeDashMetric_labelTime, LE_HALIGN_CENTER);
    ChargeDashMetric_labelTime->fn->setString(ChargeDashMetric_labelTime, (leString*)&string_TimeValue);
    ChargeDashMetric_BackColorPanel->fn->addChild(ChargeDashMetric_BackColorPanel, (leWidget*)ChargeDashMetric_labelTime);

    ChargeDashMetric_labelDate = leLabelWidget_New();
    ChargeDashMetric_labelDate->fn->setPosition(ChargeDashMetric_labelDate, 3, 4);
    ChargeDashMetric_labelDate->fn->setSize(ChargeDashMetric_labelDate, 86, 25);
    ChargeDashMetric_labelDate->fn->setScheme(ChargeDashMetric_labelDate, &PanelScheme);
    ChargeDashMetric_labelDate->fn->setBackgroundType(ChargeDashMetric_labelDate, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelDate->fn->setHAlignment(ChargeDashMetric_labelDate, LE_HALIGN_CENTER);
    ChargeDashMetric_labelDate->fn->setString(ChargeDashMetric_labelDate, (leString*)&string_DateValue);
    ChargeDashMetric_BackColorPanel->fn->addChild(ChargeDashMetric_BackColorPanel, (leWidget*)ChargeDashMetric_labelDate);

    ChargeDashMetric_labelTime = leLabelWidget_New();
    ChargeDashMetric_labelTime->fn->setPosition(ChargeDashMetric_labelTime, 303, 4);
    ChargeDashMetric_labelTime->fn->setSize(ChargeDashMetric_labelTime, 69, 25);
    ChargeDashMetric_labelTime->fn->setScheme(ChargeDashMetric_labelTime, &PanelScheme);
    ChargeDashMetric_labelTime->fn->setHAlignment(ChargeDashMetric_labelTime, LE_HALIGN_CENTER);
    ChargeDashMetric_labelTime->fn->setString(ChargeDashMetric_labelTime, (leString*)&string_TimeValue);
    ChargeDashMetric_BackColorPanel->fn->addChild(ChargeDashMetric_BackColorPanel, (leWidget*)ChargeDashMetric_labelTime);

    ChargeDashMetric_GraphPanelStatic = leWidget_New();
    ChargeDashMetric_GraphPanelStatic->fn->setPosition(ChargeDashMetric_GraphPanelStatic, 2, 42);
    ChargeDashMetric_GraphPanelStatic->fn->setSize(ChargeDashMetric_GraphPanelStatic, 376, 436);
    ChargeDashMetric_GraphPanelStatic->fn->setBackgroundType(ChargeDashMetric_GraphPanelStatic, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_BackColorPanel->fn->addChild(ChargeDashMetric_BackColorPanel, (leWidget*)ChargeDashMetric_GraphPanelStatic);

    ChargeDashMetric_GraphGridPanel = leWidget_New();
    ChargeDashMetric_GraphGridPanel->fn->setPosition(ChargeDashMetric_GraphGridPanel, 3, 91);
    ChargeDashMetric_GraphGridPanel->fn->setSize(ChargeDashMetric_GraphGridPanel, 370, 330);
    ChargeDashMetric_GraphGridPanel->fn->setScheme(ChargeDashMetric_GraphGridPanel, &GraphGridScheme);
    ChargeDashMetric_GraphPanelStatic->fn->addChild(ChargeDashMetric_GraphPanelStatic, (leWidget*)ChargeDashMetric_GraphGridPanel);

    ChargeDashMetric_labelDate_0 = leLabelWidget_New();
    ChargeDashMetric_labelDate_0->fn->setPosition(ChargeDashMetric_labelDate_0, 76, 306);
    ChargeDashMetric_labelDate_0->fn->setSize(ChargeDashMetric_labelDate_0, 214, 25);
    ChargeDashMetric_labelDate_0->fn->setScheme(ChargeDashMetric_labelDate_0, &PanelScheme);
    ChargeDashMetric_labelDate_0->fn->setBackgroundType(ChargeDashMetric_labelDate_0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelDate_0->fn->setHAlignment(ChargeDashMetric_labelDate_0, LE_HALIGN_CENTER);
    ChargeDashMetric_labelDate_0->fn->setString(ChargeDashMetric_labelDate_0, (leString*)&string_GraphLabel);
    ChargeDashMetric_GraphGridPanel->fn->addChild(ChargeDashMetric_GraphGridPanel, (leWidget*)ChargeDashMetric_labelDate_0);

    ChargeDashMetric_RectBorder = leRectangleWidget_New();
    ChargeDashMetric_RectBorder->fn->setPosition(ChargeDashMetric_RectBorder, 27, 16);
    ChargeDashMetric_RectBorder->fn->setSize(ChargeDashMetric_RectBorder, 327, 292);
    ChargeDashMetric_RectBorder->fn->setScheme(ChargeDashMetric_RectBorder, &GraphGridScheme);
    ChargeDashMetric_RectBorder->fn->setBackgroundType(ChargeDashMetric_RectBorder, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectBorder->fn->setBorderType(ChargeDashMetric_RectBorder, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectBorder->fn->setThickness(ChargeDashMetric_RectBorder, 2);
    ChargeDashMetric_GraphGridPanel->fn->addChild(ChargeDashMetric_GraphGridPanel, (leWidget*)ChargeDashMetric_RectBorder);

    ChargeDashMetric_RectY0 = leRectangleWidget_New();
    ChargeDashMetric_RectY0->fn->setPosition(ChargeDashMetric_RectY0, 21, 0);
    ChargeDashMetric_RectY0->fn->setSize(ChargeDashMetric_RectY0, 24, 292);
    ChargeDashMetric_RectY0->fn->setScheme(ChargeDashMetric_RectY0, &GraphGridScheme);
    ChargeDashMetric_RectY0->fn->setBackgroundType(ChargeDashMetric_RectY0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY0->fn->setBorderType(ChargeDashMetric_RectY0, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY0->fn->setThickness(ChargeDashMetric_RectY0, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY0);

    ChargeDashMetric_RectY1 = leRectangleWidget_New();
    ChargeDashMetric_RectY1->fn->setPosition(ChargeDashMetric_RectY1, 64, 0);
    ChargeDashMetric_RectY1->fn->setSize(ChargeDashMetric_RectY1, 24, 292);
    ChargeDashMetric_RectY1->fn->setScheme(ChargeDashMetric_RectY1, &GraphGridScheme);
    ChargeDashMetric_RectY1->fn->setBackgroundType(ChargeDashMetric_RectY1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY1->fn->setBorderType(ChargeDashMetric_RectY1, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY1->fn->setThickness(ChargeDashMetric_RectY1, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY1);

    ChargeDashMetric_RectY2 = leRectangleWidget_New();
    ChargeDashMetric_RectY2->fn->setPosition(ChargeDashMetric_RectY2, 108, 0);
    ChargeDashMetric_RectY2->fn->setSize(ChargeDashMetric_RectY2, 24, 292);
    ChargeDashMetric_RectY2->fn->setScheme(ChargeDashMetric_RectY2, &GraphGridScheme);
    ChargeDashMetric_RectY2->fn->setBackgroundType(ChargeDashMetric_RectY2, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY2->fn->setBorderType(ChargeDashMetric_RectY2, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY2->fn->setThickness(ChargeDashMetric_RectY2, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY2);

    ChargeDashMetric_RectY3 = leRectangleWidget_New();
    ChargeDashMetric_RectY3->fn->setPosition(ChargeDashMetric_RectY3, 151, 0);
    ChargeDashMetric_RectY3->fn->setSize(ChargeDashMetric_RectY3, 24, 292);
    ChargeDashMetric_RectY3->fn->setScheme(ChargeDashMetric_RectY3, &GraphGridScheme);
    ChargeDashMetric_RectY3->fn->setBackgroundType(ChargeDashMetric_RectY3, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY3->fn->setBorderType(ChargeDashMetric_RectY3, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY3->fn->setThickness(ChargeDashMetric_RectY3, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY3);

    ChargeDashMetric_RectY4 = leRectangleWidget_New();
    ChargeDashMetric_RectY4->fn->setPosition(ChargeDashMetric_RectY4, 195, 0);
    ChargeDashMetric_RectY4->fn->setSize(ChargeDashMetric_RectY4, 24, 292);
    ChargeDashMetric_RectY4->fn->setScheme(ChargeDashMetric_RectY4, &GraphGridScheme);
    ChargeDashMetric_RectY4->fn->setBackgroundType(ChargeDashMetric_RectY4, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY4->fn->setBorderType(ChargeDashMetric_RectY4, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY4->fn->setThickness(ChargeDashMetric_RectY4, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY4);

    ChargeDashMetric_RectY5 = leRectangleWidget_New();
    ChargeDashMetric_RectY5->fn->setPosition(ChargeDashMetric_RectY5, 239, 0);
    ChargeDashMetric_RectY5->fn->setSize(ChargeDashMetric_RectY5, 24, 292);
    ChargeDashMetric_RectY5->fn->setScheme(ChargeDashMetric_RectY5, &GraphGridScheme);
    ChargeDashMetric_RectY5->fn->setBackgroundType(ChargeDashMetric_RectY5, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY5->fn->setBorderType(ChargeDashMetric_RectY5, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY5->fn->setThickness(ChargeDashMetric_RectY5, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY5);

    ChargeDashMetric_RectY6 = leRectangleWidget_New();
    ChargeDashMetric_RectY6->fn->setPosition(ChargeDashMetric_RectY6, 283, 0);
    ChargeDashMetric_RectY6->fn->setSize(ChargeDashMetric_RectY6, 24, 292);
    ChargeDashMetric_RectY6->fn->setScheme(ChargeDashMetric_RectY6, &GraphGridScheme);
    ChargeDashMetric_RectY6->fn->setBackgroundType(ChargeDashMetric_RectY6, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectY6->fn->setBorderType(ChargeDashMetric_RectY6, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectY6->fn->setThickness(ChargeDashMetric_RectY6, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectY6);

    ChargeDashMetric_RectX0 = leRectangleWidget_New();
    ChargeDashMetric_RectX0->fn->setPosition(ChargeDashMetric_RectX0, 0, 22);
    ChargeDashMetric_RectX0->fn->setSize(ChargeDashMetric_RectX0, 327, 24);
    ChargeDashMetric_RectX0->fn->setScheme(ChargeDashMetric_RectX0, &GraphGridScheme);
    ChargeDashMetric_RectX0->fn->setBackgroundType(ChargeDashMetric_RectX0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectX0->fn->setBorderType(ChargeDashMetric_RectX0, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectX0->fn->setThickness(ChargeDashMetric_RectX0, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectX0);

    ChargeDashMetric_RectX1 = leRectangleWidget_New();
    ChargeDashMetric_RectX1->fn->setPosition(ChargeDashMetric_RectX1, 0, 67);
    ChargeDashMetric_RectX1->fn->setSize(ChargeDashMetric_RectX1, 327, 24);
    ChargeDashMetric_RectX1->fn->setScheme(ChargeDashMetric_RectX1, &GraphGridScheme);
    ChargeDashMetric_RectX1->fn->setBackgroundType(ChargeDashMetric_RectX1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectX1->fn->setBorderType(ChargeDashMetric_RectX1, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectX1->fn->setThickness(ChargeDashMetric_RectX1, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectX1);

    ChargeDashMetric_RectX2 = leRectangleWidget_New();
    ChargeDashMetric_RectX2->fn->setPosition(ChargeDashMetric_RectX2, 0, 112);
    ChargeDashMetric_RectX2->fn->setSize(ChargeDashMetric_RectX2, 327, 24);
    ChargeDashMetric_RectX2->fn->setScheme(ChargeDashMetric_RectX2, &GraphGridScheme);
    ChargeDashMetric_RectX2->fn->setBackgroundType(ChargeDashMetric_RectX2, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectX2->fn->setBorderType(ChargeDashMetric_RectX2, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectX2->fn->setThickness(ChargeDashMetric_RectX2, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectX2);

    ChargeDashMetric_RectX3 = leRectangleWidget_New();
    ChargeDashMetric_RectX3->fn->setPosition(ChargeDashMetric_RectX3, 0, 157);
    ChargeDashMetric_RectX3->fn->setSize(ChargeDashMetric_RectX3, 327, 24);
    ChargeDashMetric_RectX3->fn->setScheme(ChargeDashMetric_RectX3, &GraphGridScheme);
    ChargeDashMetric_RectX3->fn->setBackgroundType(ChargeDashMetric_RectX3, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectX3->fn->setBorderType(ChargeDashMetric_RectX3, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectX3->fn->setThickness(ChargeDashMetric_RectX3, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectX3);

    ChargeDashMetric_RectX4 = leRectangleWidget_New();
    ChargeDashMetric_RectX4->fn->setPosition(ChargeDashMetric_RectX4, 0, 201);
    ChargeDashMetric_RectX4->fn->setSize(ChargeDashMetric_RectX4, 327, 24);
    ChargeDashMetric_RectX4->fn->setScheme(ChargeDashMetric_RectX4, &GraphGridScheme);
    ChargeDashMetric_RectX4->fn->setBackgroundType(ChargeDashMetric_RectX4, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectX4->fn->setBorderType(ChargeDashMetric_RectX4, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectX4->fn->setThickness(ChargeDashMetric_RectX4, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectX4);

    ChargeDashMetric_RectX5 = leRectangleWidget_New();
    ChargeDashMetric_RectX5->fn->setPosition(ChargeDashMetric_RectX5, 0, 246);
    ChargeDashMetric_RectX5->fn->setSize(ChargeDashMetric_RectX5, 327, 24);
    ChargeDashMetric_RectX5->fn->setScheme(ChargeDashMetric_RectX5, &GraphGridScheme);
    ChargeDashMetric_RectX5->fn->setBackgroundType(ChargeDashMetric_RectX5, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_RectX5->fn->setBorderType(ChargeDashMetric_RectX5, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_RectX5->fn->setThickness(ChargeDashMetric_RectX5, 2);
    ChargeDashMetric_RectBorder->fn->addChild(ChargeDashMetric_RectBorder, (leWidget*)ChargeDashMetric_RectX5);

    ChargeDashMetric_labelRemTime1_0 = leLabelWidget_New();
    ChargeDashMetric_labelRemTime1_0->fn->setPosition(ChargeDashMetric_labelRemTime1_0, 128, 11);
    ChargeDashMetric_labelRemTime1_0->fn->setSize(ChargeDashMetric_labelRemTime1_0, 115, 25);
    ChargeDashMetric_labelRemTime1_0->fn->setScheme(ChargeDashMetric_labelRemTime1_0, &WhiteScheme);
    ChargeDashMetric_labelRemTime1_0->fn->setBackgroundType(ChargeDashMetric_labelRemTime1_0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelRemTime1_0->fn->setString(ChargeDashMetric_labelRemTime1_0, (leString*)&string_RemTime);
    ChargeDashMetric_GraphPanelStatic->fn->addChild(ChargeDashMetric_GraphPanelStatic, (leWidget*)ChargeDashMetric_labelRemTime1_0);

    ChargeDashMetric_labelAve1_0 = leLabelWidget_New();
    ChargeDashMetric_labelAve1_0->fn->setPosition(ChargeDashMetric_labelAve1_0, 53, 107);
    ChargeDashMetric_labelAve1_0->fn->setSize(ChargeDashMetric_labelAve1_0, 127, 25);
    ChargeDashMetric_labelAve1_0->fn->setScheme(ChargeDashMetric_labelAve1_0, &WhiteScheme);
    ChargeDashMetric_labelAve1_0->fn->setBackgroundType(ChargeDashMetric_labelAve1_0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelAve1_0->fn->setHAlignment(ChargeDashMetric_labelAve1_0, LE_HALIGN_CENTER);
    ChargeDashMetric_labelAve1_0->fn->setString(ChargeDashMetric_labelAve1_0, (leString*)&string_DelEnergy);
    ChargeDashMetric_GraphPanelStatic->fn->addChild(ChargeDashMetric_GraphPanelStatic, (leWidget*)ChargeDashMetric_labelAve1_0);

    ChargeDashMetric_labelElapsed1_0 = leLabelWidget_New();
    ChargeDashMetric_labelElapsed1_0->fn->setPosition(ChargeDashMetric_labelElapsed1_0, 6, 11);
    ChargeDashMetric_labelElapsed1_0->fn->setSize(ChargeDashMetric_labelElapsed1_0, 101, 25);
    ChargeDashMetric_labelElapsed1_0->fn->setScheme(ChargeDashMetric_labelElapsed1_0, &WhiteScheme);
    ChargeDashMetric_labelElapsed1_0->fn->setBackgroundType(ChargeDashMetric_labelElapsed1_0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelElapsed1_0->fn->setString(ChargeDashMetric_labelElapsed1_0, (leString*)&string_ElapsedTime);
    ChargeDashMetric_GraphPanelStatic->fn->addChild(ChargeDashMetric_GraphPanelStatic, (leWidget*)ChargeDashMetric_labelElapsed1_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 800, 480);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ChargeDashMetric_BackgroundPanel_0 = leWidget_New();
    ChargeDashMetric_BackgroundPanel_0->fn->setPosition(ChargeDashMetric_BackgroundPanel_0, 0, 0);
    ChargeDashMetric_BackgroundPanel_0->fn->setSize(ChargeDashMetric_BackgroundPanel_0, 420, 480);
    ChargeDashMetric_BackgroundPanel_0->fn->setEnabled(ChargeDashMetric_BackgroundPanel_0, LE_FALSE);
    ChargeDashMetric_BackgroundPanel_0->fn->setScheme(ChargeDashMetric_BackgroundPanel_0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)ChargeDashMetric_BackgroundPanel_0);

    ChargeDashMetric_labelCharging = leLabelWidget_New();
    ChargeDashMetric_labelCharging->fn->setPosition(ChargeDashMetric_labelCharging, 188, 74);
    ChargeDashMetric_labelCharging->fn->setSize(ChargeDashMetric_labelCharging, 80, 25);
    ChargeDashMetric_labelCharging->fn->setScheme(ChargeDashMetric_labelCharging, &WhiteScheme);
    ChargeDashMetric_labelCharging->fn->setBackgroundType(ChargeDashMetric_labelCharging, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelCharging->fn->setString(ChargeDashMetric_labelCharging, (leString*)&string_Charging);
    ChargeDashMetric_BackgroundPanel_0->fn->addChild(ChargeDashMetric_BackgroundPanel_0, (leWidget*)ChargeDashMetric_labelCharging);

    ChargeDashMetric_imgChargingIcon = leImageWidget_New();
    ChargeDashMetric_imgChargingIcon->fn->setPosition(ChargeDashMetric_imgChargingIcon, 160, 69);
    ChargeDashMetric_imgChargingIcon->fn->setSize(ChargeDashMetric_imgChargingIcon, 35, 36);
    ChargeDashMetric_imgChargingIcon->fn->setBackgroundType(ChargeDashMetric_imgChargingIcon, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_imgChargingIcon->fn->setBorderType(ChargeDashMetric_imgChargingIcon, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_imgChargingIcon->fn->setImage(ChargeDashMetric_imgChargingIcon, (leImage*)&ChargingIcon);
    ChargeDashMetric_BackgroundPanel_0->fn->addChild(ChargeDashMetric_BackgroundPanel_0, (leWidget*)ChargeDashMetric_imgChargingIcon);

    ChargeDashMetric_imgBattFull = leImageWidget_New();
    ChargeDashMetric_imgBattFull->fn->setPosition(ChargeDashMetric_imgBattFull, 63, 108);
    ChargeDashMetric_imgBattFull->fn->setSize(ChargeDashMetric_imgBattFull, 308, 180);
    ChargeDashMetric_imgBattFull->fn->setBackgroundType(ChargeDashMetric_imgBattFull, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_imgBattFull->fn->setBorderType(ChargeDashMetric_imgBattFull, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_imgBattFull->fn->setHAlignment(ChargeDashMetric_imgBattFull, LE_HALIGN_LEFT);
    ChargeDashMetric_imgBattFull->fn->setMargins(ChargeDashMetric_imgBattFull, 0, 4, 4, 4);
    ChargeDashMetric_imgBattFull->fn->setImage(ChargeDashMetric_imgBattFull, (leImage*)&BattFull);
    ChargeDashMetric_BackgroundPanel_0->fn->addChild(ChargeDashMetric_BackgroundPanel_0, (leWidget*)ChargeDashMetric_imgBattFull);

    ChargeDashMetric_labelBatPct = leLabelWidget_New();
    ChargeDashMetric_labelBatPct->fn->setPosition(ChargeDashMetric_labelBatPct, 146, 173);
    ChargeDashMetric_labelBatPct->fn->setSize(ChargeDashMetric_labelBatPct, 97, 47);
    ChargeDashMetric_labelBatPct->fn->setScheme(ChargeDashMetric_labelBatPct, &WhiteScheme);
    ChargeDashMetric_labelBatPct->fn->setBackgroundType(ChargeDashMetric_labelBatPct, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelBatPct->fn->setHAlignment(ChargeDashMetric_labelBatPct, LE_HALIGN_CENTER);
    ChargeDashMetric_labelBatPct->fn->setString(ChargeDashMetric_labelBatPct, (leString*)&string_BattPctValue);
    ChargeDashMetric_BackgroundPanel_0->fn->addChild(ChargeDashMetric_BackgroundPanel_0, (leWidget*)ChargeDashMetric_labelBatPct);

    ChargeDashMetric_GraphPanel = leWidget_New();
    ChargeDashMetric_GraphPanel->fn->setPosition(ChargeDashMetric_GraphPanel, 422, 42);
    ChargeDashMetric_GraphPanel->fn->setSize(ChargeDashMetric_GraphPanel, 376, 436);
    ChargeDashMetric_GraphPanel->fn->setBackgroundType(ChargeDashMetric_GraphPanel, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)ChargeDashMetric_GraphPanel);

    ChargeDashMetric_buttonMetricView = leButtonWidget_New();
    ChargeDashMetric_buttonMetricView->fn->setPosition(ChargeDashMetric_buttonMetricView, 254, 1);
    ChargeDashMetric_buttonMetricView->fn->setSize(ChargeDashMetric_buttonMetricView, 124, 76);
    ChargeDashMetric_buttonMetricView->fn->setBackgroundType(ChargeDashMetric_buttonMetricView, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_buttonMetricView->fn->setBorderType(ChargeDashMetric_buttonMetricView, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_buttonMetricView->fn->setPressedImage(ChargeDashMetric_buttonMetricView, (leImage*)&MetricViewButton);
    ChargeDashMetric_buttonMetricView->fn->setReleasedImage(ChargeDashMetric_buttonMetricView, (leImage*)&MetricViewButton);
    ChargeDashMetric_buttonMetricView->fn->setReleasedEventCallback(ChargeDashMetric_buttonMetricView, event_ChargeDashMetric_buttonMetricView_OnReleased);
    ChargeDashMetric_GraphPanel->fn->addChild(ChargeDashMetric_GraphPanel, (leWidget*)ChargeDashMetric_buttonMetricView);

    ChargeDashMetric_LineGraphWidget_0 = leLineGraphWidget_New();
    ChargeDashMetric_LineGraphWidget_0->fn->setPosition(ChargeDashMetric_LineGraphWidget_0, 26, 103);
    ChargeDashMetric_LineGraphWidget_0->fn->setSize(ChargeDashMetric_LineGraphWidget_0, 334, 299);
    ChargeDashMetric_LineGraphWidget_0->fn->setScheme(ChargeDashMetric_LineGraphWidget_0, &GraphScheme);
    ChargeDashMetric_LineGraphWidget_0->fn->setFillSeriesArea(ChargeDashMetric_LineGraphWidget_0, LE_TRUE);
    ChargeDashMetric_LineGraphWidget_0->fn->setMaxValue(ChargeDashMetric_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 13);
    ChargeDashMetric_LineGraphWidget_0->fn->setValueAxisTickInterval(ChargeDashMetric_LineGraphWidget_0, LINE_GRAPH_AXIS_0, 1);
    ChargeDashMetric_LineGraphWidget_0->fn->setValueAxisTicksVisible(ChargeDashMetric_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LE_FALSE);
    ChargeDashMetric_LineGraphWidget_0->fn->setGridLinesVisible(ChargeDashMetric_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LE_FALSE);
    ChargeDashMetric_LineGraphWidget_0->fn->setValueAxisLabelsVisible(ChargeDashMetric_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LE_FALSE);
    ChargeDashMetric_LineGraphWidget_0->fn->setValueAxisSubticksVisible(ChargeDashMetric_LineGraphWidget_0, LINE_GRAPH_AXIS_0, LE_FALSE);
    ChargeDashMetric_LineGraphWidget_0->fn->setCategoryAxisTicksVisible(ChargeDashMetric_LineGraphWidget_0, LE_FALSE);
    ChargeDashMetric_LineGraphWidget_0->fn->setCategoryAxisLabelsVisible(ChargeDashMetric_LineGraphWidget_0, LE_FALSE);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addCategory(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->addSeries(ChargeDashMetric_LineGraphWidget_0);
    ChargeDashMetric_LineGraphWidget_0->fn->setSeriesScheme(ChargeDashMetric_LineGraphWidget_0, 0, &GraphSeriesScheme);
    ChargeDashMetric_LineGraphWidget_0->fn->setSeriesPointSize(ChargeDashMetric_LineGraphWidget_0, 0, 4);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 1);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 10);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 6);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 5);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 4);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 5);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 6);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 7);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 9);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 10);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 12);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 10);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 8);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 6);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 4);
    ChargeDashMetric_LineGraphWidget_0->fn->addDataToSeries(ChargeDashMetric_LineGraphWidget_0, 0, 3);
    ChargeDashMetric_GraphPanel->fn->addChild(ChargeDashMetric_GraphPanel, (leWidget*)ChargeDashMetric_LineGraphWidget_0);

    ChargeDashMetric_labelDelEnergyValue1 = leLabelWidget_New();
    ChargeDashMetric_labelDelEnergyValue1->fn->setPosition(ChargeDashMetric_labelDelEnergyValue1, 30, 125);
    ChargeDashMetric_labelDelEnergyValue1->fn->setSize(ChargeDashMetric_labelDelEnergyValue1, 174, 45);
    ChargeDashMetric_labelDelEnergyValue1->fn->setScheme(ChargeDashMetric_labelDelEnergyValue1, &WhiteScheme);
    ChargeDashMetric_labelDelEnergyValue1->fn->setBackgroundType(ChargeDashMetric_labelDelEnergyValue1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelDelEnergyValue1->fn->setHAlignment(ChargeDashMetric_labelDelEnergyValue1, LE_HALIGN_CENTER);
    ChargeDashMetric_labelDelEnergyValue1->fn->setMargins(ChargeDashMetric_labelDelEnergyValue1, 0, 4, 4, 4);
    ChargeDashMetric_labelDelEnergyValue1->fn->setString(ChargeDashMetric_labelDelEnergyValue1, (leString*)&string_DelEnergyValue);
    ChargeDashMetric_GraphPanel->fn->addChild(ChargeDashMetric_GraphPanel, (leWidget*)ChargeDashMetric_labelDelEnergyValue1);

    ChargeDashMetric_labelOutputPowValue1 = leLabelWidget_New();
    ChargeDashMetric_labelOutputPowValue1->fn->setPosition(ChargeDashMetric_labelOutputPowValue1, 213, 336);
    ChargeDashMetric_labelOutputPowValue1->fn->setSize(ChargeDashMetric_labelOutputPowValue1, 146, 45);
    ChargeDashMetric_labelOutputPowValue1->fn->setScheme(ChargeDashMetric_labelOutputPowValue1, &WhiteScheme);
    ChargeDashMetric_labelOutputPowValue1->fn->setBackgroundType(ChargeDashMetric_labelOutputPowValue1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelOutputPowValue1->fn->setHAlignment(ChargeDashMetric_labelOutputPowValue1, LE_HALIGN_CENTER);
    ChargeDashMetric_labelOutputPowValue1->fn->setMargins(ChargeDashMetric_labelOutputPowValue1, 0, 4, 4, 4);
    ChargeDashMetric_labelOutputPowValue1->fn->setString(ChargeDashMetric_labelOutputPowValue1, (leString*)&string_OutputPowerValue);
    ChargeDashMetric_GraphPanel->fn->addChild(ChargeDashMetric_GraphPanel, (leWidget*)ChargeDashMetric_labelOutputPowValue1);

    ChargeDashMetric_labelRemTimeValue1 = leLabelWidget_New();
    ChargeDashMetric_labelRemTimeValue1->fn->setPosition(ChargeDashMetric_labelRemTimeValue1, 133, 38);
    ChargeDashMetric_labelRemTimeValue1->fn->setSize(ChargeDashMetric_labelRemTimeValue1, 122, 45);
    ChargeDashMetric_labelRemTimeValue1->fn->setScheme(ChargeDashMetric_labelRemTimeValue1, &WhiteScheme);
    ChargeDashMetric_labelRemTimeValue1->fn->setBackgroundType(ChargeDashMetric_labelRemTimeValue1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelRemTimeValue1->fn->setMargins(ChargeDashMetric_labelRemTimeValue1, 0, 4, 4, 4);
    ChargeDashMetric_labelRemTimeValue1->fn->setString(ChargeDashMetric_labelRemTimeValue1, (leString*)&string_RemTimeValue);
    ChargeDashMetric_GraphPanel->fn->addChild(ChargeDashMetric_GraphPanel, (leWidget*)ChargeDashMetric_labelRemTimeValue1);

    ChargeDashMetric_labelElapsedTime1 = leLabelWidget_New();
    ChargeDashMetric_labelElapsedTime1->fn->setPosition(ChargeDashMetric_labelElapsedTime1, 11, 39);
    ChargeDashMetric_labelElapsedTime1->fn->setSize(ChargeDashMetric_labelElapsedTime1, 112, 45);
    ChargeDashMetric_labelElapsedTime1->fn->setScheme(ChargeDashMetric_labelElapsedTime1, &WhiteScheme);
    ChargeDashMetric_labelElapsedTime1->fn->setBackgroundType(ChargeDashMetric_labelElapsedTime1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelElapsedTime1->fn->setMargins(ChargeDashMetric_labelElapsedTime1, 0, 4, 4, 4);
    ChargeDashMetric_labelElapsedTime1->fn->setString(ChargeDashMetric_labelElapsedTime1, (leString*)&string_ElapsedTimeValue);
    ChargeDashMetric_GraphPanel->fn->addChild(ChargeDashMetric_GraphPanel, (leWidget*)ChargeDashMetric_labelElapsedTime1);

    ChargeDashMetric_MetricPanel = leWidget_New();
    ChargeDashMetric_MetricPanel->fn->setPosition(ChargeDashMetric_MetricPanel, 425, 49);
    ChargeDashMetric_MetricPanel->fn->setSize(ChargeDashMetric_MetricPanel, 372, 409);
    ChargeDashMetric_MetricPanel->fn->setBackgroundType(ChargeDashMetric_MetricPanel, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)ChargeDashMetric_MetricPanel);

    ChargeDashMetric_LabelWidget_0 = leLabelWidget_New();
    ChargeDashMetric_LabelWidget_0->fn->setPosition(ChargeDashMetric_LabelWidget_0, 15, 16);
    ChargeDashMetric_LabelWidget_0->fn->setScheme(ChargeDashMetric_LabelWidget_0, &WhiteScheme);
    ChargeDashMetric_LabelWidget_0->fn->setBackgroundType(ChargeDashMetric_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_LabelWidget_0->fn->setString(ChargeDashMetric_LabelWidget_0, (leString*)&string_ElapsedTime);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_LabelWidget_0);

    ChargeDashMetric_LabelWidget_0_0 = leLabelWidget_New();
    ChargeDashMetric_LabelWidget_0_0->fn->setPosition(ChargeDashMetric_LabelWidget_0_0, 15, 111);
    ChargeDashMetric_LabelWidget_0_0->fn->setSize(ChargeDashMetric_LabelWidget_0_0, 129, 25);
    ChargeDashMetric_LabelWidget_0_0->fn->setScheme(ChargeDashMetric_LabelWidget_0_0, &WhiteScheme);
    ChargeDashMetric_LabelWidget_0_0->fn->setBackgroundType(ChargeDashMetric_LabelWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_LabelWidget_0_0->fn->setString(ChargeDashMetric_LabelWidget_0_0, (leString*)&string_RemTime);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_LabelWidget_0_0);

    ChargeDashMetric_LabelWidget_0_1 = leLabelWidget_New();
    ChargeDashMetric_LabelWidget_0_1->fn->setPosition(ChargeDashMetric_LabelWidget_0_1, 15, 206);
    ChargeDashMetric_LabelWidget_0_1->fn->setSize(ChargeDashMetric_LabelWidget_0_1, 127, 25);
    ChargeDashMetric_LabelWidget_0_1->fn->setScheme(ChargeDashMetric_LabelWidget_0_1, &WhiteScheme);
    ChargeDashMetric_LabelWidget_0_1->fn->setBackgroundType(ChargeDashMetric_LabelWidget_0_1, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_LabelWidget_0_1->fn->setString(ChargeDashMetric_LabelWidget_0_1, (leString*)&string_OutPower);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_LabelWidget_0_1);

    ChargeDashMetric_LabelWidget_0_2 = leLabelWidget_New();
    ChargeDashMetric_LabelWidget_0_2->fn->setPosition(ChargeDashMetric_LabelWidget_0_2, 15, 306);
    ChargeDashMetric_LabelWidget_0_2->fn->setSize(ChargeDashMetric_LabelWidget_0_2, 154, 25);
    ChargeDashMetric_LabelWidget_0_2->fn->setScheme(ChargeDashMetric_LabelWidget_0_2, &WhiteScheme);
    ChargeDashMetric_LabelWidget_0_2->fn->setBackgroundType(ChargeDashMetric_LabelWidget_0_2, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_LabelWidget_0_2->fn->setString(ChargeDashMetric_LabelWidget_0_2, (leString*)&string_DelEnergy);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_LabelWidget_0_2);

    ChargeDashMetric_labelElapsedTime = leLabelWidget_New();
    ChargeDashMetric_labelElapsedTime->fn->setPosition(ChargeDashMetric_labelElapsedTime, 20, 44);
    ChargeDashMetric_labelElapsedTime->fn->setSize(ChargeDashMetric_labelElapsedTime, 174, 45);
    ChargeDashMetric_labelElapsedTime->fn->setScheme(ChargeDashMetric_labelElapsedTime, &WhiteScheme);
    ChargeDashMetric_labelElapsedTime->fn->setBackgroundType(ChargeDashMetric_labelElapsedTime, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelElapsedTime->fn->setMargins(ChargeDashMetric_labelElapsedTime, 0, 4, 4, 4);
    ChargeDashMetric_labelElapsedTime->fn->setString(ChargeDashMetric_labelElapsedTime, (leString*)&string_ElapsedTimeValue);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_labelElapsedTime);

    ChargeDashMetric_labelRemTimeValue = leLabelWidget_New();
    ChargeDashMetric_labelRemTimeValue->fn->setPosition(ChargeDashMetric_labelRemTimeValue, 20, 137);
    ChargeDashMetric_labelRemTimeValue->fn->setSize(ChargeDashMetric_labelRemTimeValue, 174, 45);
    ChargeDashMetric_labelRemTimeValue->fn->setScheme(ChargeDashMetric_labelRemTimeValue, &WhiteScheme);
    ChargeDashMetric_labelRemTimeValue->fn->setBackgroundType(ChargeDashMetric_labelRemTimeValue, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelRemTimeValue->fn->setMargins(ChargeDashMetric_labelRemTimeValue, 0, 4, 4, 4);
    ChargeDashMetric_labelRemTimeValue->fn->setString(ChargeDashMetric_labelRemTimeValue, (leString*)&string_RemTimeValue);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_labelRemTimeValue);

    ChargeDashMetric_labelOutputPowValue = leLabelWidget_New();
    ChargeDashMetric_labelOutputPowValue->fn->setPosition(ChargeDashMetric_labelOutputPowValue, 20, 237);
    ChargeDashMetric_labelOutputPowValue->fn->setSize(ChargeDashMetric_labelOutputPowValue, 174, 45);
    ChargeDashMetric_labelOutputPowValue->fn->setScheme(ChargeDashMetric_labelOutputPowValue, &WhiteScheme);
    ChargeDashMetric_labelOutputPowValue->fn->setBackgroundType(ChargeDashMetric_labelOutputPowValue, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelOutputPowValue->fn->setMargins(ChargeDashMetric_labelOutputPowValue, 0, 4, 4, 4);
    ChargeDashMetric_labelOutputPowValue->fn->setString(ChargeDashMetric_labelOutputPowValue, (leString*)&string_OutputPowerValue);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_labelOutputPowValue);

    ChargeDashMetric_labelDelEnergyValue = leLabelWidget_New();
    ChargeDashMetric_labelDelEnergyValue->fn->setPosition(ChargeDashMetric_labelDelEnergyValue, 20, 336);
    ChargeDashMetric_labelDelEnergyValue->fn->setSize(ChargeDashMetric_labelDelEnergyValue, 174, 45);
    ChargeDashMetric_labelDelEnergyValue->fn->setScheme(ChargeDashMetric_labelDelEnergyValue, &WhiteScheme);
    ChargeDashMetric_labelDelEnergyValue->fn->setBackgroundType(ChargeDashMetric_labelDelEnergyValue, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_labelDelEnergyValue->fn->setMargins(ChargeDashMetric_labelDelEnergyValue, 0, 4, 4, 4);
    ChargeDashMetric_labelDelEnergyValue->fn->setString(ChargeDashMetric_labelDelEnergyValue, (leString*)&string_DelEnergyValue);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_labelDelEnergyValue);

    ChargeDashMetric_buttonGraphView = leButtonWidget_New();
    ChargeDashMetric_buttonGraphView->fn->setPosition(ChargeDashMetric_buttonGraphView, 251, -6);
    ChargeDashMetric_buttonGraphView->fn->setSize(ChargeDashMetric_buttonGraphView, 124, 76);
    ChargeDashMetric_buttonGraphView->fn->setBackgroundType(ChargeDashMetric_buttonGraphView, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_buttonGraphView->fn->setBorderType(ChargeDashMetric_buttonGraphView, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_buttonGraphView->fn->setPressedImage(ChargeDashMetric_buttonGraphView, (leImage*)&GraphViewButton);
    ChargeDashMetric_buttonGraphView->fn->setReleasedImage(ChargeDashMetric_buttonGraphView, (leImage*)&GraphViewButton);
    ChargeDashMetric_buttonGraphView->fn->setReleasedEventCallback(ChargeDashMetric_buttonGraphView, event_ChargeDashMetric_buttonGraphView_OnReleased);
    ChargeDashMetric_MetricPanel->fn->addChild(ChargeDashMetric_MetricPanel, (leWidget*)ChargeDashMetric_buttonGraphView);

    ChargeDashMetric_ExitButton = leButtonWidget_New();
    ChargeDashMetric_ExitButton->fn->setPosition(ChargeDashMetric_ExitButton, 13, 415);
    ChargeDashMetric_ExitButton->fn->setSize(ChargeDashMetric_ExitButton, 102, 57);
    ChargeDashMetric_ExitButton->fn->setScheme(ChargeDashMetric_ExitButton, &PanelScheme);
    ChargeDashMetric_ExitButton->fn->setBackgroundType(ChargeDashMetric_ExitButton, LE_WIDGET_BACKGROUND_NONE);
    ChargeDashMetric_ExitButton->fn->setBorderType(ChargeDashMetric_ExitButton, LE_WIDGET_BORDER_NONE);
    ChargeDashMetric_ExitButton->fn->setHAlignment(ChargeDashMetric_ExitButton, LE_HALIGN_LEFT);
    ChargeDashMetric_ExitButton->fn->setMargins(ChargeDashMetric_ExitButton, 10, 4, 4, 4);
    ChargeDashMetric_ExitButton->fn->setString(ChargeDashMetric_ExitButton, (leString*)&string_ExitString);
    ChargeDashMetric_ExitButton->fn->setReleasedEventCallback(ChargeDashMetric_ExitButton, event_ChargeDashMetric_ExitButton_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ChargeDashMetric_ExitButton);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    ChargeDashMetric_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ChargeDashMetric(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);

    ChargeDashMetric_OnUpdate(); // raise event
}

void screenHide_ChargeDashMetric(void)
{
    ChargeDashMetric_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ChargeDashMetric_Panel_0 = NULL;
    ChargeDashMetric_BackColorPanel = NULL;
    ChargeDashMetric_imageMGS = NULL;
    ChargeDashMetric_imageCar = NULL;
    ChargeDashMetric_imgBattEmpty = NULL;
    ChargeDashMetric_labelDate = NULL;
    ChargeDashMetric_labelTime = NULL;
    ChargeDashMetric_labelDate = NULL;
    ChargeDashMetric_labelTime = NULL;
    ChargeDashMetric_GraphPanelStatic = NULL;
    ChargeDashMetric_GraphGridPanel = NULL;
    ChargeDashMetric_labelRemTime1_0 = NULL;
    ChargeDashMetric_labelAve1_0 = NULL;
    ChargeDashMetric_labelElapsed1_0 = NULL;
    ChargeDashMetric_labelDate_0 = NULL;
    ChargeDashMetric_RectBorder = NULL;
    ChargeDashMetric_RectY0 = NULL;
    ChargeDashMetric_RectY1 = NULL;
    ChargeDashMetric_RectY2 = NULL;
    ChargeDashMetric_RectY3 = NULL;
    ChargeDashMetric_RectY4 = NULL;
    ChargeDashMetric_RectY5 = NULL;
    ChargeDashMetric_RectY6 = NULL;
    ChargeDashMetric_RectX0 = NULL;
    ChargeDashMetric_RectX1 = NULL;
    ChargeDashMetric_RectX2 = NULL;
    ChargeDashMetric_RectX3 = NULL;
    ChargeDashMetric_RectX4 = NULL;
    ChargeDashMetric_RectX5 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ChargeDashMetric_BackgroundPanel_0 = NULL;
    ChargeDashMetric_GraphPanel = NULL;
    ChargeDashMetric_MetricPanel = NULL;
    ChargeDashMetric_ExitButton = NULL;
    ChargeDashMetric_labelCharging = NULL;
    ChargeDashMetric_imgChargingIcon = NULL;
    ChargeDashMetric_imgBattFull = NULL;
    ChargeDashMetric_labelBatPct = NULL;
    ChargeDashMetric_buttonMetricView = NULL;
    ChargeDashMetric_LineGraphWidget_0 = NULL;
    ChargeDashMetric_labelDelEnergyValue1 = NULL;
    ChargeDashMetric_labelOutputPowValue1 = NULL;
    ChargeDashMetric_labelRemTimeValue1 = NULL;
    ChargeDashMetric_labelElapsedTime1 = NULL;
    ChargeDashMetric_LabelWidget_0 = NULL;
    ChargeDashMetric_LabelWidget_0_0 = NULL;
    ChargeDashMetric_LabelWidget_0_1 = NULL;
    ChargeDashMetric_LabelWidget_0_2 = NULL;
    ChargeDashMetric_labelElapsedTime = NULL;
    ChargeDashMetric_labelRemTimeValue = NULL;
    ChargeDashMetric_labelOutputPowValue = NULL;
    ChargeDashMetric_labelDelEnergyValue = NULL;
    ChargeDashMetric_buttonGraphView = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ChargeDashMetric(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ChargeDashMetric(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        case 1:
        {
            return root1;
        }
        default:
        {
            return NULL;
        }
    }
}

