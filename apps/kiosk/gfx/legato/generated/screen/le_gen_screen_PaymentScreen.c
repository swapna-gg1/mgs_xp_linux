#include "gfx/legato/generated/screen/le_gen_screen_PaymentScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* PaymentScreen_BackgroundPanel;
leButtonWidget* PaymentScreen_btnBack;
leImageWidget* PaymentScreen_imgMGS;
leLabelWidget* PaymentScreen_lblCheckInOut;
leLabelWidget* PaymentScreen_LabelWidget_1;
leImageWidget* PaymentScreen_ImageWidget_1_0;
leWidget* PaymentScreen_pnlRoomInfo;
leWidget* PaymentScreen_pnlChargesInfo;
leImageWidget* PaymentScreen_ImageWidget_2;
leButtonWidget* PaymentScreen_btnPayCard;
leButtonWidget* PaymentScreen_btnPayTap;
leWidget* PaymentScreen_pnlError;
leLabelWidget* PaymentScreen_lblBedDetails;
leLabelWidget* PaymentScreen_lblStayDates;
leLabelWidget* PaymentScreen_lblRoomInfo;
leLabelWidget* PaymentScreen_lblNeededToday;
leLabelWidget* PaymentScreen_lblTotal;
leLabelWidget* PaymentScreen_lblAmount;
leLabelWidget* PaymentScreen_lblBookingPaid;
leWidget* PaymentScreen_pnlDeposit;
leWidget* PaymentScreen_pnlLateCheckoutCost;
leWidget* PaymentScreen_pnlBalcony;
leWidget* PaymentScreen_pnlBreakfast;
leLabelWidget* PaymentScreen_lblDeposit;
leLabelWidget* PaymentScreen_lblDepositAmt;
leLabelWidget* PaymentScreen_lblLateCheckout;
leLabelWidget* PaymentScreen_lblLateCheckoutAmt;
leLabelWidget* PaymentScreen_lblBalcony;
leLabelWidget* PaymentScreen_lblBalconyAmt;
leLabelWidget* PaymentScreen_lblBalcony;
leLabelWidget* PaymentScreen_lblBalconyAmt;
leLabelWidget* PaymentScreen_LabelWidget_2_0_0;
leLabelWidget* PaymentScreen_LabelWidget_4_0_0;
leButtonWidget* PaymentScreen_btnErrorBack;

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
    root0->fn->setSize(root0, 1280, 800);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    PaymentScreen_BackgroundPanel = leWidget_New();
    PaymentScreen_BackgroundPanel->fn->setPosition(PaymentScreen_BackgroundPanel, 0, 0);
    PaymentScreen_BackgroundPanel->fn->setSize(PaymentScreen_BackgroundPanel, 1280, 800);
    PaymentScreen_BackgroundPanel->fn->setScheme(PaymentScreen_BackgroundPanel, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_BackgroundPanel);

    PaymentScreen_btnBack = leButtonWidget_New();
    PaymentScreen_btnBack->fn->setPosition(PaymentScreen_btnBack, 1026, 97);
    PaymentScreen_btnBack->fn->setSize(PaymentScreen_btnBack, 200, 70);
    PaymentScreen_btnBack->fn->setBackgroundType(PaymentScreen_btnBack, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_btnBack->fn->setBorderType(PaymentScreen_btnBack, LE_WIDGET_BORDER_NONE);
    PaymentScreen_btnBack->fn->setPressedImage(PaymentScreen_btnBack, (leImage*)&imgBackWhite);
    PaymentScreen_btnBack->fn->setReleasedImage(PaymentScreen_btnBack, (leImage*)&imgBackWhite);
    PaymentScreen_btnBack->fn->setReleasedEventCallback(PaymentScreen_btnBack, event_PaymentScreen_btnBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_btnBack);

    PaymentScreen_imgMGS = leImageWidget_New();
    PaymentScreen_imgMGS->fn->setPosition(PaymentScreen_imgMGS, 3, 6);
    PaymentScreen_imgMGS->fn->setSize(PaymentScreen_imgMGS, 183, 53);
    PaymentScreen_imgMGS->fn->setBackgroundType(PaymentScreen_imgMGS, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_imgMGS->fn->setBorderType(PaymentScreen_imgMGS, LE_WIDGET_BORDER_NONE);
    PaymentScreen_imgMGS->fn->setImage(PaymentScreen_imgMGS, (leImage*)&MGS_40h);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_imgMGS);

    PaymentScreen_lblCheckInOut = leLabelWidget_New();
    PaymentScreen_lblCheckInOut->fn->setPosition(PaymentScreen_lblCheckInOut, 50, 88);
    PaymentScreen_lblCheckInOut->fn->setSize(PaymentScreen_lblCheckInOut, 342, 67);
    PaymentScreen_lblCheckInOut->fn->setScheme(PaymentScreen_lblCheckInOut, &KioskSchemeText);
    PaymentScreen_lblCheckInOut->fn->setBackgroundType(PaymentScreen_lblCheckInOut, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblCheckInOut->fn->setString(PaymentScreen_lblCheckInOut, (leString*)&string_strCheckIn);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_lblCheckInOut);

    PaymentScreen_LabelWidget_1 = leLabelWidget_New();
    PaymentScreen_LabelWidget_1->fn->setPosition(PaymentScreen_LabelWidget_1, 890, 0);
    PaymentScreen_LabelWidget_1->fn->setSize(PaymentScreen_LabelWidget_1, 377, 70);
    PaymentScreen_LabelWidget_1->fn->setScheme(PaymentScreen_LabelWidget_1, &KioskSchemeText);
    PaymentScreen_LabelWidget_1->fn->setBackgroundType(PaymentScreen_LabelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_LabelWidget_1->fn->setString(PaymentScreen_LabelWidget_1, (leString*)&string_strHotelNameSmall);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_LabelWidget_1);

    PaymentScreen_ImageWidget_1_0 = leImageWidget_New();
    PaymentScreen_ImageWidget_1_0->fn->setPosition(PaymentScreen_ImageWidget_1_0, 1342, 634);
    PaymentScreen_ImageWidget_1_0->fn->setSize(PaymentScreen_ImageWidget_1_0, 800, 143);
    PaymentScreen_ImageWidget_1_0->fn->setBackgroundType(PaymentScreen_ImageWidget_1_0, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_ImageWidget_1_0->fn->setBorderType(PaymentScreen_ImageWidget_1_0, LE_WIDGET_BORDER_NONE);
    PaymentScreen_ImageWidget_1_0->fn->setVAlignment(PaymentScreen_ImageWidget_1_0, LE_VALIGN_TOP);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_ImageWidget_1_0);

    PaymentScreen_pnlRoomInfo = leWidget_New();
    PaymentScreen_pnlRoomInfo->fn->setPosition(PaymentScreen_pnlRoomInfo, 240, 185);
    PaymentScreen_pnlRoomInfo->fn->setSize(PaymentScreen_pnlRoomInfo, 484, 150);
    PaymentScreen_pnlRoomInfo->fn->setBackgroundType(PaymentScreen_pnlRoomInfo, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_pnlRoomInfo);

    PaymentScreen_lblBedDetails = leLabelWidget_New();
    PaymentScreen_lblBedDetails->fn->setPosition(PaymentScreen_lblBedDetails, 0, 0);
    PaymentScreen_lblBedDetails->fn->setSize(PaymentScreen_lblBedDetails, 465, 59);
    PaymentScreen_lblBedDetails->fn->setScheme(PaymentScreen_lblBedDetails, &KioskSchemeText);
    PaymentScreen_lblBedDetails->fn->setBackgroundType(PaymentScreen_lblBedDetails, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblBedDetails->fn->setMargins(PaymentScreen_lblBedDetails, 4, 0, 4, 4);
    PaymentScreen_lblBedDetails->fn->setString(PaymentScreen_lblBedDetails, (leString*)&string_strBedKing);
    PaymentScreen_pnlRoomInfo->fn->addChild(PaymentScreen_pnlRoomInfo, (leWidget*)PaymentScreen_lblBedDetails);

    PaymentScreen_lblStayDates = leLabelWidget_New();
    PaymentScreen_lblStayDates->fn->setPosition(PaymentScreen_lblStayDates, 0, 63);
    PaymentScreen_lblStayDates->fn->setSize(PaymentScreen_lblStayDates, 435, 40);
    PaymentScreen_lblStayDates->fn->setScheme(PaymentScreen_lblStayDates, &BlackScheme);
    PaymentScreen_lblStayDates->fn->setBackgroundType(PaymentScreen_lblStayDates, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblStayDates->fn->setString(PaymentScreen_lblStayDates, (leString*)&string_strDateDetails);
    PaymentScreen_pnlRoomInfo->fn->addChild(PaymentScreen_pnlRoomInfo, (leWidget*)PaymentScreen_lblStayDates);

    PaymentScreen_lblRoomInfo = leLabelWidget_New();
    PaymentScreen_lblRoomInfo->fn->setPosition(PaymentScreen_lblRoomInfo, 0, 105);
    PaymentScreen_lblRoomInfo->fn->setSize(PaymentScreen_lblRoomInfo, 421, 39);
    PaymentScreen_lblRoomInfo->fn->setScheme(PaymentScreen_lblRoomInfo, &BlackScheme);
    PaymentScreen_lblRoomInfo->fn->setBackgroundType(PaymentScreen_lblRoomInfo, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblRoomInfo->fn->setString(PaymentScreen_lblRoomInfo, (leString*)&string_strRoomDetails);
    PaymentScreen_pnlRoomInfo->fn->addChild(PaymentScreen_pnlRoomInfo, (leWidget*)PaymentScreen_lblRoomInfo);

    PaymentScreen_pnlChargesInfo = leWidget_New();
    PaymentScreen_pnlChargesInfo->fn->setPosition(PaymentScreen_pnlChargesInfo, 235, 364);
    PaymentScreen_pnlChargesInfo->fn->setSize(PaymentScreen_pnlChargesInfo, 434, 318);
    PaymentScreen_pnlChargesInfo->fn->setBackgroundType(PaymentScreen_pnlChargesInfo, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_pnlChargesInfo);

    PaymentScreen_lblNeededToday = leLabelWidget_New();
    PaymentScreen_lblNeededToday->fn->setPosition(PaymentScreen_lblNeededToday, 0, 0);
    PaymentScreen_lblNeededToday->fn->setSize(PaymentScreen_lblNeededToday, 298, 62);
    PaymentScreen_lblNeededToday->fn->setScheme(PaymentScreen_lblNeededToday, &KioskSchemeText);
    PaymentScreen_lblNeededToday->fn->setBackgroundType(PaymentScreen_lblNeededToday, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblNeededToday->fn->setString(PaymentScreen_lblNeededToday, (leString*)&string_strNeeded);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_lblNeededToday);

    PaymentScreen_lblTotal = leLabelWidget_New();
    PaymentScreen_lblTotal->fn->setPosition(PaymentScreen_lblTotal, 0, 272);
    PaymentScreen_lblTotal->fn->setSize(PaymentScreen_lblTotal, 66, 40);
    PaymentScreen_lblTotal->fn->setBackgroundType(PaymentScreen_lblTotal, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblTotal->fn->setString(PaymentScreen_lblTotal, (leString*)&string_strTotalCharges);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_lblTotal);

    PaymentScreen_lblAmount = leLabelWidget_New();
    PaymentScreen_lblAmount->fn->setPosition(PaymentScreen_lblAmount, 204, 272);
    PaymentScreen_lblAmount->fn->setSize(PaymentScreen_lblAmount, 151, 40);
    PaymentScreen_lblAmount->fn->setScheme(PaymentScreen_lblAmount, &BlackScheme);
    PaymentScreen_lblAmount->fn->setBackgroundType(PaymentScreen_lblAmount, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblAmount->fn->setString(PaymentScreen_lblAmount, (leString*)&string_totalPriceDefault);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_lblAmount);

    PaymentScreen_lblBookingPaid = leLabelWidget_New();
    PaymentScreen_lblBookingPaid->fn->setPosition(PaymentScreen_lblBookingPaid, 0, 69);
    PaymentScreen_lblBookingPaid->fn->setSize(PaymentScreen_lblBookingPaid, 325, 34);
    PaymentScreen_lblBookingPaid->fn->setScheme(PaymentScreen_lblBookingPaid, &LightTextScheme);
    PaymentScreen_lblBookingPaid->fn->setBackgroundType(PaymentScreen_lblBookingPaid, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblBookingPaid->fn->setString(PaymentScreen_lblBookingPaid, (leString*)&string_strDepositHeld);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_lblBookingPaid);

    PaymentScreen_pnlDeposit = leWidget_New();
    PaymentScreen_pnlDeposit->fn->setPosition(PaymentScreen_pnlDeposit, 0, 111);
    PaymentScreen_pnlDeposit->fn->setSize(PaymentScreen_pnlDeposit, 335, 30);
    PaymentScreen_pnlDeposit->fn->setBackgroundType(PaymentScreen_pnlDeposit, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_pnlDeposit);

    PaymentScreen_lblDeposit = leLabelWidget_New();
    PaymentScreen_lblDeposit->fn->setPosition(PaymentScreen_lblDeposit, 0, 0);
    PaymentScreen_lblDeposit->fn->setSize(PaymentScreen_lblDeposit, 100, 30);
    PaymentScreen_lblDeposit->fn->setBackgroundType(PaymentScreen_lblDeposit, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblDeposit->fn->setString(PaymentScreen_lblDeposit, (leString*)&string_strDeposit);
    PaymentScreen_pnlDeposit->fn->addChild(PaymentScreen_pnlDeposit, (leWidget*)PaymentScreen_lblDeposit);

    PaymentScreen_lblDepositAmt = leLabelWidget_New();
    PaymentScreen_lblDepositAmt->fn->setPosition(PaymentScreen_lblDepositAmt, 199, 0);
    PaymentScreen_lblDepositAmt->fn->setSize(PaymentScreen_lblDepositAmt, 130, 30);
    PaymentScreen_lblDepositAmt->fn->setScheme(PaymentScreen_lblDepositAmt, &BlackScheme);
    PaymentScreen_lblDepositAmt->fn->setBackgroundType(PaymentScreen_lblDepositAmt, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblDepositAmt->fn->setHAlignment(PaymentScreen_lblDepositAmt, LE_HALIGN_RIGHT);
    PaymentScreen_lblDepositAmt->fn->setString(PaymentScreen_lblDepositAmt, (leString*)&string_strDepositAmount);
    PaymentScreen_pnlDeposit->fn->addChild(PaymentScreen_pnlDeposit, (leWidget*)PaymentScreen_lblDepositAmt);

    PaymentScreen_pnlLateCheckoutCost = leWidget_New();
    PaymentScreen_pnlLateCheckoutCost->fn->setPosition(PaymentScreen_pnlLateCheckoutCost, 0, 143);
    PaymentScreen_pnlLateCheckoutCost->fn->setSize(PaymentScreen_pnlLateCheckoutCost, 335, 30);
    PaymentScreen_pnlLateCheckoutCost->fn->setBackgroundType(PaymentScreen_pnlLateCheckoutCost, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_pnlLateCheckoutCost);

    PaymentScreen_lblLateCheckout = leLabelWidget_New();
    PaymentScreen_lblLateCheckout->fn->setPosition(PaymentScreen_lblLateCheckout, 0, 0);
    PaymentScreen_lblLateCheckout->fn->setSize(PaymentScreen_lblLateCheckout, 109, 30);
    PaymentScreen_lblLateCheckout->fn->setBackgroundType(PaymentScreen_lblLateCheckout, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblLateCheckout->fn->setString(PaymentScreen_lblLateCheckout, (leString*)&string_strLateCheckoutSmall);
    PaymentScreen_pnlLateCheckoutCost->fn->addChild(PaymentScreen_pnlLateCheckoutCost, (leWidget*)PaymentScreen_lblLateCheckout);

    PaymentScreen_lblLateCheckoutAmt = leLabelWidget_New();
    PaymentScreen_lblLateCheckoutAmt->fn->setPosition(PaymentScreen_lblLateCheckoutAmt, 199, 0);
    PaymentScreen_lblLateCheckoutAmt->fn->setSize(PaymentScreen_lblLateCheckoutAmt, 130, 30);
    PaymentScreen_lblLateCheckoutAmt->fn->setScheme(PaymentScreen_lblLateCheckoutAmt, &BlackScheme);
    PaymentScreen_lblLateCheckoutAmt->fn->setBackgroundType(PaymentScreen_lblLateCheckoutAmt, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblLateCheckoutAmt->fn->setHAlignment(PaymentScreen_lblLateCheckoutAmt, LE_HALIGN_RIGHT);
    PaymentScreen_lblLateCheckoutAmt->fn->setString(PaymentScreen_lblLateCheckoutAmt, (leString*)&string_strLateCheckoutPrice);
    PaymentScreen_pnlLateCheckoutCost->fn->addChild(PaymentScreen_pnlLateCheckoutCost, (leWidget*)PaymentScreen_lblLateCheckoutAmt);

    PaymentScreen_pnlBalcony = leWidget_New();
    PaymentScreen_pnlBalcony->fn->setPosition(PaymentScreen_pnlBalcony, 0, 180);
    PaymentScreen_pnlBalcony->fn->setSize(PaymentScreen_pnlBalcony, 335, 30);
    PaymentScreen_pnlBalcony->fn->setBackgroundType(PaymentScreen_pnlBalcony, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_pnlBalcony);

    PaymentScreen_lblBalcony = leLabelWidget_New();
    PaymentScreen_lblBalcony->fn->setPosition(PaymentScreen_lblBalcony, 0, 0);
    PaymentScreen_lblBalcony->fn->setSize(PaymentScreen_lblBalcony, 109, 30);
    PaymentScreen_lblBalcony->fn->setBackgroundType(PaymentScreen_lblBalcony, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblBalcony->fn->setString(PaymentScreen_lblBalcony, (leString*)&string_strBalconySmall);
    PaymentScreen_pnlBalcony->fn->addChild(PaymentScreen_pnlBalcony, (leWidget*)PaymentScreen_lblBalcony);

    PaymentScreen_lblBalconyAmt = leLabelWidget_New();
    PaymentScreen_lblBalconyAmt->fn->setPosition(PaymentScreen_lblBalconyAmt, 199, 0);
    PaymentScreen_lblBalconyAmt->fn->setSize(PaymentScreen_lblBalconyAmt, 130, 30);
    PaymentScreen_lblBalconyAmt->fn->setScheme(PaymentScreen_lblBalconyAmt, &BlackScheme);
    PaymentScreen_lblBalconyAmt->fn->setBackgroundType(PaymentScreen_lblBalconyAmt, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblBalconyAmt->fn->setHAlignment(PaymentScreen_lblBalconyAmt, LE_HALIGN_RIGHT);
    PaymentScreen_lblBalconyAmt->fn->setString(PaymentScreen_lblBalconyAmt, (leString*)&string_strBalconyPrice);
    PaymentScreen_pnlBalcony->fn->addChild(PaymentScreen_pnlBalcony, (leWidget*)PaymentScreen_lblBalconyAmt);

    PaymentScreen_pnlBreakfast = leWidget_New();
    PaymentScreen_pnlBreakfast->fn->setPosition(PaymentScreen_pnlBreakfast, 0, 218);
    PaymentScreen_pnlBreakfast->fn->setSize(PaymentScreen_pnlBreakfast, 335, 30);
    PaymentScreen_pnlBreakfast->fn->setBackgroundType(PaymentScreen_pnlBreakfast, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_pnlChargesInfo->fn->addChild(PaymentScreen_pnlChargesInfo, (leWidget*)PaymentScreen_pnlBreakfast);

    PaymentScreen_lblBalcony = leLabelWidget_New();
    PaymentScreen_lblBalcony->fn->setPosition(PaymentScreen_lblBalcony, 0, 0);
    PaymentScreen_lblBalcony->fn->setSize(PaymentScreen_lblBalcony, 109, 30);
    PaymentScreen_lblBalcony->fn->setBackgroundType(PaymentScreen_lblBalcony, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblBalcony->fn->setString(PaymentScreen_lblBalcony, (leString*)&string_strBreakfastSmall);
    PaymentScreen_pnlBreakfast->fn->addChild(PaymentScreen_pnlBreakfast, (leWidget*)PaymentScreen_lblBalcony);

    PaymentScreen_lblBalconyAmt = leLabelWidget_New();
    PaymentScreen_lblBalconyAmt->fn->setPosition(PaymentScreen_lblBalconyAmt, 199, 0);
    PaymentScreen_lblBalconyAmt->fn->setSize(PaymentScreen_lblBalconyAmt, 130, 30);
    PaymentScreen_lblBalconyAmt->fn->setScheme(PaymentScreen_lblBalconyAmt, &BlackScheme);
    PaymentScreen_lblBalconyAmt->fn->setBackgroundType(PaymentScreen_lblBalconyAmt, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_lblBalconyAmt->fn->setHAlignment(PaymentScreen_lblBalconyAmt, LE_HALIGN_RIGHT);
    PaymentScreen_lblBalconyAmt->fn->setString(PaymentScreen_lblBalconyAmt, (leString*)&string_strBreakfastPrice);
    PaymentScreen_pnlBreakfast->fn->addChild(PaymentScreen_pnlBreakfast, (leWidget*)PaymentScreen_lblBalconyAmt);

    PaymentScreen_ImageWidget_2 = leImageWidget_New();
    PaymentScreen_ImageWidget_2->fn->setPosition(PaymentScreen_ImageWidget_2, 783, 190);
    PaymentScreen_ImageWidget_2->fn->setSize(PaymentScreen_ImageWidget_2, 276, 371);
    PaymentScreen_ImageWidget_2->fn->setBackgroundType(PaymentScreen_ImageWidget_2, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_ImageWidget_2->fn->setBorderType(PaymentScreen_ImageWidget_2, LE_WIDGET_BORDER_NONE);
    PaymentScreen_ImageWidget_2->fn->setImage(PaymentScreen_ImageWidget_2, (leImage*)&CheckIn);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_ImageWidget_2);

    PaymentScreen_btnPayCard = leButtonWidget_New();
    PaymentScreen_btnPayCard->fn->setPosition(PaymentScreen_btnPayCard, 775, 583);
    PaymentScreen_btnPayCard->fn->setSize(PaymentScreen_btnPayCard, 120, 120);
    PaymentScreen_btnPayCard->fn->setBackgroundType(PaymentScreen_btnPayCard, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_btnPayCard->fn->setBorderType(PaymentScreen_btnPayCard, LE_WIDGET_BORDER_NONE);
    PaymentScreen_btnPayCard->fn->setPressedImage(PaymentScreen_btnPayCard, (leImage*)&credit_card90);
    PaymentScreen_btnPayCard->fn->setReleasedImage(PaymentScreen_btnPayCard, (leImage*)&credit_card90);
    PaymentScreen_btnPayCard->fn->setReleasedEventCallback(PaymentScreen_btnPayCard, event_PaymentScreen_btnPayCard_OnReleased);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_btnPayCard);

    PaymentScreen_btnPayTap = leButtonWidget_New();
    PaymentScreen_btnPayTap->fn->setPosition(PaymentScreen_btnPayTap, 944, 584);
    PaymentScreen_btnPayTap->fn->setSize(PaymentScreen_btnPayTap, 120, 120);
    PaymentScreen_btnPayTap->fn->setBackgroundType(PaymentScreen_btnPayTap, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_btnPayTap->fn->setBorderType(PaymentScreen_btnPayTap, LE_WIDGET_BORDER_NONE);
    PaymentScreen_btnPayTap->fn->setPressedImage(PaymentScreen_btnPayTap, (leImage*)&contactless90);
    PaymentScreen_btnPayTap->fn->setReleasedImage(PaymentScreen_btnPayTap, (leImage*)&contactless90);
    PaymentScreen_btnPayTap->fn->setReleasedEventCallback(PaymentScreen_btnPayTap, event_PaymentScreen_btnPayTap_OnReleased);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_btnPayTap);

    PaymentScreen_pnlError = leWidget_New();
    PaymentScreen_pnlError->fn->setPosition(PaymentScreen_pnlError, -540, 300);
    PaymentScreen_pnlError->fn->setSize(PaymentScreen_pnlError, 540, 260);
    PaymentScreen_pnlError->fn->setScheme(PaymentScreen_pnlError, &KeyboardBack);
    root0->fn->addChild(root0, (leWidget*)PaymentScreen_pnlError);

    PaymentScreen_LabelWidget_2_0_0 = leLabelWidget_New();
    PaymentScreen_LabelWidget_2_0_0->fn->setPosition(PaymentScreen_LabelWidget_2_0_0, -1, 70);
    PaymentScreen_LabelWidget_2_0_0->fn->setSize(PaymentScreen_LabelWidget_2_0_0, 540, 75);
    PaymentScreen_LabelWidget_2_0_0->fn->setScheme(PaymentScreen_LabelWidget_2_0_0, &KeyboardBack);
    PaymentScreen_LabelWidget_2_0_0->fn->setBackgroundType(PaymentScreen_LabelWidget_2_0_0, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_LabelWidget_2_0_0->fn->setHAlignment(PaymentScreen_LabelWidget_2_0_0, LE_HALIGN_CENTER);
    PaymentScreen_LabelWidget_2_0_0->fn->setString(PaymentScreen_LabelWidget_2_0_0, (leString*)&string_strErrorOccured);
    PaymentScreen_pnlError->fn->addChild(PaymentScreen_pnlError, (leWidget*)PaymentScreen_LabelWidget_2_0_0);

    PaymentScreen_LabelWidget_4_0_0 = leLabelWidget_New();
    PaymentScreen_LabelWidget_4_0_0->fn->setPosition(PaymentScreen_LabelWidget_4_0_0, 174, 33);
    PaymentScreen_LabelWidget_4_0_0->fn->setSize(PaymentScreen_LabelWidget_4_0_0, 170, 44);
    PaymentScreen_LabelWidget_4_0_0->fn->setScheme(PaymentScreen_LabelWidget_4_0_0, &KeyboardBack);
    PaymentScreen_LabelWidget_4_0_0->fn->setBackgroundType(PaymentScreen_LabelWidget_4_0_0, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_LabelWidget_4_0_0->fn->setHAlignment(PaymentScreen_LabelWidget_4_0_0, LE_HALIGN_CENTER);
    PaymentScreen_LabelWidget_4_0_0->fn->setString(PaymentScreen_LabelWidget_4_0_0, (leString*)&string_strSorry);
    PaymentScreen_pnlError->fn->addChild(PaymentScreen_pnlError, (leWidget*)PaymentScreen_LabelWidget_4_0_0);

    PaymentScreen_btnErrorBack = leButtonWidget_New();
    PaymentScreen_btnErrorBack->fn->setPosition(PaymentScreen_btnErrorBack, 180, 154);
    PaymentScreen_btnErrorBack->fn->setSize(PaymentScreen_btnErrorBack, 164, 72);
    PaymentScreen_btnErrorBack->fn->setBackgroundType(PaymentScreen_btnErrorBack, LE_WIDGET_BACKGROUND_NONE);
    PaymentScreen_btnErrorBack->fn->setBorderType(PaymentScreen_btnErrorBack, LE_WIDGET_BORDER_NONE);
    PaymentScreen_btnErrorBack->fn->setReleasedEventCallback(PaymentScreen_btnErrorBack, event_PaymentScreen_btnErrorBack_OnReleased);
    PaymentScreen_pnlError->fn->addChild(PaymentScreen_pnlError, (leWidget*)PaymentScreen_btnErrorBack);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    PaymentScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_PaymentScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    PaymentScreen_OnUpdate(); // raise event
}

void screenHide_PaymentScreen(void)
{
    PaymentScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    PaymentScreen_BackgroundPanel = NULL;
    PaymentScreen_btnBack = NULL;
    PaymentScreen_imgMGS = NULL;
    PaymentScreen_lblCheckInOut = NULL;
    PaymentScreen_LabelWidget_1 = NULL;
    PaymentScreen_ImageWidget_1_0 = NULL;
    PaymentScreen_pnlRoomInfo = NULL;
    PaymentScreen_pnlChargesInfo = NULL;
    PaymentScreen_ImageWidget_2 = NULL;
    PaymentScreen_btnPayCard = NULL;
    PaymentScreen_btnPayTap = NULL;
    PaymentScreen_pnlError = NULL;
    PaymentScreen_lblBedDetails = NULL;
    PaymentScreen_lblStayDates = NULL;
    PaymentScreen_lblRoomInfo = NULL;
    PaymentScreen_lblNeededToday = NULL;
    PaymentScreen_lblTotal = NULL;
    PaymentScreen_lblAmount = NULL;
    PaymentScreen_lblBookingPaid = NULL;
    PaymentScreen_pnlDeposit = NULL;
    PaymentScreen_pnlLateCheckoutCost = NULL;
    PaymentScreen_pnlBalcony = NULL;
    PaymentScreen_pnlBreakfast = NULL;
    PaymentScreen_lblDeposit = NULL;
    PaymentScreen_lblDepositAmt = NULL;
    PaymentScreen_lblLateCheckout = NULL;
    PaymentScreen_lblLateCheckoutAmt = NULL;
    PaymentScreen_lblBalcony = NULL;
    PaymentScreen_lblBalconyAmt = NULL;
    PaymentScreen_lblBalcony = NULL;
    PaymentScreen_lblBalconyAmt = NULL;
    PaymentScreen_LabelWidget_2_0_0 = NULL;
    PaymentScreen_LabelWidget_4_0_0 = NULL;
    PaymentScreen_btnErrorBack = NULL;


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
        default:
        {
            return NULL;
        }
    }
}

