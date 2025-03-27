#include "gfx/legato/generated/screen/le_gen_screen_SplashScreen.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leWidget* SplashScreen_panel_Background;
leImageWidget* SplashScreen_image_MchpLogo;
leImageWidget* SplashScreen_image_progressbarBase;
leCircleWidget* SplashScreen_circle_progressbarStart;
leRectangleWidget* SplashScreen_rect_progressbarSlide;
leCircleWidget* SplashScreen_circle_progressbarEnd;

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
    root0->fn->setSize(root0, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    SplashScreen_panel_Background = leWidget_New();
    SplashScreen_panel_Background->fn->setPosition(SplashScreen_panel_Background, 0, 0);
    SplashScreen_panel_Background->fn->setSize(SplashScreen_panel_Background, 1280, 800);
    SplashScreen_panel_Background->fn->setScheme(SplashScreen_panel_Background, &DarkScheme);
    root0->fn->addChild(root0, (leWidget*)SplashScreen_panel_Background);

    SplashScreen_image_MchpLogo = leImageWidget_New();
    SplashScreen_image_MchpLogo->fn->setPosition(SplashScreen_image_MchpLogo, 526, 314);
    SplashScreen_image_MchpLogo->fn->setSize(SplashScreen_image_MchpLogo, 229, 120);
    SplashScreen_image_MchpLogo->fn->setBackgroundType(SplashScreen_image_MchpLogo, LE_WIDGET_BACKGROUND_NONE);
    SplashScreen_image_MchpLogo->fn->setBorderType(SplashScreen_image_MchpLogo, LE_WIDGET_BORDER_NONE);
    SplashScreen_image_MchpLogo->fn->setImage(SplashScreen_image_MchpLogo, (leImage*)&MicrochipLogo);
    SplashScreen_panel_Background->fn->addChild(SplashScreen_panel_Background, (leWidget*)SplashScreen_image_MchpLogo);

    SplashScreen_image_progressbarBase = leImageWidget_New();
    SplashScreen_image_progressbarBase->fn->setPosition(SplashScreen_image_progressbarBase, 440, 482);
    SplashScreen_image_progressbarBase->fn->setSize(SplashScreen_image_progressbarBase, 408, 8);
    SplashScreen_image_progressbarBase->fn->setBackgroundType(SplashScreen_image_progressbarBase, LE_WIDGET_BACKGROUND_NONE);
    SplashScreen_image_progressbarBase->fn->setBorderType(SplashScreen_image_progressbarBase, LE_WIDGET_BORDER_NONE);
    SplashScreen_image_progressbarBase->fn->setImage(SplashScreen_image_progressbarBase, (leImage*)&progressBarBase);
    SplashScreen_panel_Background->fn->addChild(SplashScreen_panel_Background, (leWidget*)SplashScreen_image_progressbarBase);

    SplashScreen_circle_progressbarStart = leCircleWidget_New();
    SplashScreen_circle_progressbarStart->fn->setPosition(SplashScreen_circle_progressbarStart, 0, 0);
    SplashScreen_circle_progressbarStart->fn->setSize(SplashScreen_circle_progressbarStart, 12, 12);
    SplashScreen_circle_progressbarStart->fn->setScheme(SplashScreen_circle_progressbarStart, &BlueScheme);
    SplashScreen_circle_progressbarStart->fn->setHAlignment(SplashScreen_circle_progressbarStart, LE_HALIGN_LEFT);
    SplashScreen_circle_progressbarStart->fn->setVAlignment(SplashScreen_circle_progressbarStart, LE_VALIGN_TOP);
    SplashScreen_circle_progressbarStart->fn->setMargins(SplashScreen_circle_progressbarStart, 0, 0, 0, 0);
    SplashScreen_circle_progressbarStart->fn->setOriginX(SplashScreen_circle_progressbarStart, -2);
    SplashScreen_circle_progressbarStart->fn->setOriginY(SplashScreen_circle_progressbarStart, -2);
    SplashScreen_circle_progressbarStart->fn->setRadius(SplashScreen_circle_progressbarStart, 3);
    SplashScreen_circle_progressbarStart->fn->setThickness(SplashScreen_circle_progressbarStart, 3);
    SplashScreen_circle_progressbarStart->fn->setFilled(SplashScreen_circle_progressbarStart, LE_TRUE);
    SplashScreen_image_progressbarBase->fn->addChild(SplashScreen_image_progressbarBase, (leWidget*)SplashScreen_circle_progressbarStart);

    SplashScreen_rect_progressbarSlide = leRectangleWidget_New();
    SplashScreen_rect_progressbarSlide->fn->setPosition(SplashScreen_rect_progressbarSlide, 2, 0);
    SplashScreen_rect_progressbarSlide->fn->setSize(SplashScreen_rect_progressbarSlide, 7, 8);
    SplashScreen_rect_progressbarSlide->fn->setScheme(SplashScreen_rect_progressbarSlide, &BlueScheme);
    SplashScreen_rect_progressbarSlide->fn->setBorderType(SplashScreen_rect_progressbarSlide, LE_WIDGET_BORDER_NONE);
    SplashScreen_rect_progressbarSlide->fn->setThickness(SplashScreen_rect_progressbarSlide, 2);
    SplashScreen_image_progressbarBase->fn->addChild(SplashScreen_image_progressbarBase, (leWidget*)SplashScreen_rect_progressbarSlide);

    SplashScreen_circle_progressbarEnd = leCircleWidget_New();
    SplashScreen_circle_progressbarEnd->fn->setPosition(SplashScreen_circle_progressbarEnd, 7, -2);
    SplashScreen_circle_progressbarEnd->fn->setSize(SplashScreen_circle_progressbarEnd, 12, 12);
    SplashScreen_circle_progressbarEnd->fn->setScheme(SplashScreen_circle_progressbarEnd, &BlueScheme);
    SplashScreen_circle_progressbarEnd->fn->setOriginX(SplashScreen_circle_progressbarEnd, -1);
    SplashScreen_circle_progressbarEnd->fn->setRadius(SplashScreen_circle_progressbarEnd, 3);
    SplashScreen_circle_progressbarEnd->fn->setThickness(SplashScreen_circle_progressbarEnd, 3);
    SplashScreen_circle_progressbarEnd->fn->setFilled(SplashScreen_circle_progressbarEnd, LE_TRUE);
    SplashScreen_image_progressbarBase->fn->addChild(SplashScreen_image_progressbarBase, (leWidget*)SplashScreen_circle_progressbarEnd);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    SplashScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_SplashScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);

    SplashScreen_OnUpdate(); // raise event
}

void screenHide_SplashScreen(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SplashScreen_panel_Background = NULL;
    SplashScreen_image_MchpLogo = NULL;
    SplashScreen_image_progressbarBase = NULL;
    SplashScreen_circle_progressbarStart = NULL;
    SplashScreen_rect_progressbarSlide = NULL;
    SplashScreen_circle_progressbarEnd = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;


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

