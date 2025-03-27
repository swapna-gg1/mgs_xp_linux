#include "gfx/legato/generated/screen/le_gen_screen_LandingPage.h"

// screen member widget declarations
static leWidget* root0;

leWidget* LandingPage_Landing_Screen;
leButtonWidget* LandingPage_btnPower;
leButtonWidget* LandingPage_btnAdmin;
leButtonWidget* LandingPage_btnOperator;
leImageWidget* LandingPage_imgMchpLogo;
leImageWidget* LandingPage_imgPM5Logo;
leImageWidget* LandingPage_ImageWidget_0;
leLabelWidget* LandingPage_LabelWidget_0;
leImageWidget* LandingPage_ImageWidget_0_0;
leLabelWidget* LandingPage_LabelWidget_0_0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_LandingPage(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_LandingPage(void)
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

    LandingPage_Landing_Screen = leWidget_New();
    LandingPage_Landing_Screen->fn->setPosition(LandingPage_Landing_Screen, 0, 0);
    LandingPage_Landing_Screen->fn->setSize(LandingPage_Landing_Screen, 800, 480);
    LandingPage_Landing_Screen->fn->setScheme(LandingPage_Landing_Screen, &PM5Scheme);
    root0->fn->addChild(root0, (leWidget*)LandingPage_Landing_Screen);

    LandingPage_imgMchpLogo = leImageWidget_New();
    LandingPage_imgMchpLogo->fn->setPosition(LandingPage_imgMchpLogo, 19, 24);
    LandingPage_imgMchpLogo->fn->setSize(LandingPage_imgMchpLogo, 50, 26);
    LandingPage_imgMchpLogo->fn->setBackgroundType(LandingPage_imgMchpLogo, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_imgMchpLogo->fn->setBorderType(LandingPage_imgMchpLogo, LE_WIDGET_BORDER_NONE);
    LandingPage_imgMchpLogo->fn->setImage(LandingPage_imgMchpLogo, (leImage*)&imgMchp);
    LandingPage_Landing_Screen->fn->addChild(LandingPage_Landing_Screen, (leWidget*)LandingPage_imgMchpLogo);

    LandingPage_imgPM5Logo = leImageWidget_New();
    LandingPage_imgPM5Logo->fn->setPosition(LandingPage_imgPM5Logo, 306, 77);
    LandingPage_imgPM5Logo->fn->setSize(LandingPage_imgPM5Logo, 188, 179);
    LandingPage_imgPM5Logo->fn->setBackgroundType(LandingPage_imgPM5Logo, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_imgPM5Logo->fn->setBorderType(LandingPage_imgPM5Logo, LE_WIDGET_BORDER_NONE);
    LandingPage_imgPM5Logo->fn->setImage(LandingPage_imgPM5Logo, (leImage*)&imgPM5Logo);
    LandingPage_Landing_Screen->fn->addChild(LandingPage_Landing_Screen, (leWidget*)LandingPage_imgPM5Logo);

    LandingPage_btnPower = leButtonWidget_New();
    LandingPage_btnPower->fn->setPosition(LandingPage_btnPower, 0, 390);
    LandingPage_btnPower->fn->setSize(LandingPage_btnPower, 90, 90);
    LandingPage_btnPower->fn->setBackgroundType(LandingPage_btnPower, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_btnPower->fn->setBorderType(LandingPage_btnPower, LE_WIDGET_BORDER_NONE);
    LandingPage_btnPower->fn->setPressedImage(LandingPage_btnPower, (leImage*)&imgPower);
    LandingPage_btnPower->fn->setReleasedImage(LandingPage_btnPower, (leImage*)&imgPower);
    root0->fn->addChild(root0, (leWidget*)LandingPage_btnPower);

    LandingPage_btnAdmin = leButtonWidget_New();
    LandingPage_btnAdmin->fn->setPosition(LandingPage_btnAdmin, 156, 312);
    LandingPage_btnAdmin->fn->setSize(LandingPage_btnAdmin, 240, 110);
    LandingPage_btnAdmin->fn->setBackgroundType(LandingPage_btnAdmin, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_btnAdmin->fn->setBorderType(LandingPage_btnAdmin, LE_WIDGET_BORDER_NONE);
    LandingPage_btnAdmin->fn->setPressedImage(LandingPage_btnAdmin, (leImage*)&imgBigButton);
    LandingPage_btnAdmin->fn->setReleasedImage(LandingPage_btnAdmin, (leImage*)&imgBigButton);
    LandingPage_btnAdmin->fn->setImagePosition(LandingPage_btnAdmin, LE_RELATIVE_POSITION_BEHIND);
    LandingPage_btnAdmin->fn->setReleasedEventCallback(LandingPage_btnAdmin, event_LandingPage_btnAdmin_OnReleased);
    root0->fn->addChild(root0, (leWidget*)LandingPage_btnAdmin);

    LandingPage_ImageWidget_0 = leImageWidget_New();
    LandingPage_ImageWidget_0->fn->setPosition(LandingPage_ImageWidget_0, 140, 38);
    LandingPage_ImageWidget_0->fn->setSize(LandingPage_ImageWidget_0, 36, 36);
    LandingPage_ImageWidget_0->fn->setBackgroundType(LandingPage_ImageWidget_0, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_ImageWidget_0->fn->setBorderType(LandingPage_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    LandingPage_ImageWidget_0->fn->setImage(LandingPage_ImageWidget_0, (leImage*)&imgAdmin);
    LandingPage_btnAdmin->fn->addChild(LandingPage_btnAdmin, (leWidget*)LandingPage_ImageWidget_0);

    LandingPage_LabelWidget_0 = leLabelWidget_New();
    LandingPage_LabelWidget_0->fn->setPosition(LandingPage_LabelWidget_0, 43, 43);
    LandingPage_LabelWidget_0->fn->setBackgroundType(LandingPage_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_LabelWidget_0->fn->setHAlignment(LandingPage_LabelWidget_0, LE_HALIGN_CENTER);
    LandingPage_LabelWidget_0->fn->setString(LandingPage_LabelWidget_0, (leString*)&string_strAdmin);
    LandingPage_btnAdmin->fn->addChild(LandingPage_btnAdmin, (leWidget*)LandingPage_LabelWidget_0);

    LandingPage_btnOperator = leButtonWidget_New();
    LandingPage_btnOperator->fn->setPosition(LandingPage_btnOperator, 406, 312);
    LandingPage_btnOperator->fn->setSize(LandingPage_btnOperator, 240, 110);
    LandingPage_btnOperator->fn->setBackgroundType(LandingPage_btnOperator, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_btnOperator->fn->setBorderType(LandingPage_btnOperator, LE_WIDGET_BORDER_NONE);
    LandingPage_btnOperator->fn->setPressedImage(LandingPage_btnOperator, (leImage*)&imgBigButton);
    LandingPage_btnOperator->fn->setReleasedImage(LandingPage_btnOperator, (leImage*)&imgBigButton);
    LandingPage_btnOperator->fn->setImagePosition(LandingPage_btnOperator, LE_RELATIVE_POSITION_BEHIND);
    LandingPage_btnOperator->fn->setReleasedEventCallback(LandingPage_btnOperator, event_LandingPage_btnOperator_OnReleased);
    root0->fn->addChild(root0, (leWidget*)LandingPage_btnOperator);

    LandingPage_ImageWidget_0_0 = leImageWidget_New();
    LandingPage_ImageWidget_0_0->fn->setPosition(LandingPage_ImageWidget_0_0, 148, 37);
    LandingPage_ImageWidget_0_0->fn->setSize(LandingPage_ImageWidget_0_0, 36, 36);
    LandingPage_ImageWidget_0_0->fn->setBackgroundType(LandingPage_ImageWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_ImageWidget_0_0->fn->setBorderType(LandingPage_ImageWidget_0_0, LE_WIDGET_BORDER_NONE);
    LandingPage_ImageWidget_0_0->fn->setImage(LandingPage_ImageWidget_0_0, (leImage*)&imgOperator);
    LandingPage_btnOperator->fn->addChild(LandingPage_btnOperator, (leWidget*)LandingPage_ImageWidget_0_0);

    LandingPage_LabelWidget_0_0 = leLabelWidget_New();
    LandingPage_LabelWidget_0_0->fn->setPosition(LandingPage_LabelWidget_0_0, 43, 43);
    LandingPage_LabelWidget_0_0->fn->setBackgroundType(LandingPage_LabelWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    LandingPage_LabelWidget_0_0->fn->setHAlignment(LandingPage_LabelWidget_0_0, LE_HALIGN_CENTER);
    LandingPage_LabelWidget_0_0->fn->setString(LandingPage_LabelWidget_0_0, (leString*)&string_strOperator);
    LandingPage_btnOperator->fn->addChild(LandingPage_btnOperator, (leWidget*)LandingPage_LabelWidget_0_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    LandingPage_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_LandingPage(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    LandingPage_OnUpdate(); // raise event
}

void screenHide_LandingPage(void)
{
    LandingPage_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    LandingPage_Landing_Screen = NULL;
    LandingPage_btnPower = NULL;
    LandingPage_btnAdmin = NULL;
    LandingPage_btnOperator = NULL;
    LandingPage_imgMchpLogo = NULL;
    LandingPage_imgPM5Logo = NULL;
    LandingPage_ImageWidget_0 = NULL;
    LandingPage_LabelWidget_0 = NULL;
    LandingPage_ImageWidget_0_0 = NULL;
    LandingPage_LabelWidget_0_0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_LandingPage(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_LandingPage(uint32_t lyrIdx)
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

