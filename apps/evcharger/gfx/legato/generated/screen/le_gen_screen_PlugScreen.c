#include "gfx/legato/generated/screen/le_gen_screen_PlugScreen.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leWidget* PlugScreen_Panel_0;
leWidget* PlugScreen_Panel_0_0;
leImageWidget* PlugScreen_ImageWidget_0_0;
leLabelWidget* PlugScreen_LabelWidget_0;
leLabelWidget* PlugScreen_labelDate;
leLabelWidget* PlugScreen_labelTime;
leImageWidget* PlugScreen_imageMGS;
leWidget* PlugScreen_BackgroundPanel_0;
leButtonWidget* PlugScreen_ExitButton;
leButtonWidget* PlugScreen_buttonConnect;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_PlugScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_PlugScreen(void)
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

    PlugScreen_Panel_0 = leWidget_New();
    PlugScreen_Panel_0->fn->setPosition(PlugScreen_Panel_0, 0, 0);
    PlugScreen_Panel_0->fn->setSize(PlugScreen_Panel_0, 420, 480);
    PlugScreen_Panel_0->fn->setScheme(PlugScreen_Panel_0, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_Panel_0);

    PlugScreen_Panel_0_0 = leWidget_New();
    PlugScreen_Panel_0_0->fn->setPosition(PlugScreen_Panel_0_0, 420, 0);
    PlugScreen_Panel_0_0->fn->setSize(PlugScreen_Panel_0_0, 380, 480);
    PlugScreen_Panel_0_0->fn->setScheme(PlugScreen_Panel_0_0, &PanelScheme);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_Panel_0_0);

    PlugScreen_ImageWidget_0_0 = leImageWidget_New();
    PlugScreen_ImageWidget_0_0->fn->setPosition(PlugScreen_ImageWidget_0_0, 138, 100);
    PlugScreen_ImageWidget_0_0->fn->setSize(PlugScreen_ImageWidget_0_0, 283, 380);
    PlugScreen_ImageWidget_0_0->fn->setBackgroundType(PlugScreen_ImageWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_ImageWidget_0_0->fn->setBorderType(PlugScreen_ImageWidget_0_0, LE_WIDGET_BORDER_NONE);
    PlugScreen_ImageWidget_0_0->fn->setImage(PlugScreen_ImageWidget_0_0, (leImage*)&CarImage);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_ImageWidget_0_0);

    PlugScreen_LabelWidget_0 = leLabelWidget_New();
    PlugScreen_LabelWidget_0->fn->setPosition(PlugScreen_LabelWidget_0, 444, 118);
    PlugScreen_LabelWidget_0->fn->setSize(PlugScreen_LabelWidget_0, 247, 271);
    PlugScreen_LabelWidget_0->fn->setScheme(PlugScreen_LabelWidget_0, &WhiteScheme);
    PlugScreen_LabelWidget_0->fn->setBackgroundType(PlugScreen_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_LabelWidget_0->fn->setString(PlugScreen_LabelWidget_0, (leString*)&string_Plug);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_LabelWidget_0);

    PlugScreen_labelDate = leLabelWidget_New();
    PlugScreen_labelDate->fn->setPosition(PlugScreen_labelDate, 423, 4);
    PlugScreen_labelDate->fn->setSize(PlugScreen_labelDate, 86, 25);
    PlugScreen_labelDate->fn->setScheme(PlugScreen_labelDate, &WhiteScheme);
    PlugScreen_labelDate->fn->setBackgroundType(PlugScreen_labelDate, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_labelDate->fn->setHAlignment(PlugScreen_labelDate, LE_HALIGN_CENTER);
    PlugScreen_labelDate->fn->setString(PlugScreen_labelDate, (leString*)&string_DateValue);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_labelDate);

    PlugScreen_labelTime = leLabelWidget_New();
    PlugScreen_labelTime->fn->setPosition(PlugScreen_labelTime, 723, 4);
    PlugScreen_labelTime->fn->setSize(PlugScreen_labelTime, 69, 25);
    PlugScreen_labelTime->fn->setScheme(PlugScreen_labelTime, &WhiteScheme);
    PlugScreen_labelTime->fn->setBackgroundType(PlugScreen_labelTime, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_labelTime->fn->setHAlignment(PlugScreen_labelTime, LE_HALIGN_CENTER);
    PlugScreen_labelTime->fn->setString(PlugScreen_labelTime, (leString*)&string_TimeValue);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_labelTime);

    PlugScreen_imageMGS = leImageWidget_New();
    PlugScreen_imageMGS->fn->setPosition(PlugScreen_imageMGS, 5, 5);
    PlugScreen_imageMGS->fn->setSize(PlugScreen_imageMGS, 124, 41);
    PlugScreen_imageMGS->fn->setBackgroundType(PlugScreen_imageMGS, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_imageMGS->fn->setBorderType(PlugScreen_imageMGS, LE_WIDGET_BORDER_NONE);
    PlugScreen_imageMGS->fn->setImage(PlugScreen_imageMGS, (leImage*)&MGS_Logo);
    root0->fn->addChild(root0, (leWidget*)PlugScreen_imageMGS);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 800, 480);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    PlugScreen_BackgroundPanel_0 = leWidget_New();
    PlugScreen_BackgroundPanel_0->fn->setPosition(PlugScreen_BackgroundPanel_0, 0, 0);
    PlugScreen_BackgroundPanel_0->fn->setSize(PlugScreen_BackgroundPanel_0, 800, 480);
    PlugScreen_BackgroundPanel_0->fn->setEnabled(PlugScreen_BackgroundPanel_0, LE_FALSE);
    PlugScreen_BackgroundPanel_0->fn->setScheme(PlugScreen_BackgroundPanel_0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)PlugScreen_BackgroundPanel_0);

    PlugScreen_ExitButton = leButtonWidget_New();
    PlugScreen_ExitButton->fn->setPosition(PlugScreen_ExitButton, 13, 415);
    PlugScreen_ExitButton->fn->setSize(PlugScreen_ExitButton, 102, 57);
    PlugScreen_ExitButton->fn->setScheme(PlugScreen_ExitButton, &PanelScheme);
    PlugScreen_ExitButton->fn->setBackgroundType(PlugScreen_ExitButton, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_ExitButton->fn->setBorderType(PlugScreen_ExitButton, LE_WIDGET_BORDER_NONE);
    PlugScreen_ExitButton->fn->setHAlignment(PlugScreen_ExitButton, LE_HALIGN_LEFT);
    PlugScreen_ExitButton->fn->setMargins(PlugScreen_ExitButton, 10, 4, 4, 4);
    PlugScreen_ExitButton->fn->setString(PlugScreen_ExitButton, (leString*)&string_ExitString);
    PlugScreen_ExitButton->fn->setReleasedEventCallback(PlugScreen_ExitButton, event_PlugScreen_ExitButton_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PlugScreen_ExitButton);

    PlugScreen_buttonConnect = leButtonWidget_New();
    PlugScreen_buttonConnect->fn->setPosition(PlugScreen_buttonConnect, 7, 101);
    PlugScreen_buttonConnect->fn->setSize(PlugScreen_buttonConnect, 413, 284);
    PlugScreen_buttonConnect->fn->setScheme(PlugScreen_buttonConnect, &WhiteScheme);
    PlugScreen_buttonConnect->fn->setBackgroundType(PlugScreen_buttonConnect, LE_WIDGET_BACKGROUND_NONE);
    PlugScreen_buttonConnect->fn->setBorderType(PlugScreen_buttonConnect, LE_WIDGET_BORDER_NONE);
    PlugScreen_buttonConnect->fn->setVAlignment(PlugScreen_buttonConnect, LE_VALIGN_TOP);
    PlugScreen_buttonConnect->fn->setString(PlugScreen_buttonConnect, (leString*)&string_NotConnected);
    PlugScreen_buttonConnect->fn->setPressedImage(PlugScreen_buttonConnect, (leImage*)&NotConnectedIcon);
    PlugScreen_buttonConnect->fn->setReleasedImage(PlugScreen_buttonConnect, (leImage*)&NotConnectedIcon);
    PlugScreen_buttonConnect->fn->setReleasedEventCallback(PlugScreen_buttonConnect, event_PlugScreen_buttonConnect_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PlugScreen_buttonConnect);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_PlugScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);
}

void screenHide_PlugScreen(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    PlugScreen_Panel_0 = NULL;
    PlugScreen_Panel_0_0 = NULL;
    PlugScreen_ImageWidget_0_0 = NULL;
    PlugScreen_LabelWidget_0 = NULL;
    PlugScreen_labelDate = NULL;
    PlugScreen_labelTime = NULL;
    PlugScreen_imageMGS = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    PlugScreen_BackgroundPanel_0 = NULL;
    PlugScreen_ExitButton = NULL;
    PlugScreen_buttonConnect = NULL;


    showing = LE_FALSE;
}

void screenDestroy_PlugScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_PlugScreen(uint32_t lyrIdx)
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

