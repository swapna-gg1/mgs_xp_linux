#include "gfx/legato/generated/screen/le_gen_screen_DetailsScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* DetailsScreen_BackgroundPanel;
leButtonWidget* DetailsScreen_btnBack;
leImageWidget* DetailsScreen_imgMGS;
leLabelWidget* DetailsScreen_LabelWidget_2;
leLabelWidget* DetailsScreen_LabelWidget_1;
leLabelWidget* DetailsScreen_LabelWidget_0;
leImageWidget* DetailsScreen_ImageWidget_1_0;
leWidget* DetailsScreen_pnlRoomInfo;
leWidget* DetailsScreen_pnlChargesInfo;
leWidget* DetailsScreen_pnlUpgrades;
leImageWidget* DetailsScreen_ImageWidget_2;
leButtonWidget* DetailsScreen_btnContinue;
leWidget* DetailsScreen_pnlError;
leLabelWidget* DetailsScreen_lblBedDetails;
leLabelWidget* DetailsScreen_lblStayDates;
leLabelWidget* DetailsScreen_lblRoomInfo;
leLabelWidget* DetailsScreen_lblSummaryOfCharges;
leLabelWidget* DetailsScreen_lblTotal;
leLabelWidget* DetailsScreen_lblAmount;
leLabelWidget* DetailsScreen_lblBookingPaid;
leImageWidget* DetailsScreen_imgBalconyView;
leImageWidget* DetailsScreen_imgBreakfast;
leImageWidget* DetailsScreen_imgLateCheckout;
leLabelWidget* DetailsScreen_lblUpgrades;
leButtonWidget* DetailsScreen_btnBalconyView;
leLabelWidget* DetailsScreen_LabelWidget_3;
leLabelWidget* DetailsScreen_LabelWidget_3_0;
leButtonWidget* DetailsScreen_btnBreakfast;
leLabelWidget* DetailsScreen_LabelWidget_3_1;
leLabelWidget* DetailsScreen_LabelWidget_3_0_0;
leButtonWidget* DetailsScreen_btnLateCheckout;
leLabelWidget* DetailsScreen_LabelWidget_3_1_0;
leLabelWidget* DetailsScreen_LabelWidget_3_0_0_0;
leLabelWidget* DetailsScreen_LabelWidget_2_0;
leLabelWidget* DetailsScreen_LabelWidget_4_0;
leButtonWidget* DetailsScreen_btnErrorBack_0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_DetailsScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_DetailsScreen(void)
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

    DetailsScreen_BackgroundPanel = leWidget_New();
    DetailsScreen_BackgroundPanel->fn->setPosition(DetailsScreen_BackgroundPanel, 0, 0);
    DetailsScreen_BackgroundPanel->fn->setSize(DetailsScreen_BackgroundPanel, 1280, 800);
    DetailsScreen_BackgroundPanel->fn->setScheme(DetailsScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_BackgroundPanel);

    DetailsScreen_btnBack = leButtonWidget_New();
    DetailsScreen_btnBack->fn->setPosition(DetailsScreen_btnBack, 1026, 97);
    DetailsScreen_btnBack->fn->setSize(DetailsScreen_btnBack, 200, 70);
    DetailsScreen_btnBack->fn->setBackgroundType(DetailsScreen_btnBack, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_btnBack->fn->setBorderType(DetailsScreen_btnBack, LE_WIDGET_BORDER_NONE);
    DetailsScreen_btnBack->fn->setPressedImage(DetailsScreen_btnBack, (leImage*)&imgBackWhite);
    DetailsScreen_btnBack->fn->setReleasedImage(DetailsScreen_btnBack, (leImage*)&imgBackWhite);
    DetailsScreen_btnBack->fn->setReleasedEventCallback(DetailsScreen_btnBack, event_DetailsScreen_btnBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_btnBack);

    DetailsScreen_imgMGS = leImageWidget_New();
    DetailsScreen_imgMGS->fn->setPosition(DetailsScreen_imgMGS, 3, 6);
    DetailsScreen_imgMGS->fn->setSize(DetailsScreen_imgMGS, 183, 53);
    DetailsScreen_imgMGS->fn->setBackgroundType(DetailsScreen_imgMGS, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_imgMGS->fn->setBorderType(DetailsScreen_imgMGS, LE_WIDGET_BORDER_NONE);
    DetailsScreen_imgMGS->fn->setImage(DetailsScreen_imgMGS, (leImage*)&MGS_40h);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_imgMGS);

    DetailsScreen_LabelWidget_2 = leLabelWidget_New();
    DetailsScreen_LabelWidget_2->fn->setPosition(DetailsScreen_LabelWidget_2, 50, 87);
    DetailsScreen_LabelWidget_2->fn->setSize(DetailsScreen_LabelWidget_2, 342, 67);
    DetailsScreen_LabelWidget_2->fn->setScheme(DetailsScreen_LabelWidget_2, &KioskSchemeText);
    DetailsScreen_LabelWidget_2->fn->setBackgroundType(DetailsScreen_LabelWidget_2, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_2->fn->setString(DetailsScreen_LabelWidget_2, (leString*)&string_strStayDetails);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_LabelWidget_2);

    DetailsScreen_LabelWidget_1 = leLabelWidget_New();
    DetailsScreen_LabelWidget_1->fn->setPosition(DetailsScreen_LabelWidget_1, 890, 0);
    DetailsScreen_LabelWidget_1->fn->setSize(DetailsScreen_LabelWidget_1, 377, 70);
    DetailsScreen_LabelWidget_1->fn->setScheme(DetailsScreen_LabelWidget_1, &KioskSchemeText);
    DetailsScreen_LabelWidget_1->fn->setBackgroundType(DetailsScreen_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_1->fn->setString(DetailsScreen_LabelWidget_1, (leString*)&string_strHotelNameSmall);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_LabelWidget_1);

    DetailsScreen_LabelWidget_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_0->fn->setPosition(DetailsScreen_LabelWidget_0, 50, 161);
    DetailsScreen_LabelWidget_0->fn->setSize(DetailsScreen_LabelWidget_0, 795, 49);
    DetailsScreen_LabelWidget_0->fn->setScheme(DetailsScreen_LabelWidget_0, &BlackScheme);
    DetailsScreen_LabelWidget_0->fn->setBackgroundType(DetailsScreen_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_0->fn->setString(DetailsScreen_LabelWidget_0, (leString*)&string_strDetailsInfo);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_LabelWidget_0);

    DetailsScreen_ImageWidget_1_0 = leImageWidget_New();
    DetailsScreen_ImageWidget_1_0->fn->setPosition(DetailsScreen_ImageWidget_1_0, 1342, 634);
    DetailsScreen_ImageWidget_1_0->fn->setSize(DetailsScreen_ImageWidget_1_0, 800, 143);
    DetailsScreen_ImageWidget_1_0->fn->setBackgroundType(DetailsScreen_ImageWidget_1_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_ImageWidget_1_0->fn->setBorderType(DetailsScreen_ImageWidget_1_0, LE_WIDGET_BORDER_NONE);
    DetailsScreen_ImageWidget_1_0->fn->setVAlignment(DetailsScreen_ImageWidget_1_0, LE_VALIGN_TOP);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_ImageWidget_1_0);

    DetailsScreen_pnlRoomInfo = leWidget_New();
    DetailsScreen_pnlRoomInfo->fn->setPosition(DetailsScreen_pnlRoomInfo, 386, 222);
    DetailsScreen_pnlRoomInfo->fn->setSize(DetailsScreen_pnlRoomInfo, 484, 161);
    DetailsScreen_pnlRoomInfo->fn->setBackgroundType(DetailsScreen_pnlRoomInfo, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_pnlRoomInfo);

    DetailsScreen_lblBedDetails = leLabelWidget_New();
    DetailsScreen_lblBedDetails->fn->setPosition(DetailsScreen_lblBedDetails, 34, 3);
    DetailsScreen_lblBedDetails->fn->setSize(DetailsScreen_lblBedDetails, 430, 60);
    DetailsScreen_lblBedDetails->fn->setScheme(DetailsScreen_lblBedDetails, &KioskSchemeText);
    DetailsScreen_lblBedDetails->fn->setBackgroundType(DetailsScreen_lblBedDetails, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblBedDetails->fn->setString(DetailsScreen_lblBedDetails, (leString*)&string_strBedKing);
    DetailsScreen_pnlRoomInfo->fn->addChild(DetailsScreen_pnlRoomInfo, (leWidget*)DetailsScreen_lblBedDetails);

    DetailsScreen_lblStayDates = leLabelWidget_New();
    DetailsScreen_lblStayDates->fn->setPosition(DetailsScreen_lblStayDates, 36, 68);
    DetailsScreen_lblStayDates->fn->setSize(DetailsScreen_lblStayDates, 435, 40);
    DetailsScreen_lblStayDates->fn->setScheme(DetailsScreen_lblStayDates, &BlackScheme);
    DetailsScreen_lblStayDates->fn->setBackgroundType(DetailsScreen_lblStayDates, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblStayDates->fn->setString(DetailsScreen_lblStayDates, (leString*)&string_strDateDetails);
    DetailsScreen_pnlRoomInfo->fn->addChild(DetailsScreen_pnlRoomInfo, (leWidget*)DetailsScreen_lblStayDates);

    DetailsScreen_lblRoomInfo = leLabelWidget_New();
    DetailsScreen_lblRoomInfo->fn->setPosition(DetailsScreen_lblRoomInfo, 39, 108);
    DetailsScreen_lblRoomInfo->fn->setSize(DetailsScreen_lblRoomInfo, 421, 39);
    DetailsScreen_lblRoomInfo->fn->setScheme(DetailsScreen_lblRoomInfo, &BlackScheme);
    DetailsScreen_lblRoomInfo->fn->setBackgroundType(DetailsScreen_lblRoomInfo, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblRoomInfo->fn->setString(DetailsScreen_lblRoomInfo, (leString*)&string_strRoomDetails);
    DetailsScreen_pnlRoomInfo->fn->addChild(DetailsScreen_pnlRoomInfo, (leWidget*)DetailsScreen_lblRoomInfo);

    DetailsScreen_pnlChargesInfo = leWidget_New();
    DetailsScreen_pnlChargesInfo->fn->setPosition(DetailsScreen_pnlChargesInfo, 405, 429);
    DetailsScreen_pnlChargesInfo->fn->setSize(DetailsScreen_pnlChargesInfo, 434, 188);
    DetailsScreen_pnlChargesInfo->fn->setBackgroundType(DetailsScreen_pnlChargesInfo, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_pnlChargesInfo);

    DetailsScreen_lblSummaryOfCharges = leLabelWidget_New();
    DetailsScreen_lblSummaryOfCharges->fn->setPosition(DetailsScreen_lblSummaryOfCharges, 12, 3);
    DetailsScreen_lblSummaryOfCharges->fn->setSize(DetailsScreen_lblSummaryOfCharges, 409, 60);
    DetailsScreen_lblSummaryOfCharges->fn->setScheme(DetailsScreen_lblSummaryOfCharges, &KioskSchemeText);
    DetailsScreen_lblSummaryOfCharges->fn->setBackgroundType(DetailsScreen_lblSummaryOfCharges, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblSummaryOfCharges->fn->setString(DetailsScreen_lblSummaryOfCharges, (leString*)&string_strSummary);
    DetailsScreen_pnlChargesInfo->fn->addChild(DetailsScreen_pnlChargesInfo, (leWidget*)DetailsScreen_lblSummaryOfCharges);

    DetailsScreen_lblTotal = leLabelWidget_New();
    DetailsScreen_lblTotal->fn->setPosition(DetailsScreen_lblTotal, 12, 61);
    DetailsScreen_lblTotal->fn->setSize(DetailsScreen_lblTotal, 162, 40);
    DetailsScreen_lblTotal->fn->setBackgroundType(DetailsScreen_lblTotal, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblTotal->fn->setString(DetailsScreen_lblTotal, (leString*)&string_strTotalCharges);
    DetailsScreen_pnlChargesInfo->fn->addChild(DetailsScreen_pnlChargesInfo, (leWidget*)DetailsScreen_lblTotal);

    DetailsScreen_lblAmount = leLabelWidget_New();
    DetailsScreen_lblAmount->fn->setPosition(DetailsScreen_lblAmount, 192, 61);
    DetailsScreen_lblAmount->fn->setSize(DetailsScreen_lblAmount, 151, 40);
    DetailsScreen_lblAmount->fn->setScheme(DetailsScreen_lblAmount, &BlackScheme);
    DetailsScreen_lblAmount->fn->setBackgroundType(DetailsScreen_lblAmount, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblAmount->fn->setString(DetailsScreen_lblAmount, (leString*)&string_totalPriceDefault);
    DetailsScreen_pnlChargesInfo->fn->addChild(DetailsScreen_pnlChargesInfo, (leWidget*)DetailsScreen_lblAmount);

    DetailsScreen_lblBookingPaid = leLabelWidget_New();
    DetailsScreen_lblBookingPaid->fn->setPosition(DetailsScreen_lblBookingPaid, 13, 117);
    DetailsScreen_lblBookingPaid->fn->setSize(DetailsScreen_lblBookingPaid, 419, 60);
    DetailsScreen_lblBookingPaid->fn->setScheme(DetailsScreen_lblBookingPaid, &LightTextScheme);
    DetailsScreen_lblBookingPaid->fn->setBackgroundType(DetailsScreen_lblBookingPaid, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblBookingPaid->fn->setString(DetailsScreen_lblBookingPaid, (leString*)&string_strChargesNote);
    DetailsScreen_pnlChargesInfo->fn->addChild(DetailsScreen_pnlChargesInfo, (leWidget*)DetailsScreen_lblBookingPaid);

    DetailsScreen_pnlUpgrades = leWidget_New();
    DetailsScreen_pnlUpgrades->fn->setPosition(DetailsScreen_pnlUpgrades, 868, 225);
    DetailsScreen_pnlUpgrades->fn->setSize(DetailsScreen_pnlUpgrades, 248, 454);
    DetailsScreen_pnlUpgrades->fn->setBackgroundType(DetailsScreen_pnlUpgrades, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_pnlUpgrades);

    DetailsScreen_imgBalconyView = leImageWidget_New();
    DetailsScreen_imgBalconyView->fn->setPosition(DetailsScreen_imgBalconyView, 22, 176);
    DetailsScreen_imgBalconyView->fn->setSize(DetailsScreen_imgBalconyView, 200, 105);
    DetailsScreen_imgBalconyView->fn->setBackgroundType(DetailsScreen_imgBalconyView, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_imgBalconyView->fn->setBorderType(DetailsScreen_imgBalconyView, LE_WIDGET_BORDER_NONE);
    DetailsScreen_imgBalconyView->fn->setImage(DetailsScreen_imgBalconyView, (leImage*)&upgradeBalcony200);
    DetailsScreen_pnlUpgrades->fn->addChild(DetailsScreen_pnlUpgrades, (leWidget*)DetailsScreen_imgBalconyView);

    DetailsScreen_btnBalconyView = leButtonWidget_New();
    DetailsScreen_btnBalconyView->fn->setPosition(DetailsScreen_btnBalconyView, 0, 1);
    DetailsScreen_btnBalconyView->fn->setSize(DetailsScreen_btnBalconyView, 200, 105);
    DetailsScreen_btnBalconyView->fn->setBackgroundType(DetailsScreen_btnBalconyView, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_btnBalconyView->fn->setBorderType(DetailsScreen_btnBalconyView, LE_WIDGET_BORDER_NONE);
    DetailsScreen_btnBalconyView->fn->setMargins(DetailsScreen_btnBalconyView, 0, 0, 0, 0);
    DetailsScreen_btnBalconyView->fn->setToggleable(DetailsScreen_btnBalconyView, LE_TRUE);
    DetailsScreen_btnBalconyView->fn->setPressedImage(DetailsScreen_btnBalconyView, (leImage*)&upgradeOverlay200);
    DetailsScreen_btnBalconyView->fn->setPressedOffset(DetailsScreen_btnBalconyView, 0);
    DetailsScreen_btnBalconyView->fn->setPressedEventCallback(DetailsScreen_btnBalconyView, event_DetailsScreen_btnBalconyView_OnPressed);
    DetailsScreen_btnBalconyView->fn->setReleasedEventCallback(DetailsScreen_btnBalconyView, event_DetailsScreen_btnBalconyView_OnReleased);
    DetailsScreen_imgBalconyView->fn->addChild(DetailsScreen_imgBalconyView, (leWidget*)DetailsScreen_btnBalconyView);

    DetailsScreen_LabelWidget_3 = leLabelWidget_New();
    DetailsScreen_LabelWidget_3->fn->setPosition(DetailsScreen_LabelWidget_3, 11, 14);
    DetailsScreen_LabelWidget_3->fn->setSize(DetailsScreen_LabelWidget_3, 101, 55);
    DetailsScreen_LabelWidget_3->fn->setEnabled(DetailsScreen_LabelWidget_3, LE_FALSE);
    DetailsScreen_LabelWidget_3->fn->setScheme(DetailsScreen_LabelWidget_3, &KioskScheme);
    DetailsScreen_LabelWidget_3->fn->setBackgroundType(DetailsScreen_LabelWidget_3, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_3->fn->setString(DetailsScreen_LabelWidget_3, (leString*)&string_strBalconyView);
    DetailsScreen_imgBalconyView->fn->addChild(DetailsScreen_imgBalconyView, (leWidget*)DetailsScreen_LabelWidget_3);

    DetailsScreen_LabelWidget_3_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_3_0->fn->setPosition(DetailsScreen_LabelWidget_3_0, 13, 72);
    DetailsScreen_LabelWidget_3_0->fn->setEnabled(DetailsScreen_LabelWidget_3_0, LE_FALSE);
    DetailsScreen_LabelWidget_3_0->fn->setScheme(DetailsScreen_LabelWidget_3_0, &LightTextScheme);
    DetailsScreen_LabelWidget_3_0->fn->setBackgroundType(DetailsScreen_LabelWidget_3_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_3_0->fn->setString(DetailsScreen_LabelWidget_3_0, (leString*)&string_strBalconyPrice);
    DetailsScreen_imgBalconyView->fn->addChild(DetailsScreen_imgBalconyView, (leWidget*)DetailsScreen_LabelWidget_3_0);

    DetailsScreen_imgBreakfast = leImageWidget_New();
    DetailsScreen_imgBreakfast->fn->setPosition(DetailsScreen_imgBreakfast, 22, 286);
    DetailsScreen_imgBreakfast->fn->setSize(DetailsScreen_imgBreakfast, 200, 105);
    DetailsScreen_imgBreakfast->fn->setBackgroundType(DetailsScreen_imgBreakfast, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_imgBreakfast->fn->setBorderType(DetailsScreen_imgBreakfast, LE_WIDGET_BORDER_NONE);
    DetailsScreen_imgBreakfast->fn->setImage(DetailsScreen_imgBreakfast, (leImage*)&upgradeBreakfast200);
    DetailsScreen_pnlUpgrades->fn->addChild(DetailsScreen_pnlUpgrades, (leWidget*)DetailsScreen_imgBreakfast);

    DetailsScreen_btnBreakfast = leButtonWidget_New();
    DetailsScreen_btnBreakfast->fn->setPosition(DetailsScreen_btnBreakfast, 0, 1);
    DetailsScreen_btnBreakfast->fn->setSize(DetailsScreen_btnBreakfast, 200, 105);
    DetailsScreen_btnBreakfast->fn->setBackgroundType(DetailsScreen_btnBreakfast, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_btnBreakfast->fn->setBorderType(DetailsScreen_btnBreakfast, LE_WIDGET_BORDER_NONE);
    DetailsScreen_btnBreakfast->fn->setMargins(DetailsScreen_btnBreakfast, 0, 0, 0, 0);
    DetailsScreen_btnBreakfast->fn->setToggleable(DetailsScreen_btnBreakfast, LE_TRUE);
    DetailsScreen_btnBreakfast->fn->setPressedImage(DetailsScreen_btnBreakfast, (leImage*)&upgradeOverlay200);
    DetailsScreen_btnBreakfast->fn->setPressedOffset(DetailsScreen_btnBreakfast, 0);
    DetailsScreen_btnBreakfast->fn->setPressedEventCallback(DetailsScreen_btnBreakfast, event_DetailsScreen_btnBreakfast_OnPressed);
    DetailsScreen_btnBreakfast->fn->setReleasedEventCallback(DetailsScreen_btnBreakfast, event_DetailsScreen_btnBreakfast_OnReleased);
    DetailsScreen_imgBreakfast->fn->addChild(DetailsScreen_imgBreakfast, (leWidget*)DetailsScreen_btnBreakfast);

    DetailsScreen_LabelWidget_3_1 = leLabelWidget_New();
    DetailsScreen_LabelWidget_3_1->fn->setPosition(DetailsScreen_LabelWidget_3_1, 10, 12);
    DetailsScreen_LabelWidget_3_1->fn->setSize(DetailsScreen_LabelWidget_3_1, 114, 40);
    DetailsScreen_LabelWidget_3_1->fn->setEnabled(DetailsScreen_LabelWidget_3_1, LE_FALSE);
    DetailsScreen_LabelWidget_3_1->fn->setScheme(DetailsScreen_LabelWidget_3_1, &KioskScheme);
    DetailsScreen_LabelWidget_3_1->fn->setBackgroundType(DetailsScreen_LabelWidget_3_1, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_3_1->fn->setString(DetailsScreen_LabelWidget_3_1, (leString*)&string_strBreakfast);
    DetailsScreen_imgBreakfast->fn->addChild(DetailsScreen_imgBreakfast, (leWidget*)DetailsScreen_LabelWidget_3_1);

    DetailsScreen_LabelWidget_3_0_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_3_0_0->fn->setPosition(DetailsScreen_LabelWidget_3_0_0, 10, 63);
    DetailsScreen_LabelWidget_3_0_0->fn->setEnabled(DetailsScreen_LabelWidget_3_0_0, LE_FALSE);
    DetailsScreen_LabelWidget_3_0_0->fn->setScheme(DetailsScreen_LabelWidget_3_0_0, &LightTextScheme);
    DetailsScreen_LabelWidget_3_0_0->fn->setBackgroundType(DetailsScreen_LabelWidget_3_0_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_3_0_0->fn->setString(DetailsScreen_LabelWidget_3_0_0, (leString*)&string_strBreakfastPrice);
    DetailsScreen_imgBreakfast->fn->addChild(DetailsScreen_imgBreakfast, (leWidget*)DetailsScreen_LabelWidget_3_0_0);

    DetailsScreen_imgLateCheckout = leImageWidget_New();
    DetailsScreen_imgLateCheckout->fn->setPosition(DetailsScreen_imgLateCheckout, 23, 65);
    DetailsScreen_imgLateCheckout->fn->setSize(DetailsScreen_imgLateCheckout, 200, 105);
    DetailsScreen_imgLateCheckout->fn->setBackgroundType(DetailsScreen_imgLateCheckout, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_imgLateCheckout->fn->setBorderType(DetailsScreen_imgLateCheckout, LE_WIDGET_BORDER_NONE);
    DetailsScreen_imgLateCheckout->fn->setImage(DetailsScreen_imgLateCheckout, (leImage*)&upgradeLate200);
    DetailsScreen_pnlUpgrades->fn->addChild(DetailsScreen_pnlUpgrades, (leWidget*)DetailsScreen_imgLateCheckout);

    DetailsScreen_btnLateCheckout = leButtonWidget_New();
    DetailsScreen_btnLateCheckout->fn->setPosition(DetailsScreen_btnLateCheckout, 0, 0);
    DetailsScreen_btnLateCheckout->fn->setSize(DetailsScreen_btnLateCheckout, 200, 105);
    DetailsScreen_btnLateCheckout->fn->setBackgroundType(DetailsScreen_btnLateCheckout, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_btnLateCheckout->fn->setBorderType(DetailsScreen_btnLateCheckout, LE_WIDGET_BORDER_NONE);
    DetailsScreen_btnLateCheckout->fn->setMargins(DetailsScreen_btnLateCheckout, 0, 0, 0, 0);
    DetailsScreen_btnLateCheckout->fn->setToggleable(DetailsScreen_btnLateCheckout, LE_TRUE);
    DetailsScreen_btnLateCheckout->fn->setPressedImage(DetailsScreen_btnLateCheckout, (leImage*)&upgradeOverlay200);
    DetailsScreen_btnLateCheckout->fn->setPressedOffset(DetailsScreen_btnLateCheckout, 0);
    DetailsScreen_btnLateCheckout->fn->setPressedEventCallback(DetailsScreen_btnLateCheckout, event_DetailsScreen_btnLateCheckout_OnPressed);
    DetailsScreen_btnLateCheckout->fn->setReleasedEventCallback(DetailsScreen_btnLateCheckout, event_DetailsScreen_btnLateCheckout_OnReleased);
    DetailsScreen_imgLateCheckout->fn->addChild(DetailsScreen_imgLateCheckout, (leWidget*)DetailsScreen_btnLateCheckout);

    DetailsScreen_LabelWidget_3_1_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_3_1_0->fn->setPosition(DetailsScreen_LabelWidget_3_1_0, 9, 16);
    DetailsScreen_LabelWidget_3_1_0->fn->setSize(DetailsScreen_LabelWidget_3_1_0, 101, 55);
    DetailsScreen_LabelWidget_3_1_0->fn->setEnabled(DetailsScreen_LabelWidget_3_1_0, LE_FALSE);
    DetailsScreen_LabelWidget_3_1_0->fn->setScheme(DetailsScreen_LabelWidget_3_1_0, &KioskScheme);
    DetailsScreen_LabelWidget_3_1_0->fn->setBackgroundType(DetailsScreen_LabelWidget_3_1_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_3_1_0->fn->setString(DetailsScreen_LabelWidget_3_1_0, (leString*)&string_strLateCheckout);
    DetailsScreen_imgLateCheckout->fn->addChild(DetailsScreen_imgLateCheckout, (leWidget*)DetailsScreen_LabelWidget_3_1_0);

    DetailsScreen_LabelWidget_3_0_0_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_3_0_0_0->fn->setPosition(DetailsScreen_LabelWidget_3_0_0_0, 11, 71);
    DetailsScreen_LabelWidget_3_0_0_0->fn->setEnabled(DetailsScreen_LabelWidget_3_0_0_0, LE_FALSE);
    DetailsScreen_LabelWidget_3_0_0_0->fn->setScheme(DetailsScreen_LabelWidget_3_0_0_0, &LightTextScheme);
    DetailsScreen_LabelWidget_3_0_0_0->fn->setBackgroundType(DetailsScreen_LabelWidget_3_0_0_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_3_0_0_0->fn->setString(DetailsScreen_LabelWidget_3_0_0_0, (leString*)&string_strLateCheckoutPrice);
    DetailsScreen_imgLateCheckout->fn->addChild(DetailsScreen_imgLateCheckout, (leWidget*)DetailsScreen_LabelWidget_3_0_0_0);

    DetailsScreen_lblUpgrades = leLabelWidget_New();
    DetailsScreen_lblUpgrades->fn->setPosition(DetailsScreen_lblUpgrades, 22, -4);
    DetailsScreen_lblUpgrades->fn->setSize(DetailsScreen_lblUpgrades, 200, 60);
    DetailsScreen_lblUpgrades->fn->setScheme(DetailsScreen_lblUpgrades, &KioskSchemeText);
    DetailsScreen_lblUpgrades->fn->setBackgroundType(DetailsScreen_lblUpgrades, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_lblUpgrades->fn->setString(DetailsScreen_lblUpgrades, (leString*)&string_strUpgrades);
    DetailsScreen_pnlUpgrades->fn->addChild(DetailsScreen_pnlUpgrades, (leWidget*)DetailsScreen_lblUpgrades);

    DetailsScreen_ImageWidget_2 = leImageWidget_New();
    DetailsScreen_ImageWidget_2->fn->setPosition(DetailsScreen_ImageWidget_2, 103, 242);
    DetailsScreen_ImageWidget_2->fn->setSize(DetailsScreen_ImageWidget_2, 276, 371);
    DetailsScreen_ImageWidget_2->fn->setBackgroundType(DetailsScreen_ImageWidget_2, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_ImageWidget_2->fn->setBorderType(DetailsScreen_ImageWidget_2, LE_WIDGET_BORDER_NONE);
    DetailsScreen_ImageWidget_2->fn->setImage(DetailsScreen_ImageWidget_2, (leImage*)&CheckIn);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_ImageWidget_2);

    DetailsScreen_btnContinue = leButtonWidget_New();
    DetailsScreen_btnContinue->fn->setPosition(DetailsScreen_btnContinue, 170, 680);
    DetailsScreen_btnContinue->fn->setSize(DetailsScreen_btnContinue, 900, 89);
    DetailsScreen_btnContinue->fn->setScheme(DetailsScreen_btnContinue, &KioskScheme);
    DetailsScreen_btnContinue->fn->setBorderType(DetailsScreen_btnContinue, LE_WIDGET_BORDER_NONE);
    DetailsScreen_btnContinue->fn->setMargins(DetailsScreen_btnContinue, 0, 0, 0, 0);
    DetailsScreen_btnContinue->fn->setString(DetailsScreen_btnContinue, (leString*)&string_strContinue);
    DetailsScreen_btnContinue->fn->setReleasedEventCallback(DetailsScreen_btnContinue, event_DetailsScreen_btnContinue_OnReleased);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_btnContinue);

    DetailsScreen_pnlError = leWidget_New();
    DetailsScreen_pnlError->fn->setPosition(DetailsScreen_pnlError, -540, 300);
    DetailsScreen_pnlError->fn->setSize(DetailsScreen_pnlError, 540, 260);
    DetailsScreen_pnlError->fn->setScheme(DetailsScreen_pnlError, &KeyboardBack);
    root0->fn->addChild(root0, (leWidget*)DetailsScreen_pnlError);

    DetailsScreen_LabelWidget_2_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_2_0->fn->setPosition(DetailsScreen_LabelWidget_2_0, -1, 70);
    DetailsScreen_LabelWidget_2_0->fn->setSize(DetailsScreen_LabelWidget_2_0, 540, 75);
    DetailsScreen_LabelWidget_2_0->fn->setScheme(DetailsScreen_LabelWidget_2_0, &KeyboardBack);
    DetailsScreen_LabelWidget_2_0->fn->setBackgroundType(DetailsScreen_LabelWidget_2_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_2_0->fn->setHAlignment(DetailsScreen_LabelWidget_2_0, LE_HALIGN_CENTER);
    DetailsScreen_LabelWidget_2_0->fn->setString(DetailsScreen_LabelWidget_2_0, (leString*)&string_strErrorOccured);
    DetailsScreen_pnlError->fn->addChild(DetailsScreen_pnlError, (leWidget*)DetailsScreen_LabelWidget_2_0);

    DetailsScreen_LabelWidget_4_0 = leLabelWidget_New();
    DetailsScreen_LabelWidget_4_0->fn->setPosition(DetailsScreen_LabelWidget_4_0, 174, 33);
    DetailsScreen_LabelWidget_4_0->fn->setSize(DetailsScreen_LabelWidget_4_0, 170, 44);
    DetailsScreen_LabelWidget_4_0->fn->setScheme(DetailsScreen_LabelWidget_4_0, &KeyboardBack);
    DetailsScreen_LabelWidget_4_0->fn->setBackgroundType(DetailsScreen_LabelWidget_4_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_LabelWidget_4_0->fn->setHAlignment(DetailsScreen_LabelWidget_4_0, LE_HALIGN_CENTER);
    DetailsScreen_LabelWidget_4_0->fn->setString(DetailsScreen_LabelWidget_4_0, (leString*)&string_strSorry);
    DetailsScreen_pnlError->fn->addChild(DetailsScreen_pnlError, (leWidget*)DetailsScreen_LabelWidget_4_0);

    DetailsScreen_btnErrorBack_0 = leButtonWidget_New();
    DetailsScreen_btnErrorBack_0->fn->setPosition(DetailsScreen_btnErrorBack_0, 180, 154);
    DetailsScreen_btnErrorBack_0->fn->setSize(DetailsScreen_btnErrorBack_0, 164, 72);
    DetailsScreen_btnErrorBack_0->fn->setBackgroundType(DetailsScreen_btnErrorBack_0, LE_WIDGET_BACKGROUND_NONE);
    DetailsScreen_btnErrorBack_0->fn->setBorderType(DetailsScreen_btnErrorBack_0, LE_WIDGET_BORDER_NONE);
    DetailsScreen_btnErrorBack_0->fn->setReleasedEventCallback(DetailsScreen_btnErrorBack_0, event_DetailsScreen_btnErrorBack_0_OnReleased);
    DetailsScreen_pnlError->fn->addChild(DetailsScreen_pnlError, (leWidget*)DetailsScreen_btnErrorBack_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    DetailsScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_DetailsScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    DetailsScreen_OnUpdate(); // raise event
}

void screenHide_DetailsScreen(void)
{
    DetailsScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    DetailsScreen_BackgroundPanel = NULL;
    DetailsScreen_btnBack = NULL;
    DetailsScreen_imgMGS = NULL;
    DetailsScreen_LabelWidget_2 = NULL;
    DetailsScreen_LabelWidget_1 = NULL;
    DetailsScreen_LabelWidget_0 = NULL;
    DetailsScreen_ImageWidget_1_0 = NULL;
    DetailsScreen_pnlRoomInfo = NULL;
    DetailsScreen_pnlChargesInfo = NULL;
    DetailsScreen_pnlUpgrades = NULL;
    DetailsScreen_ImageWidget_2 = NULL;
    DetailsScreen_btnContinue = NULL;
    DetailsScreen_pnlError = NULL;
    DetailsScreen_lblBedDetails = NULL;
    DetailsScreen_lblStayDates = NULL;
    DetailsScreen_lblRoomInfo = NULL;
    DetailsScreen_lblSummaryOfCharges = NULL;
    DetailsScreen_lblTotal = NULL;
    DetailsScreen_lblAmount = NULL;
    DetailsScreen_lblBookingPaid = NULL;
    DetailsScreen_imgBalconyView = NULL;
    DetailsScreen_imgBreakfast = NULL;
    DetailsScreen_imgLateCheckout = NULL;
    DetailsScreen_lblUpgrades = NULL;
    DetailsScreen_btnBalconyView = NULL;
    DetailsScreen_LabelWidget_3 = NULL;
    DetailsScreen_LabelWidget_3_0 = NULL;
    DetailsScreen_btnBreakfast = NULL;
    DetailsScreen_LabelWidget_3_1 = NULL;
    DetailsScreen_LabelWidget_3_0_0 = NULL;
    DetailsScreen_btnLateCheckout = NULL;
    DetailsScreen_LabelWidget_3_1_0 = NULL;
    DetailsScreen_LabelWidget_3_0_0_0 = NULL;
    DetailsScreen_LabelWidget_2_0 = NULL;
    DetailsScreen_LabelWidget_4_0 = NULL;
    DetailsScreen_btnErrorBack_0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_DetailsScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_DetailsScreen(uint32_t lyrIdx)
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

