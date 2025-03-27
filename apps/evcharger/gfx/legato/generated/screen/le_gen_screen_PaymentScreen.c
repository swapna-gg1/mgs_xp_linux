#include "gfx/legato/generated/screen/le_gen_screen_PaymentScreen.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leWidget* PaymentScreen_BackgroundPanel;
leImageWidget* PaymentScreen_ImageWidget_0;
leImageWidget* PaymentScreen_ImageWidget_0_0;
leLabelWidget* PaymentScreen_LabelWidget_0;
leWidget* PaymentScreen_BackgroundPanel_0;
leButtonWidget* PaymentScreen_buttonPayRFID;
leButtonWidget* PaymentScreen_buttonPayCredit;
leButtonWidget* PaymentScreen_buttonPayBrowser;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_PaymentScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_PaymentScreen(void)
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

    PaymentScreen_BackgroundPanel = leWidget_New();
    PaymentScreen_BackgroundPanel->fn->setPosition(PaymentScreen_BackgroundPanel, 0, 0);
    PaymentScreen_BackgroundPanel->fn->setSize(PaymentScreen_BackgroundPanel, 800, 480);
    PaymentScreen_BackgroundPanel->fn->setScheme(PaymentScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_BackgroundPanel);

    PaymentScreen_ImageWidget_0 = leImageWidget_New();
    PaymentScreen_ImageWidget_0->fn->setPosition(PaymentScreen_ImageWidget_0, 5, 5);
    PaymentScreen_ImageWidget_0->fn->setSize(PaymentScreen_ImageWidget_0, 124, 41);
    PaymentScreen_ImageWidget_0->fn->setBackgroundType(PaymentScreen_ImageWidget_0, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_ImageWidget_0->fn->setBorderType(PaymentScreen_ImageWidget_0, LE_WIDGET_BORDER_NONE);
    PaymentScreen_ImageWidget_0->fn->setImage(PaymentScreen_ImageWidget_0, (leImage*)&MGS_Logo);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_ImageWidget_0);

    PaymentScreen_ImageWidget_0_0 = leImageWidget_New();
    PaymentScreen_ImageWidget_0_0->fn->setPosition(PaymentScreen_ImageWidget_0_0, 518, 100);
    PaymentScreen_ImageWidget_0_0->fn->setSize(PaymentScreen_ImageWidget_0_0, 283, 380);
    PaymentScreen_ImageWidget_0_0->fn->setBackgroundType(PaymentScreen_ImageWidget_0_0, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_ImageWidget_0_0->fn->setBorderType(PaymentScreen_ImageWidget_0_0, LE_WIDGET_BORDER_NONE);
    PaymentScreen_ImageWidget_0_0->fn->setImage(PaymentScreen_ImageWidget_0_0, (leImage*)&CarImage);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_ImageWidget_0_0);

    PaymentScreen_LabelWidget_0 = leLabelWidget_New();
    PaymentScreen_LabelWidget_0->fn->setPosition(PaymentScreen_LabelWidget_0, 33, 126);
    PaymentScreen_LabelWidget_0->fn->setSize(PaymentScreen_LabelWidget_0, 472, 113);
    PaymentScreen_LabelWidget_0->fn->setScheme(PaymentScreen_LabelWidget_0, &WhiteScheme);
    PaymentScreen_LabelWidget_0->fn->setBackgroundType(PaymentScreen_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_LabelWidget_0->fn->setString(PaymentScreen_LabelWidget_0, (leString*)&string_PaymentTitle);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_LabelWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 800, 480);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    PaymentScreen_BackgroundPanel_0 = leWidget_New();
    PaymentScreen_BackgroundPanel_0->fn->setPosition(PaymentScreen_BackgroundPanel_0, 0, 0);
    PaymentScreen_BackgroundPanel_0->fn->setSize(PaymentScreen_BackgroundPanel_0, 800, 480);
    PaymentScreen_BackgroundPanel_0->fn->setEnabled(PaymentScreen_BackgroundPanel_0, LE_FALSE);
    PaymentScreen_BackgroundPanel_0->fn->setScheme(PaymentScreen_BackgroundPanel_0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)PaymentScreen_BackgroundPanel_0);

    PaymentScreen_buttonPayRFID = leButtonWidget_New();
    PaymentScreen_buttonPayRFID->fn->setPosition(PaymentScreen_buttonPayRFID, 343, 270);
    PaymentScreen_buttonPayRFID->fn->setSize(PaymentScreen_buttonPayRFID, 120, 120);
    PaymentScreen_buttonPayRFID->fn->setScheme(PaymentScreen_buttonPayRFID, &WhiteScheme);
    PaymentScreen_buttonPayRFID->fn->setBackgroundType(PaymentScreen_buttonPayRFID, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_buttonPayRFID->fn->setBorderType(PaymentScreen_buttonPayRFID, LE_WIDGET_BORDER_NONE);
    PaymentScreen_buttonPayRFID->fn->setString(PaymentScreen_buttonPayRFID, (leString*)&string_RFIDCard);
    PaymentScreen_buttonPayRFID->fn->setPressedImage(PaymentScreen_buttonPayRFID, (leImage*)&RFID);
    PaymentScreen_buttonPayRFID->fn->setReleasedImage(PaymentScreen_buttonPayRFID, (leImage*)&RFID);
    PaymentScreen_buttonPayRFID->fn->setImagePosition(PaymentScreen_buttonPayRFID, LE_RELATIVE_POSITION_BELOW);
    PaymentScreen_buttonPayRFID->fn->setImageMargin(PaymentScreen_buttonPayRFID, 20);
    PaymentScreen_buttonPayRFID->fn->setReleasedEventCallback(PaymentScreen_buttonPayRFID, event_PaymentScreen_buttonPayRFID_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PaymentScreen_buttonPayRFID);

    PaymentScreen_buttonPayCredit = leButtonWidget_New();
    PaymentScreen_buttonPayCredit->fn->setPosition(PaymentScreen_buttonPayCredit, 199, 270);
    PaymentScreen_buttonPayCredit->fn->setSize(PaymentScreen_buttonPayCredit, 120, 120);
    PaymentScreen_buttonPayCredit->fn->setScheme(PaymentScreen_buttonPayCredit, &WhiteScheme);
    PaymentScreen_buttonPayCredit->fn->setBackgroundType(PaymentScreen_buttonPayCredit, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_buttonPayCredit->fn->setBorderType(PaymentScreen_buttonPayCredit, LE_WIDGET_BORDER_NONE);
    PaymentScreen_buttonPayCredit->fn->setString(PaymentScreen_buttonPayCredit, (leString*)&string_PayCC);
    PaymentScreen_buttonPayCredit->fn->setPressedImage(PaymentScreen_buttonPayCredit, (leImage*)&CreditCard);
    PaymentScreen_buttonPayCredit->fn->setReleasedImage(PaymentScreen_buttonPayCredit, (leImage*)&CreditCard);
    PaymentScreen_buttonPayCredit->fn->setImagePosition(PaymentScreen_buttonPayCredit, LE_RELATIVE_POSITION_BELOW);
    PaymentScreen_buttonPayCredit->fn->setImageMargin(PaymentScreen_buttonPayCredit, 20);
    PaymentScreen_buttonPayCredit->fn->setReleasedEventCallback(PaymentScreen_buttonPayCredit, event_PaymentScreen_buttonPayCredit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PaymentScreen_buttonPayCredit);

    PaymentScreen_buttonPayBrowser = leButtonWidget_New();
    PaymentScreen_buttonPayBrowser->fn->setPosition(PaymentScreen_buttonPayBrowser, 38, 270);
    PaymentScreen_buttonPayBrowser->fn->setSize(PaymentScreen_buttonPayBrowser, 120, 120);
    PaymentScreen_buttonPayBrowser->fn->setScheme(PaymentScreen_buttonPayBrowser, &WhiteScheme);
    PaymentScreen_buttonPayBrowser->fn->setBackgroundType(PaymentScreen_buttonPayBrowser, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_buttonPayBrowser->fn->setBorderType(PaymentScreen_buttonPayBrowser, LE_WIDGET_BORDER_NONE);
    PaymentScreen_buttonPayBrowser->fn->setString(PaymentScreen_buttonPayBrowser, (leString*)&string_PayInBrowser);
    PaymentScreen_buttonPayBrowser->fn->setPressedImage(PaymentScreen_buttonPayBrowser, (leImage*)&QRCode);
    PaymentScreen_buttonPayBrowser->fn->setReleasedImage(PaymentScreen_buttonPayBrowser, (leImage*)&QRCode);
    PaymentScreen_buttonPayBrowser->fn->setImagePosition(PaymentScreen_buttonPayBrowser, LE_RELATIVE_POSITION_BELOW);
    PaymentScreen_buttonPayBrowser->fn->setImageMargin(PaymentScreen_buttonPayBrowser, 20);
    PaymentScreen_buttonPayBrowser->fn->setReleasedEventCallback(PaymentScreen_buttonPayBrowser, event_PaymentScreen_buttonPayBrowser_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PaymentScreen_buttonPayBrowser);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    PaymentScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_PaymentScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);
}

void screenHide_PaymentScreen(void)
{
    PaymentScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    PaymentScreen_BackgroundPanel = NULL;
    PaymentScreen_ImageWidget_0 = NULL;
    PaymentScreen_ImageWidget_0_0 = NULL;
    PaymentScreen_LabelWidget_0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    PaymentScreen_BackgroundPanel_0 = NULL;
    PaymentScreen_buttonPayRFID = NULL;
    PaymentScreen_buttonPayCredit = NULL;
    PaymentScreen_buttonPayBrowser = NULL;


    showing = LE_FALSE;
}

void screenDestroy_PaymentScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_PaymentScreen(uint32_t lyrIdx)
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

