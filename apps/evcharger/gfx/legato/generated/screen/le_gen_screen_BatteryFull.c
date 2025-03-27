#include "gfx/legato/generated/screen/le_gen_screen_BatteryFull.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leWidget* BatteryFull_Panel_0;
leLabelWidget* BatteryFull_LabelWidget_0;
leLabelWidget* BatteryFull_LabelWidget_1;
leImageWidget* BatteryFull_imageMGS;
leWidget* BatteryFull_BackgroundPanel_0;
leButtonWidget* BatteryFull_buttonHome;
leButtonWidget* BatteryFull_ExitButton;
leImageWidget* BatteryFull_imgBattFull;
leLabelWidget* BatteryFull_labelBatPct;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_BatteryFull(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_BatteryFull(void)
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

    BatteryFull_Panel_0 = leWidget_New();
    BatteryFull_Panel_0->fn->setPosition(BatteryFull_Panel_0, 0, 0);
    BatteryFull_Panel_0->fn->setSize(BatteryFull_Panel_0, 800, 480);
    BatteryFull_Panel_0->fn->setScheme(BatteryFull_Panel_0, &PanelScheme);
    root0->fn->addChild(root0, (leWidget*)BatteryFull_Panel_0);

    BatteryFull_LabelWidget_0 = leLabelWidget_New();
    BatteryFull_LabelWidget_0->fn->setPosition(BatteryFull_LabelWidget_0, 179, 283);
    BatteryFull_LabelWidget_0->fn->setSize(BatteryFull_LabelWidget_0, 473, 76);
    BatteryFull_LabelWidget_0->fn->setScheme(BatteryFull_LabelWidget_0, &WhiteScheme);
    BatteryFull_LabelWidget_0->fn->setBackgroundType(BatteryFull_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_LabelWidget_0->fn->setHAlignment(BatteryFull_LabelWidget_0, LE_HALIGN_CENTER);
    BatteryFull_LabelWidget_0->fn->setString(BatteryFull_LabelWidget_0, (leString*)&string_FullyCharged);
    root0->fn->addChild(root0, (leWidget*)BatteryFull_LabelWidget_0);

    BatteryFull_LabelWidget_1 = leLabelWidget_New();
    BatteryFull_LabelWidget_1->fn->setPosition(BatteryFull_LabelWidget_1, 231, 369);
    BatteryFull_LabelWidget_1->fn->setSize(BatteryFull_LabelWidget_1, 375, 25);
    BatteryFull_LabelWidget_1->fn->setScheme(BatteryFull_LabelWidget_1, &WhiteScheme);
    BatteryFull_LabelWidget_1->fn->setBackgroundType(BatteryFull_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_LabelWidget_1->fn->setHAlignment(BatteryFull_LabelWidget_1, LE_HALIGN_CENTER);
    BatteryFull_LabelWidget_1->fn->setString(BatteryFull_LabelWidget_1, (leString*)&string_Unplug);
    root0->fn->addChild(root0, (leWidget*)BatteryFull_LabelWidget_1);

    BatteryFull_imageMGS = leImageWidget_New();
    BatteryFull_imageMGS->fn->setPosition(BatteryFull_imageMGS, 5, 5);
    BatteryFull_imageMGS->fn->setSize(BatteryFull_imageMGS, 124, 41);
    BatteryFull_imageMGS->fn->setBackgroundType(BatteryFull_imageMGS, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_imageMGS->fn->setBorderType(BatteryFull_imageMGS, LE_WIDGET_BORDER_NONE);
    BatteryFull_imageMGS->fn->setImage(BatteryFull_imageMGS, (leImage*)&MGS_Logo);
    root0->fn->addChild(root0, (leWidget*)BatteryFull_imageMGS);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 800, 480);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    BatteryFull_BackgroundPanel_0 = leWidget_New();
    BatteryFull_BackgroundPanel_0->fn->setPosition(BatteryFull_BackgroundPanel_0, 0, 0);
    BatteryFull_BackgroundPanel_0->fn->setSize(BatteryFull_BackgroundPanel_0, 800, 480);
    BatteryFull_BackgroundPanel_0->fn->setEnabled(BatteryFull_BackgroundPanel_0, LE_FALSE);
    BatteryFull_BackgroundPanel_0->fn->setScheme(BatteryFull_BackgroundPanel_0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)BatteryFull_BackgroundPanel_0);

    BatteryFull_buttonHome = leButtonWidget_New();
    BatteryFull_buttonHome->fn->setPosition(BatteryFull_buttonHome, 236, 106);
    BatteryFull_buttonHome->fn->setSize(BatteryFull_buttonHome, 343, 177);
    BatteryFull_buttonHome->fn->setBackgroundType(BatteryFull_buttonHome, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_buttonHome->fn->setBorderType(BatteryFull_buttonHome, LE_WIDGET_BORDER_NONE);
    BatteryFull_buttonHome->fn->setReleasedEventCallback(BatteryFull_buttonHome, event_BatteryFull_buttonHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)BatteryFull_buttonHome);

    BatteryFull_imgBattFull = leImageWidget_New();
    BatteryFull_imgBattFull->fn->setPosition(BatteryFull_imgBattFull, 14, -1);
    BatteryFull_imgBattFull->fn->setSize(BatteryFull_imgBattFull, 301, 180);
    BatteryFull_imgBattFull->fn->setEnabled(BatteryFull_imgBattFull, LE_FALSE);
    BatteryFull_imgBattFull->fn->setBackgroundType(BatteryFull_imgBattFull, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_imgBattFull->fn->setBorderType(BatteryFull_imgBattFull, LE_WIDGET_BORDER_NONE);
    BatteryFull_imgBattFull->fn->setHAlignment(BatteryFull_imgBattFull, LE_HALIGN_LEFT);
    BatteryFull_imgBattFull->fn->setMargins(BatteryFull_imgBattFull, 0, 4, 4, 4);
    BatteryFull_imgBattFull->fn->setImage(BatteryFull_imgBattFull, (leImage*)&BattFull);
    BatteryFull_buttonHome->fn->addChild(BatteryFull_buttonHome, (leWidget*)BatteryFull_imgBattFull);

    BatteryFull_labelBatPct = leLabelWidget_New();
    BatteryFull_labelBatPct->fn->setPosition(BatteryFull_labelBatPct, 99, 65);
    BatteryFull_labelBatPct->fn->setSize(BatteryFull_labelBatPct, 97, 47);
    BatteryFull_labelBatPct->fn->setEnabled(BatteryFull_labelBatPct, LE_FALSE);
    BatteryFull_labelBatPct->fn->setScheme(BatteryFull_labelBatPct, &WhiteScheme);
    BatteryFull_labelBatPct->fn->setBackgroundType(BatteryFull_labelBatPct, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_labelBatPct->fn->setHAlignment(BatteryFull_labelBatPct, LE_HALIGN_CENTER);
    BatteryFull_labelBatPct->fn->setString(BatteryFull_labelBatPct, (leString*)&string_BattFullValue);
    BatteryFull_buttonHome->fn->addChild(BatteryFull_buttonHome, (leWidget*)BatteryFull_labelBatPct);

    BatteryFull_ExitButton = leButtonWidget_New();
    BatteryFull_ExitButton->fn->setPosition(BatteryFull_ExitButton, 13, 415);
    BatteryFull_ExitButton->fn->setSize(BatteryFull_ExitButton, 102, 57);
    BatteryFull_ExitButton->fn->setScheme(BatteryFull_ExitButton, &PanelScheme);
    BatteryFull_ExitButton->fn->setBackgroundType(BatteryFull_ExitButton, LE_WIDGET_BACKGROUND_NONE);
    BatteryFull_ExitButton->fn->setBorderType(BatteryFull_ExitButton, LE_WIDGET_BORDER_NONE);
    BatteryFull_ExitButton->fn->setHAlignment(BatteryFull_ExitButton, LE_HALIGN_LEFT);
    BatteryFull_ExitButton->fn->setMargins(BatteryFull_ExitButton, 10, 4, 4, 4);
    BatteryFull_ExitButton->fn->setString(BatteryFull_ExitButton, (leString*)&string_ExitString);
    BatteryFull_ExitButton->fn->setReleasedEventCallback(BatteryFull_ExitButton, event_BatteryFull_ExitButton_OnReleased);
    root1->fn->addChild(root1, (leWidget*)BatteryFull_ExitButton);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_BatteryFull(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);
}

void screenHide_BatteryFull(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    BatteryFull_Panel_0 = NULL;
    BatteryFull_LabelWidget_0 = NULL;
    BatteryFull_LabelWidget_1 = NULL;
    BatteryFull_imageMGS = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    BatteryFull_BackgroundPanel_0 = NULL;
    BatteryFull_buttonHome = NULL;
    BatteryFull_ExitButton = NULL;
    BatteryFull_imgBattFull = NULL;
    BatteryFull_labelBatPct = NULL;


    showing = LE_FALSE;
}

void screenDestroy_BatteryFull(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_BatteryFull(uint32_t lyrIdx)
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

