#include "gfx/legato/generated/screen/le_gen_screen_SplashScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* SplashScreen_Panel_0;
leWidget* SplashScreen_MchpLogoPanel;
leWidget* SplashScreen_MGSLogoPanel;
leImageWidget* SplashScreen_MicrochipLogo;
leImageWidget* SplashScreen_MGSLogo;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_SplashScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_SplashScreen(void)
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

    SplashScreen_Panel_0 = leWidget_New();
    SplashScreen_Panel_0->fn->setPosition(SplashScreen_Panel_0, 1, 0);
    SplashScreen_Panel_0->fn->setSize(SplashScreen_Panel_0, 800, 480);
    SplashScreen_Panel_0->fn->setScheme(SplashScreen_Panel_0, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)SplashScreen_Panel_0);

    SplashScreen_MchpLogoPanel = leWidget_New();
    SplashScreen_MchpLogoPanel->fn->setPosition(SplashScreen_MchpLogoPanel, 0, 292);
    SplashScreen_MchpLogoPanel->fn->setSize(SplashScreen_MchpLogoPanel, 340, 100);
    SplashScreen_MchpLogoPanel->fn->setScheme(SplashScreen_MchpLogoPanel, &SplashScheme);
    root0->fn->addChild(root0, (leWidget*)SplashScreen_MchpLogoPanel);

    SplashScreen_MicrochipLogo = leImageWidget_New();
    SplashScreen_MicrochipLogo->fn->setPosition(SplashScreen_MicrochipLogo, 75, 21);
    SplashScreen_MicrochipLogo->fn->setSize(SplashScreen_MicrochipLogo, 246, 58);
    SplashScreen_MicrochipLogo->fn->setBackgroundType(SplashScreen_MicrochipLogo, LE_WIDGET_BACKGROUND_NONE);
    SplashScreen_MicrochipLogo->fn->setBorderType(SplashScreen_MicrochipLogo, LE_WIDGET_BORDER_NONE);
    SplashScreen_MicrochipLogo->fn->setImage(SplashScreen_MicrochipLogo, (leImage*)&Image0);
    SplashScreen_MchpLogoPanel->fn->addChild(SplashScreen_MchpLogoPanel, (leWidget*)SplashScreen_MicrochipLogo);

    SplashScreen_MGSLogoPanel = leWidget_New();
    SplashScreen_MGSLogoPanel->fn->setPosition(SplashScreen_MGSLogoPanel, 340, 292);
    SplashScreen_MGSLogoPanel->fn->setSize(SplashScreen_MGSLogoPanel, 265, 100);
    SplashScreen_MGSLogoPanel->fn->setScheme(SplashScreen_MGSLogoPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)SplashScreen_MGSLogoPanel);

    SplashScreen_MGSLogo = leImageWidget_New();
    SplashScreen_MGSLogo->fn->setPosition(SplashScreen_MGSLogo, 18, 28);
    SplashScreen_MGSLogo->fn->setSize(SplashScreen_MGSLogo, 188, 47);
    SplashScreen_MGSLogo->fn->setBackgroundType(SplashScreen_MGSLogo, LE_WIDGET_BACKGROUND_NONE);
    SplashScreen_MGSLogo->fn->setBorderType(SplashScreen_MGSLogo, LE_WIDGET_BORDER_NONE);
    SplashScreen_MGSLogo->fn->setImage(SplashScreen_MGSLogo, (leImage*)&MGSLogoBig);
    SplashScreen_MGSLogoPanel->fn->addChild(SplashScreen_MGSLogoPanel, (leWidget*)SplashScreen_MGSLogo);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    SplashScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_SplashScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    SplashScreen_OnUpdate(); // raise event
}

void screenHide_SplashScreen(void)
{
    SplashScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SplashScreen_Panel_0 = NULL;
    SplashScreen_MchpLogoPanel = NULL;
    SplashScreen_MGSLogoPanel = NULL;
    SplashScreen_MicrochipLogo = NULL;
    SplashScreen_MGSLogo = NULL;


    showing = LE_FALSE;
}

void screenDestroy_SplashScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_SplashScreen(uint32_t lyrIdx)
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

