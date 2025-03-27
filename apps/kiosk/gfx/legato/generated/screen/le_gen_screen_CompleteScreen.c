#include "gfx/legato/generated/screen/le_gen_screen_CompleteScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* CompleteScreen_BackgroundPanel;
leImageWidget* CompleteScreen_imgMGS;
leLabelWidget* CompleteScreen_lblStay;
leLabelWidget* CompleteScreen_lblRoomNumber;
leLabelWidget* CompleteScreen_lblScan;
leLabelWidget* CompleteScreen_lblHope;
leImageWidget* CompleteScreen_imgQRCode;
leLabelWidget* CompleteScreen_LabelWidget_1;
leButtonWidget* CompleteScreen_btnExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_CompleteScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_CompleteScreen(void)
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

    CompleteScreen_BackgroundPanel = leWidget_New();
    CompleteScreen_BackgroundPanel->fn->setPosition(CompleteScreen_BackgroundPanel, 0, 0);
    CompleteScreen_BackgroundPanel->fn->setSize(CompleteScreen_BackgroundPanel, 1280, 800);
    CompleteScreen_BackgroundPanel->fn->setScheme(CompleteScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_BackgroundPanel);

    CompleteScreen_imgMGS = leImageWidget_New();
    CompleteScreen_imgMGS->fn->setPosition(CompleteScreen_imgMGS, 3, 6);
    CompleteScreen_imgMGS->fn->setSize(CompleteScreen_imgMGS, 183, 53);
    CompleteScreen_imgMGS->fn->setBackgroundType(CompleteScreen_imgMGS, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_imgMGS->fn->setBorderType(CompleteScreen_imgMGS, LE_WIDGET_BORDER_NONE);
    CompleteScreen_imgMGS->fn->setImage(CompleteScreen_imgMGS, (leImage*)&MGS_40h);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_imgMGS);

    CompleteScreen_lblStay = leLabelWidget_New();
    CompleteScreen_lblStay->fn->setPosition(CompleteScreen_lblStay, 327, 101);
    CompleteScreen_lblStay->fn->setSize(CompleteScreen_lblStay, 630, 63);
    CompleteScreen_lblStay->fn->setScheme(CompleteScreen_lblStay, &KioskSchemeText);
    CompleteScreen_lblStay->fn->setBackgroundType(CompleteScreen_lblStay, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_lblStay->fn->setHAlignment(CompleteScreen_lblStay, LE_HALIGN_CENTER);
    CompleteScreen_lblStay->fn->setString(CompleteScreen_lblStay, (leString*)&string_strYouStay);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_lblStay);

    CompleteScreen_lblRoomNumber = leLabelWidget_New();
    CompleteScreen_lblRoomNumber->fn->setPosition(CompleteScreen_lblRoomNumber, 541, 184);
    CompleteScreen_lblRoomNumber->fn->setSize(CompleteScreen_lblRoomNumber, 200, 112);
    CompleteScreen_lblRoomNumber->fn->setScheme(CompleteScreen_lblRoomNumber, &KioskSchemeText);
    CompleteScreen_lblRoomNumber->fn->setBackgroundType(CompleteScreen_lblRoomNumber, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_lblRoomNumber->fn->setHAlignment(CompleteScreen_lblRoomNumber, LE_HALIGN_CENTER);
    CompleteScreen_lblRoomNumber->fn->setString(CompleteScreen_lblRoomNumber, (leString*)&string_strRoomNumDefault);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_lblRoomNumber);

    CompleteScreen_lblScan = leLabelWidget_New();
    CompleteScreen_lblScan->fn->setPosition(CompleteScreen_lblScan, 271, 316);
    CompleteScreen_lblScan->fn->setSize(CompleteScreen_lblScan, 735, 112);
    CompleteScreen_lblScan->fn->setScheme(CompleteScreen_lblScan, &KioskSchemeText);
    CompleteScreen_lblScan->fn->setBackgroundType(CompleteScreen_lblScan, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_lblScan->fn->setHAlignment(CompleteScreen_lblScan, LE_HALIGN_CENTER);
    CompleteScreen_lblScan->fn->setString(CompleteScreen_lblScan, (leString*)&string_strScan);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_lblScan);

    CompleteScreen_lblHope = leLabelWidget_New();
    CompleteScreen_lblHope->fn->setPosition(CompleteScreen_lblHope, 299, 697);
    CompleteScreen_lblHope->fn->setSize(CompleteScreen_lblHope, 693, 50);
    CompleteScreen_lblHope->fn->setScheme(CompleteScreen_lblHope, &KioskSchemeText);
    CompleteScreen_lblHope->fn->setBackgroundType(CompleteScreen_lblHope, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_lblHope->fn->setHAlignment(CompleteScreen_lblHope, LE_HALIGN_CENTER);
    CompleteScreen_lblHope->fn->setString(CompleteScreen_lblHope, (leString*)&string_strHope);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_lblHope);

    CompleteScreen_imgQRCode = leImageWidget_New();
    CompleteScreen_imgQRCode->fn->setPosition(CompleteScreen_imgQRCode, 550, 467);
    CompleteScreen_imgQRCode->fn->setSize(CompleteScreen_imgQRCode, 190, 190);
    CompleteScreen_imgQRCode->fn->setScheme(CompleteScreen_imgQRCode, &WhiteScheme);
    CompleteScreen_imgQRCode->fn->setBorderType(CompleteScreen_imgQRCode, LE_WIDGET_BORDER_NONE);
    CompleteScreen_imgQRCode->fn->setImage(CompleteScreen_imgQRCode, (leImage*)&qrcode190);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_imgQRCode);

    CompleteScreen_LabelWidget_1 = leLabelWidget_New();
    CompleteScreen_LabelWidget_1->fn->setPosition(CompleteScreen_LabelWidget_1, 890, 0);
    CompleteScreen_LabelWidget_1->fn->setSize(CompleteScreen_LabelWidget_1, 377, 70);
    CompleteScreen_LabelWidget_1->fn->setScheme(CompleteScreen_LabelWidget_1, &KioskSchemeText);
    CompleteScreen_LabelWidget_1->fn->setBackgroundType(CompleteScreen_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_LabelWidget_1->fn->setString(CompleteScreen_LabelWidget_1, (leString*)&string_strHotelNameSmall);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_LabelWidget_1);

    CompleteScreen_btnExit = leButtonWidget_New();
    CompleteScreen_btnExit->fn->setPosition(CompleteScreen_btnExit, 1026, 97);
    CompleteScreen_btnExit->fn->setSize(CompleteScreen_btnExit, 200, 70);
    CompleteScreen_btnExit->fn->setBackgroundType(CompleteScreen_btnExit, LE_WIDGET_BACKGROUND_NONE);
    CompleteScreen_btnExit->fn->setBorderType(CompleteScreen_btnExit, LE_WIDGET_BORDER_NONE);
    CompleteScreen_btnExit->fn->setPressedImage(CompleteScreen_btnExit, (leImage*)&imgBackWhite);
    CompleteScreen_btnExit->fn->setReleasedImage(CompleteScreen_btnExit, (leImage*)&imgBackWhite);
    CompleteScreen_btnExit->fn->setReleasedEventCallback(CompleteScreen_btnExit, event_CompleteScreen_btnExit_OnReleased);
    root0->fn->addChild(root0, (leWidget*)CompleteScreen_btnExit);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    CompleteScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_CompleteScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    CompleteScreen_OnUpdate(); // raise event
}

void screenHide_CompleteScreen(void)
{
    CompleteScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    CompleteScreen_BackgroundPanel = NULL;
    CompleteScreen_imgMGS = NULL;
    CompleteScreen_lblStay = NULL;
    CompleteScreen_lblRoomNumber = NULL;
    CompleteScreen_lblScan = NULL;
    CompleteScreen_lblHope = NULL;
    CompleteScreen_imgQRCode = NULL;
    CompleteScreen_LabelWidget_1 = NULL;
    CompleteScreen_btnExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_CompleteScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_CompleteScreen(uint32_t lyrIdx)
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

