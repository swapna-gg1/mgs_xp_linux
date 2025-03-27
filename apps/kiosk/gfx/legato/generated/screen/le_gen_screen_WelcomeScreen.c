#include "gfx/legato/generated/screen/le_gen_screen_WelcomeScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* WelcomeScreen_BackgroundPanel;
leButtonWidget* WelcomeScreen_btnChkOut;
leLabelWidget* WelcomeScreen_LabelWidget_0;
leLabelWidget* WelcomeScreen_LabelWidget_0_0;
leLabelWidget* WelcomeScreen_LabelWidget_0_1;
leImageWidget* WelcomeScreen_imgMGS;
leButtonWidget* WelcomeScreen_btnChkIn;
leImageWidget* WelcomeScreen_ImageWidget_1;
leLabelWidget* WelcomeScreen_LabelWidget_1;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_WelcomeScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_WelcomeScreen(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 1280, 800);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    WelcomeScreen_BackgroundPanel = leWidget_New();
    WelcomeScreen_BackgroundPanel->fn->setPosition(WelcomeScreen_BackgroundPanel, 0, 0);
    WelcomeScreen_BackgroundPanel->fn->setSize(WelcomeScreen_BackgroundPanel, 1280, 800);
    WelcomeScreen_BackgroundPanel->fn->setScheme(WelcomeScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_BackgroundPanel);

    WelcomeScreen_btnChkOut = leButtonWidget_New();
    WelcomeScreen_btnChkOut->fn->setPosition(WelcomeScreen_btnChkOut, 24, 265);
    WelcomeScreen_btnChkOut->fn->setSize(WelcomeScreen_btnChkOut, 600, 350);
    WelcomeScreen_btnChkOut->fn->setScheme(WelcomeScreen_btnChkOut, &KioskScheme);
    WelcomeScreen_btnChkOut->fn->setBorderType(WelcomeScreen_btnChkOut, LE_WIDGET_BORDER_NONE);
    WelcomeScreen_btnChkOut->fn->setHAlignment(WelcomeScreen_btnChkOut, LE_HALIGN_RIGHT);
    WelcomeScreen_btnChkOut->fn->setMargins(WelcomeScreen_btnChkOut, 0, 0, 0, 0);
    WelcomeScreen_btnChkOut->fn->setString(WelcomeScreen_btnChkOut, (leString*)&string_strCheckOut);
    WelcomeScreen_btnChkOut->fn->setPressedImage(WelcomeScreen_btnChkOut, (leImage*)&CheckOut);
    WelcomeScreen_btnChkOut->fn->setReleasedImage(WelcomeScreen_btnChkOut, (leImage*)&CheckOut);
    WelcomeScreen_btnChkOut->fn->setImagePosition(WelcomeScreen_btnChkOut, LE_RELATIVE_POSITION_RIGHTOF);
    WelcomeScreen_btnChkOut->fn->setImageMargin(WelcomeScreen_btnChkOut, 40);
    WelcomeScreen_btnChkOut->fn->setReleasedEventCallback(WelcomeScreen_btnChkOut, event_WelcomeScreen_btnChkOut_OnReleased);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_btnChkOut);

    WelcomeScreen_LabelWidget_0 = leLabelWidget_New();
    WelcomeScreen_LabelWidget_0->fn->setPosition(WelcomeScreen_LabelWidget_0, 44, 34);
    WelcomeScreen_LabelWidget_0->fn->setSize(WelcomeScreen_LabelWidget_0, 298, 47);
    WelcomeScreen_LabelWidget_0->fn->setScheme(WelcomeScreen_LabelWidget_0, &BlackScheme);
    WelcomeScreen_LabelWidget_0->fn->setBackgroundType(WelcomeScreen_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    WelcomeScreen_LabelWidget_0->fn->setString(WelcomeScreen_LabelWidget_0, (leString*)&string_strWelcome);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_LabelWidget_0);

    WelcomeScreen_LabelWidget_0_0 = leLabelWidget_New();
    WelcomeScreen_LabelWidget_0_0->fn->setPosition(WelcomeScreen_LabelWidget_0_0, 39, 83);
    WelcomeScreen_LabelWidget_0_0->fn->setSize(WelcomeScreen_LabelWidget_0_0, 747, 106);
    WelcomeScreen_LabelWidget_0_0->fn->setScheme(WelcomeScreen_LabelWidget_0_0, &KioskSchemeText);
    WelcomeScreen_LabelWidget_0_0->fn->setBackgroundType(WelcomeScreen_LabelWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    WelcomeScreen_LabelWidget_0_0->fn->setVAlignment(WelcomeScreen_LabelWidget_0_0, LE_VALIGN_TOP);
    WelcomeScreen_LabelWidget_0_0->fn->setString(WelcomeScreen_LabelWidget_0_0, (leString*)&string_strHotelName);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_LabelWidget_0_0);

    WelcomeScreen_LabelWidget_0_1 = leLabelWidget_New();
    WelcomeScreen_LabelWidget_0_1->fn->setPosition(WelcomeScreen_LabelWidget_0_1, 38, 188);
    WelcomeScreen_LabelWidget_0_1->fn->setSize(WelcomeScreen_LabelWidget_0_1, 519, 58);
    WelcomeScreen_LabelWidget_0_1->fn->setBackgroundType(WelcomeScreen_LabelWidget_0_1, LE_WIDGET_BACKGROUND_NONE);
    WelcomeScreen_LabelWidget_0_1->fn->setString(WelcomeScreen_LabelWidget_0_1, (leString*)&string_strPress);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_LabelWidget_0_1);

    WelcomeScreen_imgMGS = leImageWidget_New();
    WelcomeScreen_imgMGS->fn->setPosition(WelcomeScreen_imgMGS, 1102, 20);
    WelcomeScreen_imgMGS->fn->setSize(WelcomeScreen_imgMGS, 169, 49);
    WelcomeScreen_imgMGS->fn->setBackgroundType(WelcomeScreen_imgMGS, LE_WIDGET_BACKGROUND_NONE);
    WelcomeScreen_imgMGS->fn->setBorderType(WelcomeScreen_imgMGS, LE_WIDGET_BORDER_NONE);
    WelcomeScreen_imgMGS->fn->setImage(WelcomeScreen_imgMGS, (leImage*)&MGS_40h);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_imgMGS);

    WelcomeScreen_btnChkIn = leButtonWidget_New();
    WelcomeScreen_btnChkIn->fn->setPosition(WelcomeScreen_btnChkIn, 654, 265);
    WelcomeScreen_btnChkIn->fn->setSize(WelcomeScreen_btnChkIn, 600, 350);
    WelcomeScreen_btnChkIn->fn->setScheme(WelcomeScreen_btnChkIn, &KioskScheme);
    WelcomeScreen_btnChkIn->fn->setBorderType(WelcomeScreen_btnChkIn, LE_WIDGET_BORDER_NONE);
    WelcomeScreen_btnChkIn->fn->setHAlignment(WelcomeScreen_btnChkIn, LE_HALIGN_RIGHT);
    WelcomeScreen_btnChkIn->fn->setMargins(WelcomeScreen_btnChkIn, 4, 4, 0, 4);
    WelcomeScreen_btnChkIn->fn->setString(WelcomeScreen_btnChkIn, (leString*)&string_strCheckIn);
    WelcomeScreen_btnChkIn->fn->setPressedImage(WelcomeScreen_btnChkIn, (leImage*)&CheckIn);
    WelcomeScreen_btnChkIn->fn->setReleasedImage(WelcomeScreen_btnChkIn, (leImage*)&CheckIn);
    WelcomeScreen_btnChkIn->fn->setImagePosition(WelcomeScreen_btnChkIn, LE_RELATIVE_POSITION_RIGHTOF);
    WelcomeScreen_btnChkIn->fn->setImageMargin(WelcomeScreen_btnChkIn, 60);
    WelcomeScreen_btnChkIn->fn->setReleasedEventCallback(WelcomeScreen_btnChkIn, event_WelcomeScreen_btnChkIn_OnReleased);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_btnChkIn);

    WelcomeScreen_ImageWidget_1 = leImageWidget_New();
    WelcomeScreen_ImageWidget_1->fn->setPosition(WelcomeScreen_ImageWidget_1, 247, 654);
    WelcomeScreen_ImageWidget_1->fn->setSize(WelcomeScreen_ImageWidget_1, 793, 143);
    WelcomeScreen_ImageWidget_1->fn->setBackgroundType(WelcomeScreen_ImageWidget_1, LE_WIDGET_BACKGROUND_NONE);
    WelcomeScreen_ImageWidget_1->fn->setBorderType(WelcomeScreen_ImageWidget_1, LE_WIDGET_BORDER_NONE);
    WelcomeScreen_ImageWidget_1->fn->setVAlignment(WelcomeScreen_ImageWidget_1, LE_VALIGN_TOP);
    WelcomeScreen_ImageWidget_1->fn->setImage(WelcomeScreen_ImageWidget_1, (leImage*)&Image0);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_ImageWidget_1);

    WelcomeScreen_LabelWidget_1 = leLabelWidget_New();
    WelcomeScreen_LabelWidget_1->fn->setPosition(WelcomeScreen_LabelWidget_1, 1195, 56);
    WelcomeScreen_LabelWidget_1->fn->setSize(WelcomeScreen_LabelWidget_1, 66, 22);
    WelcomeScreen_LabelWidget_1->fn->setBackgroundType(WelcomeScreen_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    WelcomeScreen_LabelWidget_1->fn->setHAlignment(WelcomeScreen_LabelWidget_1, LE_HALIGN_RIGHT);
    WelcomeScreen_LabelWidget_1->fn->setString(WelcomeScreen_LabelWidget_1, (leString*)&string_strXPLinux);
    root0->fn->addChild(root0, (leWidget*)WelcomeScreen_LabelWidget_1);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    WelcomeScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_WelcomeScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    WelcomeScreen_OnUpdate(); // raise event
}

void screenHide_WelcomeScreen(void)
{
    WelcomeScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    WelcomeScreen_BackgroundPanel = NULL;
    WelcomeScreen_btnChkOut = NULL;
    WelcomeScreen_LabelWidget_0 = NULL;
    WelcomeScreen_LabelWidget_0_0 = NULL;
    WelcomeScreen_LabelWidget_0_1 = NULL;
    WelcomeScreen_imgMGS = NULL;
    WelcomeScreen_btnChkIn = NULL;
    WelcomeScreen_ImageWidget_1 = NULL;
    WelcomeScreen_LabelWidget_1 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_WelcomeScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_WelcomeScreen(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

