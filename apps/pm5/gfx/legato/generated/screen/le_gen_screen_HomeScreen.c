#include "gfx/legato/generated/screen/le_gen_screen_HomeScreen.h"

// screen member widget declarations
static leWidget* root0;

leWidget* HomeScreen_Home;
leWidget* HomeScreen_pnlVisibleArea;
leWidget* HomeScreen_Side_Nav;
leWidget* HomeScreen_Bottom_Buttons;
leWidget* HomeScreen_Tabs;
leWidget* HomeScreen_pnlPAPanels;
leImageWidget* HomeScreen_imgPA0Panel;
leImageWidget* HomeScreen_imgPA1Panel;
leImageWidget* HomeScreen_imgPA2Panel;
leImageWidget* HomeScreen_imgPA3Panel;
leImageWidget* HomeScreen_imgPA4Panel;
leLineWidget* HomeScreen_ln1;
leLineWidget* HomeScreen_ln2;
leLineWidget* HomeScreen_ln3;
leImageWidget* HomeScreen_imgPassFail;
leLabelWidget* HomeScreen_lbPA0;
leLabelWidget* HomeScreen_lblPassedCount_0;
leLabelWidget* HomeScreen_lblFailedCount_0;
leLabelWidget* HomeScreen_lblPassed_0;
leLabelWidget* HomeScreen_lblFailed_0;
leLabelWidget* HomeScreen_lblDevice;
leLabelWidget* HomeScreen_lblEnv;
leLabelWidget* HomeScreen_lblSocket;
leLabelWidget* HomeScreen_lblDevice_0;
leLabelWidget* HomeScreen_lblEnv_0;
leLabelWidget* HomeScreen_lblSocket_0;
leImageWidget* HomeScreen_imgPassFail_0;
leLabelWidget* HomeScreen_lbPA1;
leLabelWidget* HomeScreen_lblPassedCount_1;
leLabelWidget* HomeScreen_lblFailedCount_1;
leLabelWidget* HomeScreen_lblPassed_1;
leLabelWidget* HomeScreen_lblFailed_1;
leLabelWidget* HomeScreen_lblEnv_1;
leLabelWidget* HomeScreen_lblSocket_1;
leLabelWidget* HomeScreen_lblDevice_1;
leLineWidget* HomeScreen_ln3_0;
leLineWidget* HomeScreen_ln2_0;
leLineWidget* HomeScreen_ln1_0;
leLabelWidget* HomeScreen_lblDevice_1;
leLabelWidget* HomeScreen_lblEnv_1;
leLabelWidget* HomeScreen_lblSocket_1;
leImageWidget* HomeScreen_imgPassFail_1;
leLabelWidget* HomeScreen_lbPA2;
leLabelWidget* HomeScreen_lblPassedCount_2;
leLabelWidget* HomeScreen_lblFailedCount_2;
leLabelWidget* HomeScreen_lblPassed_2;
leLabelWidget* HomeScreen_lblFailed_2;
leLabelWidget* HomeScreen_lblEnv_2;
leLabelWidget* HomeScreen_lblSocket_2;
leLabelWidget* HomeScreen_lblDevice_2;
leLineWidget* HomeScreen_ln3_1;
leLineWidget* HomeScreen_ln2_1;
leLineWidget* HomeScreen_ln1_1;
leLabelWidget* HomeScreen_lblDevice_2;
leLabelWidget* HomeScreen_lblEnv_2;
leLabelWidget* HomeScreen_lblSocket_2;
leImageWidget* HomeScreen_imgPassFail_2;
leLabelWidget* HomeScreen_lbPA3;
leLabelWidget* HomeScreen_lblPassedCount_3;
leLabelWidget* HomeScreen_lblFailedCount_3;
leLabelWidget* HomeScreen_lblPassed_3;
leLabelWidget* HomeScreen_lblFailed_3;
leLabelWidget* HomeScreen_lblEnv_3;
leLabelWidget* HomeScreen_lblSocket_3;
leLabelWidget* HomeScreen_lblDevice_3;
leLineWidget* HomeScreen_ln3_2;
leLineWidget* HomeScreen_ln2_2;
leLineWidget* HomeScreen_ln1_2;
leLabelWidget* HomeScreen_lblDevice_3;
leLabelWidget* HomeScreen_lblEnv_3;
leLabelWidget* HomeScreen_lblSocket_3;
leImageWidget* HomeScreen_imgPassFail_3;
leLabelWidget* HomeScreen_lbPA4;
leLabelWidget* HomeScreen_lblPassedCount_4;
leLabelWidget* HomeScreen_lblFailedCount_4;
leLabelWidget* HomeScreen_lblPassed_4;
leLabelWidget* HomeScreen_lblFailed_4;
leLabelWidget* HomeScreen_lblEnv_4;
leLabelWidget* HomeScreen_lblSocket_4;
leLabelWidget* HomeScreen_lblDevice_4;
leLineWidget* HomeScreen_ln3_3;
leLineWidget* HomeScreen_ln2_3;
leLineWidget* HomeScreen_ln1_3;
leLabelWidget* HomeScreen_lblDevice_4;
leLabelWidget* HomeScreen_lblEnv_4;
leLabelWidget* HomeScreen_lblSocket_4;
leWidget* HomeScreen_pnlMenu;
leImageWidget* HomeScreen_imgLogo;
leButtonWidget* HomeScreen_btnPower;
leButtonWidget* HomeScreen_btnProgram;
leButtonWidget* HomeScreen_btnMenu;
leButtonWidget* HomeScreen_btnSettings;
leButtonWidget* HomeScreen_btnHome;
leButtonWidget* HomeScreen_btnVerify;
leButtonWidget* HomeScreen_btnBlank;
leButtonWidget* HomeScreen_btnVerify_0;
leButtonWidget* HomeScreen_btnVerify_1;
leButtonWidget* HomeScreen_btnVerify_1_0;
leButtonWidget* HomeScreen_btnPA0Tab;
leButtonWidget* HomeScreen_btnPA1Tab;
leButtonWidget* HomeScreen_btnPA2Tab;
leButtonWidget* HomeScreen_btnPA3Tab;
leButtonWidget* HomeScreen_btnAllPAsTab;
leImageWidget* HomeScreen_PA0Tab;
leImageWidget* HomeScreen_PA1Tab;
leImageWidget* HomeScreen_PA2Tab;
leImageWidget* HomeScreen_PA3Tab;
leImageWidget* HomeScreen_AllPAsTab;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_HomeScreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_HomeScreen(void)
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

    HomeScreen_Home = leWidget_New();
    HomeScreen_Home->fn->setPosition(HomeScreen_Home, 0, 0);
    HomeScreen_Home->fn->setSize(HomeScreen_Home, 800, 480);
    HomeScreen_Home->fn->setScheme(HomeScreen_Home, &PM5Scheme);
    root0->fn->addChild(root0, (leWidget*)HomeScreen_Home);

    HomeScreen_pnlVisibleArea = leWidget_New();
    HomeScreen_pnlVisibleArea->fn->setPosition(HomeScreen_pnlVisibleArea, 96, 68);
    HomeScreen_pnlVisibleArea->fn->setSize(HomeScreen_pnlVisibleArea, 689, 326);
    HomeScreen_pnlVisibleArea->fn->setBackgroundType(HomeScreen_pnlVisibleArea, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_Home->fn->addChild(HomeScreen_Home, (leWidget*)HomeScreen_pnlVisibleArea);

    HomeScreen_pnlPAPanels = leWidget_New();
    HomeScreen_pnlPAPanels->fn->setPosition(HomeScreen_pnlPAPanels, 0, 0);
    HomeScreen_pnlPAPanels->fn->setSize(HomeScreen_pnlPAPanels, 708, 550);
    HomeScreen_pnlPAPanels->fn->setBackgroundType(HomeScreen_pnlPAPanels, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_pnlVisibleArea->fn->addChild(HomeScreen_pnlVisibleArea, (leWidget*)HomeScreen_pnlPAPanels);

    HomeScreen_imgPA0Panel = leImageWidget_New();
    HomeScreen_imgPA0Panel->fn->setPosition(HomeScreen_imgPA0Panel, 5, 0);
    HomeScreen_imgPA0Panel->fn->setSize(HomeScreen_imgPA0Panel, 680, 101);
    HomeScreen_imgPA0Panel->fn->setEnabled(HomeScreen_imgPA0Panel, LE_FALSE);
    HomeScreen_imgPA0Panel->fn->setBackgroundType(HomeScreen_imgPA0Panel, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPA0Panel->fn->setBorderType(HomeScreen_imgPA0Panel, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPA0Panel->fn->setImage(HomeScreen_imgPA0Panel, (leImage*)&panel_back);
    HomeScreen_pnlPAPanels->fn->addChild(HomeScreen_pnlPAPanels, (leWidget*)HomeScreen_imgPA0Panel);

    HomeScreen_ln1 = leLineWidget_New();
    HomeScreen_ln1->fn->setPosition(HomeScreen_ln1, 440, 75);
    HomeScreen_ln1->fn->setSize(HomeScreen_ln1, 100, 3);
    HomeScreen_ln1->fn->setScheme(HomeScreen_ln1, &GrayScheme);
    HomeScreen_ln1->fn->setBackgroundType(HomeScreen_ln1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln1->fn->setStartPoint(HomeScreen_ln1, 0, 1);
    HomeScreen_ln1->fn->setEndPoint(HomeScreen_ln1, 100, 1);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_ln1);

    HomeScreen_ln2 = leLineWidget_New();
    HomeScreen_ln2->fn->setPosition(HomeScreen_ln2, 440, 47);
    HomeScreen_ln2->fn->setSize(HomeScreen_ln2, 100, 3);
    HomeScreen_ln2->fn->setScheme(HomeScreen_ln2, &GrayScheme);
    HomeScreen_ln2->fn->setBackgroundType(HomeScreen_ln2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln2->fn->setStartPoint(HomeScreen_ln2, 0, 1);
    HomeScreen_ln2->fn->setEndPoint(HomeScreen_ln2, 100, 1);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_ln2);

    HomeScreen_ln3 = leLineWidget_New();
    HomeScreen_ln3->fn->setPosition(HomeScreen_ln3, 440, 20);
    HomeScreen_ln3->fn->setSize(HomeScreen_ln3, 100, 3);
    HomeScreen_ln3->fn->setScheme(HomeScreen_ln3, &GrayScheme);
    HomeScreen_ln3->fn->setBackgroundType(HomeScreen_ln3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln3->fn->setStartPoint(HomeScreen_ln3, 0, 1);
    HomeScreen_ln3->fn->setEndPoint(HomeScreen_ln3, 100, 1);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_ln3);

    HomeScreen_imgPassFail = leImageWidget_New();
    HomeScreen_imgPassFail->fn->setPosition(HomeScreen_imgPassFail, 180, 20);
    HomeScreen_imgPassFail->fn->setSize(HomeScreen_imgPassFail, 25, 61);
    HomeScreen_imgPassFail->fn->setBackgroundType(HomeScreen_imgPassFail, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPassFail->fn->setBorderType(HomeScreen_imgPassFail, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPassFail->fn->setImage(HomeScreen_imgPassFail, (leImage*)&passfail_back);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_imgPassFail);

    HomeScreen_lbPA0 = leLabelWidget_New();
    HomeScreen_lbPA0->fn->setPosition(HomeScreen_lbPA0, 14, 34);
    HomeScreen_lbPA0->fn->setSize(HomeScreen_lbPA0, 64, 34);
    HomeScreen_lbPA0->fn->setScheme(HomeScreen_lbPA0, &WhiteScheme);
    HomeScreen_lbPA0->fn->setBackgroundType(HomeScreen_lbPA0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lbPA0->fn->setHAlignment(HomeScreen_lbPA0, LE_HALIGN_CENTER);
    HomeScreen_lbPA0->fn->setString(HomeScreen_lbPA0, (leString*)&string_strPA0Big);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lbPA0);

    HomeScreen_lblPassedCount_0 = leLabelWidget_New();
    HomeScreen_lblPassedCount_0->fn->setPosition(HomeScreen_lblPassedCount_0, 118, 19);
    HomeScreen_lblPassedCount_0->fn->setSize(HomeScreen_lblPassedCount_0, 56, 29);
    HomeScreen_lblPassedCount_0->fn->setScheme(HomeScreen_lblPassedCount_0, &WhiteScheme);
    HomeScreen_lblPassedCount_0->fn->setBackgroundType(HomeScreen_lblPassedCount_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassedCount_0->fn->setHAlignment(HomeScreen_lblPassedCount_0, LE_HALIGN_RIGHT);
    HomeScreen_lblPassedCount_0->fn->setString(HomeScreen_lblPassedCount_0, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblPassedCount_0);

    HomeScreen_lblFailedCount_0 = leLabelWidget_New();
    HomeScreen_lblFailedCount_0->fn->setPosition(HomeScreen_lblFailedCount_0, 118, 48);
    HomeScreen_lblFailedCount_0->fn->setSize(HomeScreen_lblFailedCount_0, 56, 29);
    HomeScreen_lblFailedCount_0->fn->setScheme(HomeScreen_lblFailedCount_0, &WhiteScheme);
    HomeScreen_lblFailedCount_0->fn->setBackgroundType(HomeScreen_lblFailedCount_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailedCount_0->fn->setHAlignment(HomeScreen_lblFailedCount_0, LE_HALIGN_RIGHT);
    HomeScreen_lblFailedCount_0->fn->setString(HomeScreen_lblFailedCount_0, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblFailedCount_0);

    HomeScreen_lblPassed_0 = leLabelWidget_New();
    HomeScreen_lblPassed_0->fn->setPosition(HomeScreen_lblPassed_0, 214, 19);
    HomeScreen_lblPassed_0->fn->setSize(HomeScreen_lblPassed_0, 88, 29);
    HomeScreen_lblPassed_0->fn->setBackgroundType(HomeScreen_lblPassed_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassed_0->fn->setString(HomeScreen_lblPassed_0, (leString*)&string_strPassed);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblPassed_0);

    HomeScreen_lblFailed_0 = leLabelWidget_New();
    HomeScreen_lblFailed_0->fn->setPosition(HomeScreen_lblFailed_0, 214, 48);
    HomeScreen_lblFailed_0->fn->setSize(HomeScreen_lblFailed_0, 88, 29);
    HomeScreen_lblFailed_0->fn->setBackgroundType(HomeScreen_lblFailed_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailed_0->fn->setString(HomeScreen_lblFailed_0, (leString*)&string_strFailed);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblFailed_0);

    HomeScreen_lblDevice = leLabelWidget_New();
    HomeScreen_lblDevice->fn->setPosition(HomeScreen_lblDevice, 326, 8);
    HomeScreen_lblDevice->fn->setScheme(HomeScreen_lblDevice, &GrayScheme);
    HomeScreen_lblDevice->fn->setBackgroundType(HomeScreen_lblDevice, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblDevice->fn->setHAlignment(HomeScreen_lblDevice, LE_HALIGN_RIGHT);
    HomeScreen_lblDevice->fn->setString(HomeScreen_lblDevice, (leString*)&string_strDevice);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblDevice);

    HomeScreen_lblEnv = leLabelWidget_New();
    HomeScreen_lblEnv->fn->setPosition(HomeScreen_lblEnv, 326, 35);
    HomeScreen_lblEnv->fn->setScheme(HomeScreen_lblEnv, &GrayScheme);
    HomeScreen_lblEnv->fn->setBackgroundType(HomeScreen_lblEnv, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblEnv->fn->setHAlignment(HomeScreen_lblEnv, LE_HALIGN_RIGHT);
    HomeScreen_lblEnv->fn->setString(HomeScreen_lblEnv, (leString*)&string_strEnv);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblEnv);

    HomeScreen_lblSocket = leLabelWidget_New();
    HomeScreen_lblSocket->fn->setPosition(HomeScreen_lblSocket, 326, 63);
    HomeScreen_lblSocket->fn->setScheme(HomeScreen_lblSocket, &GrayScheme);
    HomeScreen_lblSocket->fn->setBackgroundType(HomeScreen_lblSocket, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblSocket->fn->setHAlignment(HomeScreen_lblSocket, LE_HALIGN_RIGHT);
    HomeScreen_lblSocket->fn->setString(HomeScreen_lblSocket, (leString*)&string_strSocket);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblSocket);

    HomeScreen_lblDevice_0 = leLabelWidget_New();
    HomeScreen_lblDevice_0->fn->setPosition(HomeScreen_lblDevice_0, 550, 8);
    HomeScreen_lblDevice_0->fn->setSize(HomeScreen_lblDevice_0, 120, 25);
    HomeScreen_lblDevice_0->fn->setScheme(HomeScreen_lblDevice_0, &WhiteScheme);
    HomeScreen_lblDevice_0->fn->setString(HomeScreen_lblDevice_0, (leString*)&string_strDefaultDev);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblDevice_0);

    HomeScreen_lblEnv_0 = leLabelWidget_New();
    HomeScreen_lblEnv_0->fn->setPosition(HomeScreen_lblEnv_0, 550, 35);
    HomeScreen_lblEnv_0->fn->setSize(HomeScreen_lblEnv_0, 120, 25);
    HomeScreen_lblEnv_0->fn->setScheme(HomeScreen_lblEnv_0, &WhiteScheme);
    HomeScreen_lblEnv_0->fn->setString(HomeScreen_lblEnv_0, (leString*)&string_strDefaulEnv);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblEnv_0);

    HomeScreen_lblSocket_0 = leLabelWidget_New();
    HomeScreen_lblSocket_0->fn->setPosition(HomeScreen_lblSocket_0, 550, 63);
    HomeScreen_lblSocket_0->fn->setSize(HomeScreen_lblSocket_0, 120, 25);
    HomeScreen_lblSocket_0->fn->setScheme(HomeScreen_lblSocket_0, &WhiteScheme);
    HomeScreen_lblSocket_0->fn->setString(HomeScreen_lblSocket_0, (leString*)&string_strDefaulSocket);
    HomeScreen_imgPA0Panel->fn->addChild(HomeScreen_imgPA0Panel, (leWidget*)HomeScreen_lblSocket_0);

    HomeScreen_imgPA1Panel = leImageWidget_New();
    HomeScreen_imgPA1Panel->fn->setPosition(HomeScreen_imgPA1Panel, 5, 106);
    HomeScreen_imgPA1Panel->fn->setSize(HomeScreen_imgPA1Panel, 680, 101);
    HomeScreen_imgPA1Panel->fn->setEnabled(HomeScreen_imgPA1Panel, LE_FALSE);
    HomeScreen_imgPA1Panel->fn->setBackgroundType(HomeScreen_imgPA1Panel, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPA1Panel->fn->setBorderType(HomeScreen_imgPA1Panel, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPA1Panel->fn->setImage(HomeScreen_imgPA1Panel, (leImage*)&panel_back);
    HomeScreen_pnlPAPanels->fn->addChild(HomeScreen_pnlPAPanels, (leWidget*)HomeScreen_imgPA1Panel);

    HomeScreen_imgPassFail_0 = leImageWidget_New();
    HomeScreen_imgPassFail_0->fn->setPosition(HomeScreen_imgPassFail_0, 180, 20);
    HomeScreen_imgPassFail_0->fn->setSize(HomeScreen_imgPassFail_0, 25, 61);
    HomeScreen_imgPassFail_0->fn->setBackgroundType(HomeScreen_imgPassFail_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPassFail_0->fn->setBorderType(HomeScreen_imgPassFail_0, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPassFail_0->fn->setImage(HomeScreen_imgPassFail_0, (leImage*)&passfail_back);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_imgPassFail_0);

    HomeScreen_lbPA1 = leLabelWidget_New();
    HomeScreen_lbPA1->fn->setPosition(HomeScreen_lbPA1, 14, 34);
    HomeScreen_lbPA1->fn->setSize(HomeScreen_lbPA1, 64, 34);
    HomeScreen_lbPA1->fn->setScheme(HomeScreen_lbPA1, &WhiteScheme);
    HomeScreen_lbPA1->fn->setBackgroundType(HomeScreen_lbPA1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lbPA1->fn->setHAlignment(HomeScreen_lbPA1, LE_HALIGN_CENTER);
    HomeScreen_lbPA1->fn->setString(HomeScreen_lbPA1, (leString*)&string_strPA1Big);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lbPA1);

    HomeScreen_lblPassedCount_1 = leLabelWidget_New();
    HomeScreen_lblPassedCount_1->fn->setPosition(HomeScreen_lblPassedCount_1, 118, 19);
    HomeScreen_lblPassedCount_1->fn->setSize(HomeScreen_lblPassedCount_1, 56, 29);
    HomeScreen_lblPassedCount_1->fn->setScheme(HomeScreen_lblPassedCount_1, &WhiteScheme);
    HomeScreen_lblPassedCount_1->fn->setBackgroundType(HomeScreen_lblPassedCount_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassedCount_1->fn->setHAlignment(HomeScreen_lblPassedCount_1, LE_HALIGN_RIGHT);
    HomeScreen_lblPassedCount_1->fn->setString(HomeScreen_lblPassedCount_1, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblPassedCount_1);

    HomeScreen_lblFailedCount_1 = leLabelWidget_New();
    HomeScreen_lblFailedCount_1->fn->setPosition(HomeScreen_lblFailedCount_1, 118, 48);
    HomeScreen_lblFailedCount_1->fn->setSize(HomeScreen_lblFailedCount_1, 56, 29);
    HomeScreen_lblFailedCount_1->fn->setScheme(HomeScreen_lblFailedCount_1, &WhiteScheme);
    HomeScreen_lblFailedCount_1->fn->setBackgroundType(HomeScreen_lblFailedCount_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailedCount_1->fn->setHAlignment(HomeScreen_lblFailedCount_1, LE_HALIGN_RIGHT);
    HomeScreen_lblFailedCount_1->fn->setString(HomeScreen_lblFailedCount_1, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblFailedCount_1);

    HomeScreen_lblPassed_1 = leLabelWidget_New();
    HomeScreen_lblPassed_1->fn->setPosition(HomeScreen_lblPassed_1, 214, 19);
    HomeScreen_lblPassed_1->fn->setSize(HomeScreen_lblPassed_1, 88, 29);
    HomeScreen_lblPassed_1->fn->setBackgroundType(HomeScreen_lblPassed_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassed_1->fn->setString(HomeScreen_lblPassed_1, (leString*)&string_strPassed);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblPassed_1);

    HomeScreen_lblFailed_1 = leLabelWidget_New();
    HomeScreen_lblFailed_1->fn->setPosition(HomeScreen_lblFailed_1, 214, 48);
    HomeScreen_lblFailed_1->fn->setSize(HomeScreen_lblFailed_1, 88, 29);
    HomeScreen_lblFailed_1->fn->setBackgroundType(HomeScreen_lblFailed_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailed_1->fn->setString(HomeScreen_lblFailed_1, (leString*)&string_strFailed);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblFailed_1);

    HomeScreen_lblEnv_1 = leLabelWidget_New();
    HomeScreen_lblEnv_1->fn->setPosition(HomeScreen_lblEnv_1, 326, 35);
    HomeScreen_lblEnv_1->fn->setScheme(HomeScreen_lblEnv_1, &GrayScheme);
    HomeScreen_lblEnv_1->fn->setBackgroundType(HomeScreen_lblEnv_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblEnv_1->fn->setHAlignment(HomeScreen_lblEnv_1, LE_HALIGN_RIGHT);
    HomeScreen_lblEnv_1->fn->setString(HomeScreen_lblEnv_1, (leString*)&string_strEnv);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblEnv_1);

    HomeScreen_lblSocket_1 = leLabelWidget_New();
    HomeScreen_lblSocket_1->fn->setPosition(HomeScreen_lblSocket_1, 326, 63);
    HomeScreen_lblSocket_1->fn->setScheme(HomeScreen_lblSocket_1, &GrayScheme);
    HomeScreen_lblSocket_1->fn->setBackgroundType(HomeScreen_lblSocket_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblSocket_1->fn->setHAlignment(HomeScreen_lblSocket_1, LE_HALIGN_RIGHT);
    HomeScreen_lblSocket_1->fn->setString(HomeScreen_lblSocket_1, (leString*)&string_strSocket);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblSocket_1);

    HomeScreen_lblDevice_1 = leLabelWidget_New();
    HomeScreen_lblDevice_1->fn->setPosition(HomeScreen_lblDevice_1, 326, 8);
    HomeScreen_lblDevice_1->fn->setScheme(HomeScreen_lblDevice_1, &GrayScheme);
    HomeScreen_lblDevice_1->fn->setBackgroundType(HomeScreen_lblDevice_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblDevice_1->fn->setHAlignment(HomeScreen_lblDevice_1, LE_HALIGN_RIGHT);
    HomeScreen_lblDevice_1->fn->setString(HomeScreen_lblDevice_1, (leString*)&string_strDevice);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblDevice_1);

    HomeScreen_ln3_0 = leLineWidget_New();
    HomeScreen_ln3_0->fn->setPosition(HomeScreen_ln3_0, 440, 20);
    HomeScreen_ln3_0->fn->setSize(HomeScreen_ln3_0, 100, 3);
    HomeScreen_ln3_0->fn->setScheme(HomeScreen_ln3_0, &GrayScheme);
    HomeScreen_ln3_0->fn->setBackgroundType(HomeScreen_ln3_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln3_0->fn->setStartPoint(HomeScreen_ln3_0, 0, 1);
    HomeScreen_ln3_0->fn->setEndPoint(HomeScreen_ln3_0, 100, 1);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_ln3_0);

    HomeScreen_ln2_0 = leLineWidget_New();
    HomeScreen_ln2_0->fn->setPosition(HomeScreen_ln2_0, 440, 47);
    HomeScreen_ln2_0->fn->setSize(HomeScreen_ln2_0, 100, 3);
    HomeScreen_ln2_0->fn->setScheme(HomeScreen_ln2_0, &GrayScheme);
    HomeScreen_ln2_0->fn->setBackgroundType(HomeScreen_ln2_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln2_0->fn->setStartPoint(HomeScreen_ln2_0, 0, 1);
    HomeScreen_ln2_0->fn->setEndPoint(HomeScreen_ln2_0, 100, 1);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_ln2_0);

    HomeScreen_ln1_0 = leLineWidget_New();
    HomeScreen_ln1_0->fn->setPosition(HomeScreen_ln1_0, 440, 75);
    HomeScreen_ln1_0->fn->setSize(HomeScreen_ln1_0, 100, 3);
    HomeScreen_ln1_0->fn->setScheme(HomeScreen_ln1_0, &GrayScheme);
    HomeScreen_ln1_0->fn->setBackgroundType(HomeScreen_ln1_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln1_0->fn->setStartPoint(HomeScreen_ln1_0, 0, 1);
    HomeScreen_ln1_0->fn->setEndPoint(HomeScreen_ln1_0, 100, 1);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_ln1_0);

    HomeScreen_lblDevice_1 = leLabelWidget_New();
    HomeScreen_lblDevice_1->fn->setPosition(HomeScreen_lblDevice_1, 550, 8);
    HomeScreen_lblDevice_1->fn->setSize(HomeScreen_lblDevice_1, 120, 25);
    HomeScreen_lblDevice_1->fn->setScheme(HomeScreen_lblDevice_1, &WhiteScheme);
    HomeScreen_lblDevice_1->fn->setString(HomeScreen_lblDevice_1, (leString*)&string_strDefaultDev);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblDevice_1);

    HomeScreen_lblEnv_1 = leLabelWidget_New();
    HomeScreen_lblEnv_1->fn->setPosition(HomeScreen_lblEnv_1, 550, 35);
    HomeScreen_lblEnv_1->fn->setSize(HomeScreen_lblEnv_1, 120, 25);
    HomeScreen_lblEnv_1->fn->setScheme(HomeScreen_lblEnv_1, &WhiteScheme);
    HomeScreen_lblEnv_1->fn->setString(HomeScreen_lblEnv_1, (leString*)&string_strDefaulEnv);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblEnv_1);

    HomeScreen_lblSocket_1 = leLabelWidget_New();
    HomeScreen_lblSocket_1->fn->setPosition(HomeScreen_lblSocket_1, 550, 63);
    HomeScreen_lblSocket_1->fn->setSize(HomeScreen_lblSocket_1, 120, 25);
    HomeScreen_lblSocket_1->fn->setScheme(HomeScreen_lblSocket_1, &WhiteScheme);
    HomeScreen_lblSocket_1->fn->setString(HomeScreen_lblSocket_1, (leString*)&string_strDefaulSocket);
    HomeScreen_imgPA1Panel->fn->addChild(HomeScreen_imgPA1Panel, (leWidget*)HomeScreen_lblSocket_1);

    HomeScreen_imgPA2Panel = leImageWidget_New();
    HomeScreen_imgPA2Panel->fn->setPosition(HomeScreen_imgPA2Panel, 5, 212);
    HomeScreen_imgPA2Panel->fn->setSize(HomeScreen_imgPA2Panel, 680, 101);
    HomeScreen_imgPA2Panel->fn->setEnabled(HomeScreen_imgPA2Panel, LE_FALSE);
    HomeScreen_imgPA2Panel->fn->setBackgroundType(HomeScreen_imgPA2Panel, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPA2Panel->fn->setBorderType(HomeScreen_imgPA2Panel, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPA2Panel->fn->setImage(HomeScreen_imgPA2Panel, (leImage*)&panel_back);
    HomeScreen_pnlPAPanels->fn->addChild(HomeScreen_pnlPAPanels, (leWidget*)HomeScreen_imgPA2Panel);

    HomeScreen_imgPassFail_1 = leImageWidget_New();
    HomeScreen_imgPassFail_1->fn->setPosition(HomeScreen_imgPassFail_1, 180, 20);
    HomeScreen_imgPassFail_1->fn->setSize(HomeScreen_imgPassFail_1, 25, 61);
    HomeScreen_imgPassFail_1->fn->setBackgroundType(HomeScreen_imgPassFail_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPassFail_1->fn->setBorderType(HomeScreen_imgPassFail_1, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPassFail_1->fn->setImage(HomeScreen_imgPassFail_1, (leImage*)&passfail_back);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_imgPassFail_1);

    HomeScreen_lbPA2 = leLabelWidget_New();
    HomeScreen_lbPA2->fn->setPosition(HomeScreen_lbPA2, 14, 34);
    HomeScreen_lbPA2->fn->setSize(HomeScreen_lbPA2, 64, 34);
    HomeScreen_lbPA2->fn->setScheme(HomeScreen_lbPA2, &WhiteScheme);
    HomeScreen_lbPA2->fn->setBackgroundType(HomeScreen_lbPA2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lbPA2->fn->setHAlignment(HomeScreen_lbPA2, LE_HALIGN_CENTER);
    HomeScreen_lbPA2->fn->setString(HomeScreen_lbPA2, (leString*)&string_strPA2Big);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lbPA2);

    HomeScreen_lblPassedCount_2 = leLabelWidget_New();
    HomeScreen_lblPassedCount_2->fn->setPosition(HomeScreen_lblPassedCount_2, 118, 19);
    HomeScreen_lblPassedCount_2->fn->setSize(HomeScreen_lblPassedCount_2, 56, 29);
    HomeScreen_lblPassedCount_2->fn->setScheme(HomeScreen_lblPassedCount_2, &WhiteScheme);
    HomeScreen_lblPassedCount_2->fn->setBackgroundType(HomeScreen_lblPassedCount_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassedCount_2->fn->setHAlignment(HomeScreen_lblPassedCount_2, LE_HALIGN_RIGHT);
    HomeScreen_lblPassedCount_2->fn->setString(HomeScreen_lblPassedCount_2, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblPassedCount_2);

    HomeScreen_lblFailedCount_2 = leLabelWidget_New();
    HomeScreen_lblFailedCount_2->fn->setPosition(HomeScreen_lblFailedCount_2, 118, 48);
    HomeScreen_lblFailedCount_2->fn->setSize(HomeScreen_lblFailedCount_2, 56, 29);
    HomeScreen_lblFailedCount_2->fn->setScheme(HomeScreen_lblFailedCount_2, &WhiteScheme);
    HomeScreen_lblFailedCount_2->fn->setBackgroundType(HomeScreen_lblFailedCount_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailedCount_2->fn->setHAlignment(HomeScreen_lblFailedCount_2, LE_HALIGN_RIGHT);
    HomeScreen_lblFailedCount_2->fn->setString(HomeScreen_lblFailedCount_2, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblFailedCount_2);

    HomeScreen_lblPassed_2 = leLabelWidget_New();
    HomeScreen_lblPassed_2->fn->setPosition(HomeScreen_lblPassed_2, 214, 19);
    HomeScreen_lblPassed_2->fn->setSize(HomeScreen_lblPassed_2, 88, 29);
    HomeScreen_lblPassed_2->fn->setBackgroundType(HomeScreen_lblPassed_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassed_2->fn->setString(HomeScreen_lblPassed_2, (leString*)&string_strPassed);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblPassed_2);

    HomeScreen_lblFailed_2 = leLabelWidget_New();
    HomeScreen_lblFailed_2->fn->setPosition(HomeScreen_lblFailed_2, 214, 48);
    HomeScreen_lblFailed_2->fn->setSize(HomeScreen_lblFailed_2, 88, 29);
    HomeScreen_lblFailed_2->fn->setBackgroundType(HomeScreen_lblFailed_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailed_2->fn->setString(HomeScreen_lblFailed_2, (leString*)&string_strFailed);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblFailed_2);

    HomeScreen_lblEnv_2 = leLabelWidget_New();
    HomeScreen_lblEnv_2->fn->setPosition(HomeScreen_lblEnv_2, 326, 35);
    HomeScreen_lblEnv_2->fn->setScheme(HomeScreen_lblEnv_2, &GrayScheme);
    HomeScreen_lblEnv_2->fn->setBackgroundType(HomeScreen_lblEnv_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblEnv_2->fn->setHAlignment(HomeScreen_lblEnv_2, LE_HALIGN_RIGHT);
    HomeScreen_lblEnv_2->fn->setString(HomeScreen_lblEnv_2, (leString*)&string_strEnv);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblEnv_2);

    HomeScreen_lblSocket_2 = leLabelWidget_New();
    HomeScreen_lblSocket_2->fn->setPosition(HomeScreen_lblSocket_2, 326, 63);
    HomeScreen_lblSocket_2->fn->setScheme(HomeScreen_lblSocket_2, &GrayScheme);
    HomeScreen_lblSocket_2->fn->setBackgroundType(HomeScreen_lblSocket_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblSocket_2->fn->setHAlignment(HomeScreen_lblSocket_2, LE_HALIGN_RIGHT);
    HomeScreen_lblSocket_2->fn->setString(HomeScreen_lblSocket_2, (leString*)&string_strSocket);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblSocket_2);

    HomeScreen_lblDevice_2 = leLabelWidget_New();
    HomeScreen_lblDevice_2->fn->setPosition(HomeScreen_lblDevice_2, 326, 8);
    HomeScreen_lblDevice_2->fn->setScheme(HomeScreen_lblDevice_2, &GrayScheme);
    HomeScreen_lblDevice_2->fn->setBackgroundType(HomeScreen_lblDevice_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblDevice_2->fn->setHAlignment(HomeScreen_lblDevice_2, LE_HALIGN_RIGHT);
    HomeScreen_lblDevice_2->fn->setString(HomeScreen_lblDevice_2, (leString*)&string_strDevice);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblDevice_2);

    HomeScreen_ln3_1 = leLineWidget_New();
    HomeScreen_ln3_1->fn->setPosition(HomeScreen_ln3_1, 440, 20);
    HomeScreen_ln3_1->fn->setSize(HomeScreen_ln3_1, 100, 3);
    HomeScreen_ln3_1->fn->setScheme(HomeScreen_ln3_1, &GrayScheme);
    HomeScreen_ln3_1->fn->setBackgroundType(HomeScreen_ln3_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln3_1->fn->setStartPoint(HomeScreen_ln3_1, 0, 1);
    HomeScreen_ln3_1->fn->setEndPoint(HomeScreen_ln3_1, 100, 1);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_ln3_1);

    HomeScreen_ln2_1 = leLineWidget_New();
    HomeScreen_ln2_1->fn->setPosition(HomeScreen_ln2_1, 440, 47);
    HomeScreen_ln2_1->fn->setSize(HomeScreen_ln2_1, 100, 3);
    HomeScreen_ln2_1->fn->setScheme(HomeScreen_ln2_1, &GrayScheme);
    HomeScreen_ln2_1->fn->setBackgroundType(HomeScreen_ln2_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln2_1->fn->setStartPoint(HomeScreen_ln2_1, 0, 1);
    HomeScreen_ln2_1->fn->setEndPoint(HomeScreen_ln2_1, 100, 1);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_ln2_1);

    HomeScreen_ln1_1 = leLineWidget_New();
    HomeScreen_ln1_1->fn->setPosition(HomeScreen_ln1_1, 440, 75);
    HomeScreen_ln1_1->fn->setSize(HomeScreen_ln1_1, 100, 3);
    HomeScreen_ln1_1->fn->setScheme(HomeScreen_ln1_1, &GrayScheme);
    HomeScreen_ln1_1->fn->setBackgroundType(HomeScreen_ln1_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln1_1->fn->setStartPoint(HomeScreen_ln1_1, 0, 1);
    HomeScreen_ln1_1->fn->setEndPoint(HomeScreen_ln1_1, 100, 1);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_ln1_1);

    HomeScreen_lblDevice_2 = leLabelWidget_New();
    HomeScreen_lblDevice_2->fn->setPosition(HomeScreen_lblDevice_2, 550, 8);
    HomeScreen_lblDevice_2->fn->setSize(HomeScreen_lblDevice_2, 120, 25);
    HomeScreen_lblDevice_2->fn->setScheme(HomeScreen_lblDevice_2, &WhiteScheme);
    HomeScreen_lblDevice_2->fn->setString(HomeScreen_lblDevice_2, (leString*)&string_strDefaultDev);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblDevice_2);

    HomeScreen_lblEnv_2 = leLabelWidget_New();
    HomeScreen_lblEnv_2->fn->setPosition(HomeScreen_lblEnv_2, 550, 35);
    HomeScreen_lblEnv_2->fn->setSize(HomeScreen_lblEnv_2, 120, 25);
    HomeScreen_lblEnv_2->fn->setScheme(HomeScreen_lblEnv_2, &WhiteScheme);
    HomeScreen_lblEnv_2->fn->setString(HomeScreen_lblEnv_2, (leString*)&string_strDefaulEnv);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblEnv_2);

    HomeScreen_lblSocket_2 = leLabelWidget_New();
    HomeScreen_lblSocket_2->fn->setPosition(HomeScreen_lblSocket_2, 550, 63);
    HomeScreen_lblSocket_2->fn->setSize(HomeScreen_lblSocket_2, 120, 25);
    HomeScreen_lblSocket_2->fn->setScheme(HomeScreen_lblSocket_2, &WhiteScheme);
    HomeScreen_lblSocket_2->fn->setString(HomeScreen_lblSocket_2, (leString*)&string_strDefaulSocket);
    HomeScreen_imgPA2Panel->fn->addChild(HomeScreen_imgPA2Panel, (leWidget*)HomeScreen_lblSocket_2);

    HomeScreen_imgPA3Panel = leImageWidget_New();
    HomeScreen_imgPA3Panel->fn->setPosition(HomeScreen_imgPA3Panel, 5, 318);
    HomeScreen_imgPA3Panel->fn->setSize(HomeScreen_imgPA3Panel, 680, 101);
    HomeScreen_imgPA3Panel->fn->setEnabled(HomeScreen_imgPA3Panel, LE_FALSE);
    HomeScreen_imgPA3Panel->fn->setBackgroundType(HomeScreen_imgPA3Panel, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPA3Panel->fn->setBorderType(HomeScreen_imgPA3Panel, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPA3Panel->fn->setImage(HomeScreen_imgPA3Panel, (leImage*)&panel_back);
    HomeScreen_pnlPAPanels->fn->addChild(HomeScreen_pnlPAPanels, (leWidget*)HomeScreen_imgPA3Panel);

    HomeScreen_imgPassFail_2 = leImageWidget_New();
    HomeScreen_imgPassFail_2->fn->setPosition(HomeScreen_imgPassFail_2, 180, 20);
    HomeScreen_imgPassFail_2->fn->setSize(HomeScreen_imgPassFail_2, 25, 61);
    HomeScreen_imgPassFail_2->fn->setBackgroundType(HomeScreen_imgPassFail_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPassFail_2->fn->setBorderType(HomeScreen_imgPassFail_2, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPassFail_2->fn->setImage(HomeScreen_imgPassFail_2, (leImage*)&passfail_back);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_imgPassFail_2);

    HomeScreen_lbPA3 = leLabelWidget_New();
    HomeScreen_lbPA3->fn->setPosition(HomeScreen_lbPA3, 14, 34);
    HomeScreen_lbPA3->fn->setSize(HomeScreen_lbPA3, 64, 34);
    HomeScreen_lbPA3->fn->setBackgroundType(HomeScreen_lbPA3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lbPA3->fn->setHAlignment(HomeScreen_lbPA3, LE_HALIGN_CENTER);
    HomeScreen_lbPA3->fn->setString(HomeScreen_lbPA3, (leString*)&string_strPA3Big);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lbPA3);

    HomeScreen_lblPassedCount_3 = leLabelWidget_New();
    HomeScreen_lblPassedCount_3->fn->setPosition(HomeScreen_lblPassedCount_3, 118, 19);
    HomeScreen_lblPassedCount_3->fn->setSize(HomeScreen_lblPassedCount_3, 56, 29);
    HomeScreen_lblPassedCount_3->fn->setBackgroundType(HomeScreen_lblPassedCount_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassedCount_3->fn->setHAlignment(HomeScreen_lblPassedCount_3, LE_HALIGN_RIGHT);
    HomeScreen_lblPassedCount_3->fn->setString(HomeScreen_lblPassedCount_3, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblPassedCount_3);

    HomeScreen_lblFailedCount_3 = leLabelWidget_New();
    HomeScreen_lblFailedCount_3->fn->setPosition(HomeScreen_lblFailedCount_3, 118, 48);
    HomeScreen_lblFailedCount_3->fn->setSize(HomeScreen_lblFailedCount_3, 56, 29);
    HomeScreen_lblFailedCount_3->fn->setBackgroundType(HomeScreen_lblFailedCount_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailedCount_3->fn->setHAlignment(HomeScreen_lblFailedCount_3, LE_HALIGN_RIGHT);
    HomeScreen_lblFailedCount_3->fn->setString(HomeScreen_lblFailedCount_3, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblFailedCount_3);

    HomeScreen_lblPassed_3 = leLabelWidget_New();
    HomeScreen_lblPassed_3->fn->setPosition(HomeScreen_lblPassed_3, 214, 19);
    HomeScreen_lblPassed_3->fn->setSize(HomeScreen_lblPassed_3, 88, 29);
    HomeScreen_lblPassed_3->fn->setBackgroundType(HomeScreen_lblPassed_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassed_3->fn->setString(HomeScreen_lblPassed_3, (leString*)&string_strPassed);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblPassed_3);

    HomeScreen_lblFailed_3 = leLabelWidget_New();
    HomeScreen_lblFailed_3->fn->setPosition(HomeScreen_lblFailed_3, 214, 48);
    HomeScreen_lblFailed_3->fn->setSize(HomeScreen_lblFailed_3, 88, 29);
    HomeScreen_lblFailed_3->fn->setBackgroundType(HomeScreen_lblFailed_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailed_3->fn->setString(HomeScreen_lblFailed_3, (leString*)&string_strFailed);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblFailed_3);

    HomeScreen_lblEnv_3 = leLabelWidget_New();
    HomeScreen_lblEnv_3->fn->setPosition(HomeScreen_lblEnv_3, 326, 35);
    HomeScreen_lblEnv_3->fn->setScheme(HomeScreen_lblEnv_3, &GrayScheme);
    HomeScreen_lblEnv_3->fn->setBackgroundType(HomeScreen_lblEnv_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblEnv_3->fn->setHAlignment(HomeScreen_lblEnv_3, LE_HALIGN_RIGHT);
    HomeScreen_lblEnv_3->fn->setString(HomeScreen_lblEnv_3, (leString*)&string_strEnv);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblEnv_3);

    HomeScreen_lblSocket_3 = leLabelWidget_New();
    HomeScreen_lblSocket_3->fn->setPosition(HomeScreen_lblSocket_3, 326, 63);
    HomeScreen_lblSocket_3->fn->setScheme(HomeScreen_lblSocket_3, &GrayScheme);
    HomeScreen_lblSocket_3->fn->setBackgroundType(HomeScreen_lblSocket_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblSocket_3->fn->setHAlignment(HomeScreen_lblSocket_3, LE_HALIGN_RIGHT);
    HomeScreen_lblSocket_3->fn->setString(HomeScreen_lblSocket_3, (leString*)&string_strSocket);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblSocket_3);

    HomeScreen_lblDevice_3 = leLabelWidget_New();
    HomeScreen_lblDevice_3->fn->setPosition(HomeScreen_lblDevice_3, 326, 8);
    HomeScreen_lblDevice_3->fn->setScheme(HomeScreen_lblDevice_3, &GrayScheme);
    HomeScreen_lblDevice_3->fn->setBackgroundType(HomeScreen_lblDevice_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblDevice_3->fn->setHAlignment(HomeScreen_lblDevice_3, LE_HALIGN_RIGHT);
    HomeScreen_lblDevice_3->fn->setString(HomeScreen_lblDevice_3, (leString*)&string_strDevice);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblDevice_3);

    HomeScreen_ln3_2 = leLineWidget_New();
    HomeScreen_ln3_2->fn->setPosition(HomeScreen_ln3_2, 440, 20);
    HomeScreen_ln3_2->fn->setSize(HomeScreen_ln3_2, 100, 3);
    HomeScreen_ln3_2->fn->setScheme(HomeScreen_ln3_2, &GrayScheme);
    HomeScreen_ln3_2->fn->setBackgroundType(HomeScreen_ln3_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln3_2->fn->setStartPoint(HomeScreen_ln3_2, 0, 1);
    HomeScreen_ln3_2->fn->setEndPoint(HomeScreen_ln3_2, 100, 1);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_ln3_2);

    HomeScreen_ln2_2 = leLineWidget_New();
    HomeScreen_ln2_2->fn->setPosition(HomeScreen_ln2_2, 440, 47);
    HomeScreen_ln2_2->fn->setSize(HomeScreen_ln2_2, 100, 3);
    HomeScreen_ln2_2->fn->setScheme(HomeScreen_ln2_2, &GrayScheme);
    HomeScreen_ln2_2->fn->setBackgroundType(HomeScreen_ln2_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln2_2->fn->setStartPoint(HomeScreen_ln2_2, 0, 1);
    HomeScreen_ln2_2->fn->setEndPoint(HomeScreen_ln2_2, 100, 1);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_ln2_2);

    HomeScreen_ln1_2 = leLineWidget_New();
    HomeScreen_ln1_2->fn->setPosition(HomeScreen_ln1_2, 440, 75);
    HomeScreen_ln1_2->fn->setSize(HomeScreen_ln1_2, 100, 3);
    HomeScreen_ln1_2->fn->setScheme(HomeScreen_ln1_2, &GrayScheme);
    HomeScreen_ln1_2->fn->setBackgroundType(HomeScreen_ln1_2, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln1_2->fn->setStartPoint(HomeScreen_ln1_2, 0, 1);
    HomeScreen_ln1_2->fn->setEndPoint(HomeScreen_ln1_2, 100, 1);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_ln1_2);

    HomeScreen_lblDevice_3 = leLabelWidget_New();
    HomeScreen_lblDevice_3->fn->setPosition(HomeScreen_lblDevice_3, 550, 8);
    HomeScreen_lblDevice_3->fn->setSize(HomeScreen_lblDevice_3, 120, 25);
    HomeScreen_lblDevice_3->fn->setScheme(HomeScreen_lblDevice_3, &WhiteScheme);
    HomeScreen_lblDevice_3->fn->setString(HomeScreen_lblDevice_3, (leString*)&string_strDefaultDev);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblDevice_3);

    HomeScreen_lblEnv_3 = leLabelWidget_New();
    HomeScreen_lblEnv_3->fn->setPosition(HomeScreen_lblEnv_3, 550, 35);
    HomeScreen_lblEnv_3->fn->setSize(HomeScreen_lblEnv_3, 120, 25);
    HomeScreen_lblEnv_3->fn->setScheme(HomeScreen_lblEnv_3, &WhiteScheme);
    HomeScreen_lblEnv_3->fn->setString(HomeScreen_lblEnv_3, (leString*)&string_strDefaulEnv);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblEnv_3);

    HomeScreen_lblSocket_3 = leLabelWidget_New();
    HomeScreen_lblSocket_3->fn->setPosition(HomeScreen_lblSocket_3, 550, 63);
    HomeScreen_lblSocket_3->fn->setSize(HomeScreen_lblSocket_3, 120, 25);
    HomeScreen_lblSocket_3->fn->setScheme(HomeScreen_lblSocket_3, &WhiteScheme);
    HomeScreen_lblSocket_3->fn->setString(HomeScreen_lblSocket_3, (leString*)&string_strDefaulSocket);
    HomeScreen_imgPA3Panel->fn->addChild(HomeScreen_imgPA3Panel, (leWidget*)HomeScreen_lblSocket_3);

    HomeScreen_imgPA4Panel = leImageWidget_New();
    HomeScreen_imgPA4Panel->fn->setPosition(HomeScreen_imgPA4Panel, 5, 424);
    HomeScreen_imgPA4Panel->fn->setSize(HomeScreen_imgPA4Panel, 680, 101);
    HomeScreen_imgPA4Panel->fn->setEnabled(HomeScreen_imgPA4Panel, LE_FALSE);
    HomeScreen_imgPA4Panel->fn->setBackgroundType(HomeScreen_imgPA4Panel, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPA4Panel->fn->setBorderType(HomeScreen_imgPA4Panel, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPA4Panel->fn->setImage(HomeScreen_imgPA4Panel, (leImage*)&panel_back);
    HomeScreen_pnlPAPanels->fn->addChild(HomeScreen_pnlPAPanels, (leWidget*)HomeScreen_imgPA4Panel);

    HomeScreen_imgPassFail_3 = leImageWidget_New();
    HomeScreen_imgPassFail_3->fn->setPosition(HomeScreen_imgPassFail_3, 180, 20);
    HomeScreen_imgPassFail_3->fn->setSize(HomeScreen_imgPassFail_3, 25, 61);
    HomeScreen_imgPassFail_3->fn->setBackgroundType(HomeScreen_imgPassFail_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgPassFail_3->fn->setBorderType(HomeScreen_imgPassFail_3, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgPassFail_3->fn->setImage(HomeScreen_imgPassFail_3, (leImage*)&passfail_back);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_imgPassFail_3);

    HomeScreen_lbPA4 = leLabelWidget_New();
    HomeScreen_lbPA4->fn->setPosition(HomeScreen_lbPA4, 14, 34);
    HomeScreen_lbPA4->fn->setSize(HomeScreen_lbPA4, 64, 34);
    HomeScreen_lbPA4->fn->setScheme(HomeScreen_lbPA4, &WhiteScheme);
    HomeScreen_lbPA4->fn->setBackgroundType(HomeScreen_lbPA4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lbPA4->fn->setHAlignment(HomeScreen_lbPA4, LE_HALIGN_CENTER);
    HomeScreen_lbPA4->fn->setString(HomeScreen_lbPA4, (leString*)&string_strPA4Big);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lbPA4);

    HomeScreen_lblPassedCount_4 = leLabelWidget_New();
    HomeScreen_lblPassedCount_4->fn->setPosition(HomeScreen_lblPassedCount_4, 118, 19);
    HomeScreen_lblPassedCount_4->fn->setSize(HomeScreen_lblPassedCount_4, 56, 29);
    HomeScreen_lblPassedCount_4->fn->setScheme(HomeScreen_lblPassedCount_4, &WhiteScheme);
    HomeScreen_lblPassedCount_4->fn->setBackgroundType(HomeScreen_lblPassedCount_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassedCount_4->fn->setHAlignment(HomeScreen_lblPassedCount_4, LE_HALIGN_RIGHT);
    HomeScreen_lblPassedCount_4->fn->setString(HomeScreen_lblPassedCount_4, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblPassedCount_4);

    HomeScreen_lblFailedCount_4 = leLabelWidget_New();
    HomeScreen_lblFailedCount_4->fn->setPosition(HomeScreen_lblFailedCount_4, 118, 48);
    HomeScreen_lblFailedCount_4->fn->setSize(HomeScreen_lblFailedCount_4, 56, 29);
    HomeScreen_lblFailedCount_4->fn->setScheme(HomeScreen_lblFailedCount_4, &WhiteScheme);
    HomeScreen_lblFailedCount_4->fn->setBackgroundType(HomeScreen_lblFailedCount_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailedCount_4->fn->setHAlignment(HomeScreen_lblFailedCount_4, LE_HALIGN_RIGHT);
    HomeScreen_lblFailedCount_4->fn->setString(HomeScreen_lblFailedCount_4, (leString*)&string_strDefaultCount);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblFailedCount_4);

    HomeScreen_lblPassed_4 = leLabelWidget_New();
    HomeScreen_lblPassed_4->fn->setPosition(HomeScreen_lblPassed_4, 214, 19);
    HomeScreen_lblPassed_4->fn->setSize(HomeScreen_lblPassed_4, 88, 29);
    HomeScreen_lblPassed_4->fn->setScheme(HomeScreen_lblPassed_4, &WhiteScheme);
    HomeScreen_lblPassed_4->fn->setBackgroundType(HomeScreen_lblPassed_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblPassed_4->fn->setString(HomeScreen_lblPassed_4, (leString*)&string_strPassed);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblPassed_4);

    HomeScreen_lblFailed_4 = leLabelWidget_New();
    HomeScreen_lblFailed_4->fn->setPosition(HomeScreen_lblFailed_4, 214, 48);
    HomeScreen_lblFailed_4->fn->setSize(HomeScreen_lblFailed_4, 88, 29);
    HomeScreen_lblFailed_4->fn->setScheme(HomeScreen_lblFailed_4, &WhiteScheme);
    HomeScreen_lblFailed_4->fn->setBackgroundType(HomeScreen_lblFailed_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblFailed_4->fn->setString(HomeScreen_lblFailed_4, (leString*)&string_strFailed);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblFailed_4);

    HomeScreen_lblEnv_4 = leLabelWidget_New();
    HomeScreen_lblEnv_4->fn->setPosition(HomeScreen_lblEnv_4, 326, 35);
    HomeScreen_lblEnv_4->fn->setScheme(HomeScreen_lblEnv_4, &GrayScheme);
    HomeScreen_lblEnv_4->fn->setBackgroundType(HomeScreen_lblEnv_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblEnv_4->fn->setHAlignment(HomeScreen_lblEnv_4, LE_HALIGN_RIGHT);
    HomeScreen_lblEnv_4->fn->setString(HomeScreen_lblEnv_4, (leString*)&string_strEnv);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblEnv_4);

    HomeScreen_lblSocket_4 = leLabelWidget_New();
    HomeScreen_lblSocket_4->fn->setPosition(HomeScreen_lblSocket_4, 326, 63);
    HomeScreen_lblSocket_4->fn->setScheme(HomeScreen_lblSocket_4, &GrayScheme);
    HomeScreen_lblSocket_4->fn->setBackgroundType(HomeScreen_lblSocket_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblSocket_4->fn->setHAlignment(HomeScreen_lblSocket_4, LE_HALIGN_RIGHT);
    HomeScreen_lblSocket_4->fn->setString(HomeScreen_lblSocket_4, (leString*)&string_strSocket);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblSocket_4);

    HomeScreen_lblDevice_4 = leLabelWidget_New();
    HomeScreen_lblDevice_4->fn->setPosition(HomeScreen_lblDevice_4, 326, 8);
    HomeScreen_lblDevice_4->fn->setScheme(HomeScreen_lblDevice_4, &GrayScheme);
    HomeScreen_lblDevice_4->fn->setBackgroundType(HomeScreen_lblDevice_4, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_lblDevice_4->fn->setHAlignment(HomeScreen_lblDevice_4, LE_HALIGN_RIGHT);
    HomeScreen_lblDevice_4->fn->setString(HomeScreen_lblDevice_4, (leString*)&string_strDevice);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblDevice_4);

    HomeScreen_ln3_3 = leLineWidget_New();
    HomeScreen_ln3_3->fn->setPosition(HomeScreen_ln3_3, 440, 20);
    HomeScreen_ln3_3->fn->setSize(HomeScreen_ln3_3, 100, 3);
    HomeScreen_ln3_3->fn->setScheme(HomeScreen_ln3_3, &GrayScheme);
    HomeScreen_ln3_3->fn->setBackgroundType(HomeScreen_ln3_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln3_3->fn->setStartPoint(HomeScreen_ln3_3, 0, 1);
    HomeScreen_ln3_3->fn->setEndPoint(HomeScreen_ln3_3, 100, 1);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_ln3_3);

    HomeScreen_ln2_3 = leLineWidget_New();
    HomeScreen_ln2_3->fn->setPosition(HomeScreen_ln2_3, 440, 47);
    HomeScreen_ln2_3->fn->setSize(HomeScreen_ln2_3, 100, 3);
    HomeScreen_ln2_3->fn->setScheme(HomeScreen_ln2_3, &GrayScheme);
    HomeScreen_ln2_3->fn->setBackgroundType(HomeScreen_ln2_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln2_3->fn->setStartPoint(HomeScreen_ln2_3, 0, 1);
    HomeScreen_ln2_3->fn->setEndPoint(HomeScreen_ln2_3, 100, 1);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_ln2_3);

    HomeScreen_ln1_3 = leLineWidget_New();
    HomeScreen_ln1_3->fn->setPosition(HomeScreen_ln1_3, 440, 75);
    HomeScreen_ln1_3->fn->setSize(HomeScreen_ln1_3, 100, 3);
    HomeScreen_ln1_3->fn->setScheme(HomeScreen_ln1_3, &GrayScheme);
    HomeScreen_ln1_3->fn->setBackgroundType(HomeScreen_ln1_3, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_ln1_3->fn->setStartPoint(HomeScreen_ln1_3, 0, 1);
    HomeScreen_ln1_3->fn->setEndPoint(HomeScreen_ln1_3, 100, 1);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_ln1_3);

    HomeScreen_lblDevice_4 = leLabelWidget_New();
    HomeScreen_lblDevice_4->fn->setPosition(HomeScreen_lblDevice_4, 550, 8);
    HomeScreen_lblDevice_4->fn->setSize(HomeScreen_lblDevice_4, 120, 25);
    HomeScreen_lblDevice_4->fn->setScheme(HomeScreen_lblDevice_4, &WhiteScheme);
    HomeScreen_lblDevice_4->fn->setString(HomeScreen_lblDevice_4, (leString*)&string_strDefaultDev);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblDevice_4);

    HomeScreen_lblEnv_4 = leLabelWidget_New();
    HomeScreen_lblEnv_4->fn->setPosition(HomeScreen_lblEnv_4, 550, 35);
    HomeScreen_lblEnv_4->fn->setSize(HomeScreen_lblEnv_4, 120, 25);
    HomeScreen_lblEnv_4->fn->setScheme(HomeScreen_lblEnv_4, &WhiteScheme);
    HomeScreen_lblEnv_4->fn->setString(HomeScreen_lblEnv_4, (leString*)&string_strDefaulEnv);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblEnv_4);

    HomeScreen_lblSocket_4 = leLabelWidget_New();
    HomeScreen_lblSocket_4->fn->setPosition(HomeScreen_lblSocket_4, 550, 63);
    HomeScreen_lblSocket_4->fn->setSize(HomeScreen_lblSocket_4, 120, 25);
    HomeScreen_lblSocket_4->fn->setScheme(HomeScreen_lblSocket_4, &WhiteScheme);
    HomeScreen_lblSocket_4->fn->setString(HomeScreen_lblSocket_4, (leString*)&string_strDefaulSocket);
    HomeScreen_imgPA4Panel->fn->addChild(HomeScreen_imgPA4Panel, (leWidget*)HomeScreen_lblSocket_4);

    HomeScreen_Side_Nav = leWidget_New();
    HomeScreen_Side_Nav->fn->setPosition(HomeScreen_Side_Nav, 0, 0);
    HomeScreen_Side_Nav->fn->setSize(HomeScreen_Side_Nav, 88, 480);
    HomeScreen_Side_Nav->fn->setBackgroundType(HomeScreen_Side_Nav, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_Home->fn->addChild(HomeScreen_Home, (leWidget*)HomeScreen_Side_Nav);

    HomeScreen_pnlMenu = leWidget_New();
    HomeScreen_pnlMenu->fn->setPosition(HomeScreen_pnlMenu, 0, 0);
    HomeScreen_pnlMenu->fn->setSize(HomeScreen_pnlMenu, 88, 480);
    HomeScreen_pnlMenu->fn->setScheme(HomeScreen_pnlMenu, &WhiteScheme);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_pnlMenu);

    HomeScreen_imgLogo = leImageWidget_New();
    HomeScreen_imgLogo->fn->setPosition(HomeScreen_imgLogo, 19, 24);
    HomeScreen_imgLogo->fn->setSize(HomeScreen_imgLogo, 50, 26);
    HomeScreen_imgLogo->fn->setEnabled(HomeScreen_imgLogo, LE_FALSE);
    HomeScreen_imgLogo->fn->setBackgroundType(HomeScreen_imgLogo, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_imgLogo->fn->setBorderType(HomeScreen_imgLogo, LE_WIDGET_BORDER_NONE);
    HomeScreen_imgLogo->fn->setImage(HomeScreen_imgLogo, (leImage*)&imgMchp);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_imgLogo);

    HomeScreen_btnPower = leButtonWidget_New();
    HomeScreen_btnPower->fn->setPosition(HomeScreen_btnPower, 0, 404);
    HomeScreen_btnPower->fn->setSize(HomeScreen_btnPower, 87, 60);
    HomeScreen_btnPower->fn->setBackgroundType(HomeScreen_btnPower, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnPower->fn->setBorderType(HomeScreen_btnPower, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnPower->fn->setPressedImage(HomeScreen_btnPower, (leImage*)&imgPower);
    HomeScreen_btnPower->fn->setReleasedImage(HomeScreen_btnPower, (leImage*)&imgPower);
    HomeScreen_btnPower->fn->setReleasedEventCallback(HomeScreen_btnPower, event_HomeScreen_btnPower_OnReleased);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_btnPower);

    HomeScreen_btnProgram = leButtonWidget_New();
    HomeScreen_btnProgram->fn->setPosition(HomeScreen_btnProgram, 0, 307);
    HomeScreen_btnProgram->fn->setSize(HomeScreen_btnProgram, 87, 60);
    HomeScreen_btnProgram->fn->setBackgroundType(HomeScreen_btnProgram, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnProgram->fn->setBorderType(HomeScreen_btnProgram, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnProgram->fn->setPressedImage(HomeScreen_btnProgram, (leImage*)&imgProgram);
    HomeScreen_btnProgram->fn->setReleasedImage(HomeScreen_btnProgram, (leImage*)&imgProgram);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_btnProgram);

    HomeScreen_btnMenu = leButtonWidget_New();
    HomeScreen_btnMenu->fn->setPosition(HomeScreen_btnMenu, 0, 243);
    HomeScreen_btnMenu->fn->setSize(HomeScreen_btnMenu, 87, 60);
    HomeScreen_btnMenu->fn->setBackgroundType(HomeScreen_btnMenu, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnMenu->fn->setBorderType(HomeScreen_btnMenu, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnMenu->fn->setPressedImage(HomeScreen_btnMenu, (leImage*)&imgNotes);
    HomeScreen_btnMenu->fn->setReleasedImage(HomeScreen_btnMenu, (leImage*)&imgNotes);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_btnMenu);

    HomeScreen_btnSettings = leButtonWidget_New();
    HomeScreen_btnSettings->fn->setPosition(HomeScreen_btnSettings, 0, 179);
    HomeScreen_btnSettings->fn->setSize(HomeScreen_btnSettings, 87, 60);
    HomeScreen_btnSettings->fn->setBackgroundType(HomeScreen_btnSettings, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnSettings->fn->setBorderType(HomeScreen_btnSettings, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnSettings->fn->setPressedImage(HomeScreen_btnSettings, (leImage*)&imgSettings);
    HomeScreen_btnSettings->fn->setReleasedImage(HomeScreen_btnSettings, (leImage*)&imgSettings);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_btnSettings);

    HomeScreen_btnHome = leButtonWidget_New();
    HomeScreen_btnHome->fn->setPosition(HomeScreen_btnHome, 0, 116);
    HomeScreen_btnHome->fn->setSize(HomeScreen_btnHome, 87, 60);
    HomeScreen_btnHome->fn->setBackgroundType(HomeScreen_btnHome, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnHome->fn->setBorderType(HomeScreen_btnHome, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnHome->fn->setPressedImage(HomeScreen_btnHome, (leImage*)&imgHome);
    HomeScreen_btnHome->fn->setReleasedImage(HomeScreen_btnHome, (leImage*)&imgHome);
    HomeScreen_Side_Nav->fn->addChild(HomeScreen_Side_Nav, (leWidget*)HomeScreen_btnHome);

    HomeScreen_Bottom_Buttons = leWidget_New();
    HomeScreen_Bottom_Buttons->fn->setPosition(HomeScreen_Bottom_Buttons, 93, 398);
    HomeScreen_Bottom_Buttons->fn->setSize(HomeScreen_Bottom_Buttons, 702, 71);
    HomeScreen_Bottom_Buttons->fn->setBackgroundType(HomeScreen_Bottom_Buttons, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_Home->fn->addChild(HomeScreen_Home, (leWidget*)HomeScreen_Bottom_Buttons);

    HomeScreen_btnVerify = leButtonWidget_New();
    HomeScreen_btnVerify->fn->setPosition(HomeScreen_btnVerify, 416, 7);
    HomeScreen_btnVerify->fn->setSize(HomeScreen_btnVerify, 140, 62);
    HomeScreen_btnVerify->fn->setBackgroundType(HomeScreen_btnVerify, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnVerify->fn->setBorderType(HomeScreen_btnVerify, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnVerify->fn->setString(HomeScreen_btnVerify, (leString*)&string_strVerify);
    HomeScreen_btnVerify->fn->setPressedImage(HomeScreen_btnVerify, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify->fn->setReleasedImage(HomeScreen_btnVerify, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify->fn->setImagePosition(HomeScreen_btnVerify, LE_RELATIVE_POSITION_BEHIND);
    HomeScreen_Bottom_Buttons->fn->addChild(HomeScreen_Bottom_Buttons, (leWidget*)HomeScreen_btnVerify);

    HomeScreen_btnBlank = leButtonWidget_New();
    HomeScreen_btnBlank->fn->setPosition(HomeScreen_btnBlank, 552, 7);
    HomeScreen_btnBlank->fn->setSize(HomeScreen_btnBlank, 140, 62);
    HomeScreen_btnBlank->fn->setBackgroundType(HomeScreen_btnBlank, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnBlank->fn->setBorderType(HomeScreen_btnBlank, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnBlank->fn->setString(HomeScreen_btnBlank, (leString*)&string_strBlank);
    HomeScreen_btnBlank->fn->setPressedImage(HomeScreen_btnBlank, (leImage*)&imgMenuButton);
    HomeScreen_btnBlank->fn->setReleasedImage(HomeScreen_btnBlank, (leImage*)&imgMenuButton);
    HomeScreen_btnBlank->fn->setImagePosition(HomeScreen_btnBlank, LE_RELATIVE_POSITION_BEHIND);
    HomeScreen_Bottom_Buttons->fn->addChild(HomeScreen_Bottom_Buttons, (leWidget*)HomeScreen_btnBlank);

    HomeScreen_btnVerify_0 = leButtonWidget_New();
    HomeScreen_btnVerify_0->fn->setPosition(HomeScreen_btnVerify_0, 281, 7);
    HomeScreen_btnVerify_0->fn->setSize(HomeScreen_btnVerify_0, 140, 62);
    HomeScreen_btnVerify_0->fn->setBackgroundType(HomeScreen_btnVerify_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnVerify_0->fn->setBorderType(HomeScreen_btnVerify_0, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnVerify_0->fn->setString(HomeScreen_btnVerify_0, (leString*)&string_strErase);
    HomeScreen_btnVerify_0->fn->setPressedImage(HomeScreen_btnVerify_0, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify_0->fn->setReleasedImage(HomeScreen_btnVerify_0, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify_0->fn->setImagePosition(HomeScreen_btnVerify_0, LE_RELATIVE_POSITION_BEHIND);
    HomeScreen_Bottom_Buttons->fn->addChild(HomeScreen_Bottom_Buttons, (leWidget*)HomeScreen_btnVerify_0);

    HomeScreen_btnVerify_1 = leButtonWidget_New();
    HomeScreen_btnVerify_1->fn->setPosition(HomeScreen_btnVerify_1, 147, 7);
    HomeScreen_btnVerify_1->fn->setSize(HomeScreen_btnVerify_1, 140, 62);
    HomeScreen_btnVerify_1->fn->setBackgroundType(HomeScreen_btnVerify_1, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnVerify_1->fn->setBorderType(HomeScreen_btnVerify_1, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnVerify_1->fn->setString(HomeScreen_btnVerify_1, (leString*)&string_strRead);
    HomeScreen_btnVerify_1->fn->setPressedImage(HomeScreen_btnVerify_1, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify_1->fn->setReleasedImage(HomeScreen_btnVerify_1, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify_1->fn->setImagePosition(HomeScreen_btnVerify_1, LE_RELATIVE_POSITION_BEHIND);
    HomeScreen_Bottom_Buttons->fn->addChild(HomeScreen_Bottom_Buttons, (leWidget*)HomeScreen_btnVerify_1);

    HomeScreen_btnVerify_1_0 = leButtonWidget_New();
    HomeScreen_btnVerify_1_0->fn->setPosition(HomeScreen_btnVerify_1_0, 13, 7);
    HomeScreen_btnVerify_1_0->fn->setSize(HomeScreen_btnVerify_1_0, 140, 62);
    HomeScreen_btnVerify_1_0->fn->setBackgroundType(HomeScreen_btnVerify_1_0, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnVerify_1_0->fn->setBorderType(HomeScreen_btnVerify_1_0, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnVerify_1_0->fn->setMargins(HomeScreen_btnVerify_1_0, 4, 0, 4, 4);
    HomeScreen_btnVerify_1_0->fn->setString(HomeScreen_btnVerify_1_0, (leString*)&string_strProgram);
    HomeScreen_btnVerify_1_0->fn->setPressedImage(HomeScreen_btnVerify_1_0, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify_1_0->fn->setReleasedImage(HomeScreen_btnVerify_1_0, (leImage*)&imgMenuButton);
    HomeScreen_btnVerify_1_0->fn->setImagePosition(HomeScreen_btnVerify_1_0, LE_RELATIVE_POSITION_BEHIND);
    HomeScreen_btnVerify_1_0->fn->setImageMargin(HomeScreen_btnVerify_1_0, 0);
    HomeScreen_Bottom_Buttons->fn->addChild(HomeScreen_Bottom_Buttons, (leWidget*)HomeScreen_btnVerify_1_0);

    HomeScreen_Tabs = leWidget_New();
    HomeScreen_Tabs->fn->setPosition(HomeScreen_Tabs, 85, 2);
    HomeScreen_Tabs->fn->setSize(HomeScreen_Tabs, 712, 60);
    HomeScreen_Tabs->fn->setBackgroundType(HomeScreen_Tabs, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_Home->fn->addChild(HomeScreen_Home, (leWidget*)HomeScreen_Tabs);

    HomeScreen_btnPA0Tab = leButtonWidget_New();
    HomeScreen_btnPA0Tab->fn->setPosition(HomeScreen_btnPA0Tab, 15, -2);
    HomeScreen_btnPA0Tab->fn->setSize(HomeScreen_btnPA0Tab, 138, 65);
    HomeScreen_btnPA0Tab->fn->setScheme(HomeScreen_btnPA0Tab, &WhiteScheme);
    HomeScreen_btnPA0Tab->fn->setBackgroundType(HomeScreen_btnPA0Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnPA0Tab->fn->setBorderType(HomeScreen_btnPA0Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnPA0Tab->fn->setString(HomeScreen_btnPA0Tab, (leString*)&string_strPA0);
    HomeScreen_btnPA0Tab->fn->setReleasedEventCallback(HomeScreen_btnPA0Tab, event_HomeScreen_btnPA0Tab_OnReleased);
    HomeScreen_Tabs->fn->addChild(HomeScreen_Tabs, (leWidget*)HomeScreen_btnPA0Tab);

    HomeScreen_PA0Tab = leImageWidget_New();
    HomeScreen_PA0Tab->fn->setPosition(HomeScreen_PA0Tab, 0, 61);
    HomeScreen_PA0Tab->fn->setSize(HomeScreen_PA0Tab, 138, 2);
    HomeScreen_PA0Tab->fn->setEnabled(HomeScreen_PA0Tab, LE_FALSE);
    HomeScreen_PA0Tab->fn->setBackgroundType(HomeScreen_PA0Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_PA0Tab->fn->setBorderType(HomeScreen_PA0Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_PA0Tab->fn->setImage(HomeScreen_PA0Tab, (leImage*)&imgPABar);
    HomeScreen_btnPA0Tab->fn->addChild(HomeScreen_btnPA0Tab, (leWidget*)HomeScreen_PA0Tab);

    HomeScreen_btnPA1Tab = leButtonWidget_New();
    HomeScreen_btnPA1Tab->fn->setPosition(HomeScreen_btnPA1Tab, 151, -2);
    HomeScreen_btnPA1Tab->fn->setSize(HomeScreen_btnPA1Tab, 138, 65);
    HomeScreen_btnPA1Tab->fn->setScheme(HomeScreen_btnPA1Tab, &WhiteScheme);
    HomeScreen_btnPA1Tab->fn->setBackgroundType(HomeScreen_btnPA1Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnPA1Tab->fn->setBorderType(HomeScreen_btnPA1Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnPA1Tab->fn->setString(HomeScreen_btnPA1Tab, (leString*)&string_strPA1);
    HomeScreen_btnPA1Tab->fn->setReleasedEventCallback(HomeScreen_btnPA1Tab, event_HomeScreen_btnPA1Tab_OnReleased);
    HomeScreen_Tabs->fn->addChild(HomeScreen_Tabs, (leWidget*)HomeScreen_btnPA1Tab);

    HomeScreen_PA1Tab = leImageWidget_New();
    HomeScreen_PA1Tab->fn->setPosition(HomeScreen_PA1Tab, 0, 61);
    HomeScreen_PA1Tab->fn->setSize(HomeScreen_PA1Tab, 138, 2);
    HomeScreen_PA1Tab->fn->setEnabled(HomeScreen_PA1Tab, LE_FALSE);
    HomeScreen_PA1Tab->fn->setBackgroundType(HomeScreen_PA1Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_PA1Tab->fn->setBorderType(HomeScreen_PA1Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_PA1Tab->fn->setImage(HomeScreen_PA1Tab, (leImage*)&imgPABar);
    HomeScreen_btnPA1Tab->fn->addChild(HomeScreen_btnPA1Tab, (leWidget*)HomeScreen_PA1Tab);

    HomeScreen_btnPA2Tab = leButtonWidget_New();
    HomeScreen_btnPA2Tab->fn->setPosition(HomeScreen_btnPA2Tab, 287, -2);
    HomeScreen_btnPA2Tab->fn->setSize(HomeScreen_btnPA2Tab, 138, 65);
    HomeScreen_btnPA2Tab->fn->setScheme(HomeScreen_btnPA2Tab, &WhiteScheme);
    HomeScreen_btnPA2Tab->fn->setBackgroundType(HomeScreen_btnPA2Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnPA2Tab->fn->setBorderType(HomeScreen_btnPA2Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnPA2Tab->fn->setString(HomeScreen_btnPA2Tab, (leString*)&string_strPA2);
    HomeScreen_btnPA2Tab->fn->setReleasedEventCallback(HomeScreen_btnPA2Tab, event_HomeScreen_btnPA2Tab_OnReleased);
    HomeScreen_Tabs->fn->addChild(HomeScreen_Tabs, (leWidget*)HomeScreen_btnPA2Tab);

    HomeScreen_PA2Tab = leImageWidget_New();
    HomeScreen_PA2Tab->fn->setPosition(HomeScreen_PA2Tab, 0, 61);
    HomeScreen_PA2Tab->fn->setSize(HomeScreen_PA2Tab, 138, 2);
    HomeScreen_PA2Tab->fn->setEnabled(HomeScreen_PA2Tab, LE_FALSE);
    HomeScreen_PA2Tab->fn->setBackgroundType(HomeScreen_PA2Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_PA2Tab->fn->setBorderType(HomeScreen_PA2Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_PA2Tab->fn->setImage(HomeScreen_PA2Tab, (leImage*)&imgPABar);
    HomeScreen_btnPA2Tab->fn->addChild(HomeScreen_btnPA2Tab, (leWidget*)HomeScreen_PA2Tab);

    HomeScreen_btnPA3Tab = leButtonWidget_New();
    HomeScreen_btnPA3Tab->fn->setPosition(HomeScreen_btnPA3Tab, 423, -2);
    HomeScreen_btnPA3Tab->fn->setSize(HomeScreen_btnPA3Tab, 138, 65);
    HomeScreen_btnPA3Tab->fn->setScheme(HomeScreen_btnPA3Tab, &WhiteScheme);
    HomeScreen_btnPA3Tab->fn->setBackgroundType(HomeScreen_btnPA3Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnPA3Tab->fn->setBorderType(HomeScreen_btnPA3Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnPA3Tab->fn->setString(HomeScreen_btnPA3Tab, (leString*)&string_strPA3);
    HomeScreen_btnPA3Tab->fn->setReleasedEventCallback(HomeScreen_btnPA3Tab, event_HomeScreen_btnPA3Tab_OnReleased);
    HomeScreen_Tabs->fn->addChild(HomeScreen_Tabs, (leWidget*)HomeScreen_btnPA3Tab);

    HomeScreen_PA3Tab = leImageWidget_New();
    HomeScreen_PA3Tab->fn->setPosition(HomeScreen_PA3Tab, 0, 61);
    HomeScreen_PA3Tab->fn->setSize(HomeScreen_PA3Tab, 138, 2);
    HomeScreen_PA3Tab->fn->setEnabled(HomeScreen_PA3Tab, LE_FALSE);
    HomeScreen_PA3Tab->fn->setBackgroundType(HomeScreen_PA3Tab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_PA3Tab->fn->setBorderType(HomeScreen_PA3Tab, LE_WIDGET_BORDER_NONE);
    HomeScreen_PA3Tab->fn->setImage(HomeScreen_PA3Tab, (leImage*)&imgPABar);
    HomeScreen_btnPA3Tab->fn->addChild(HomeScreen_btnPA3Tab, (leWidget*)HomeScreen_PA3Tab);

    HomeScreen_btnAllPAsTab = leButtonWidget_New();
    HomeScreen_btnAllPAsTab->fn->setPosition(HomeScreen_btnAllPAsTab, 559, -2);
    HomeScreen_btnAllPAsTab->fn->setSize(HomeScreen_btnAllPAsTab, 138, 65);
    HomeScreen_btnAllPAsTab->fn->setScheme(HomeScreen_btnAllPAsTab, &PM5Scheme);
    HomeScreen_btnAllPAsTab->fn->setBackgroundType(HomeScreen_btnAllPAsTab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_btnAllPAsTab->fn->setBorderType(HomeScreen_btnAllPAsTab, LE_WIDGET_BORDER_NONE);
    HomeScreen_btnAllPAsTab->fn->setString(HomeScreen_btnAllPAsTab, (leString*)&string_strAllPAs);
    HomeScreen_btnAllPAsTab->fn->setReleasedEventCallback(HomeScreen_btnAllPAsTab, event_HomeScreen_btnAllPAsTab_OnReleased);
    HomeScreen_Tabs->fn->addChild(HomeScreen_Tabs, (leWidget*)HomeScreen_btnAllPAsTab);

    HomeScreen_AllPAsTab = leImageWidget_New();
    HomeScreen_AllPAsTab->fn->setPosition(HomeScreen_AllPAsTab, 0, 61);
    HomeScreen_AllPAsTab->fn->setSize(HomeScreen_AllPAsTab, 138, 2);
    HomeScreen_AllPAsTab->fn->setBackgroundType(HomeScreen_AllPAsTab, LE_WIDGET_BACKGROUND_NONE);
    HomeScreen_AllPAsTab->fn->setBorderType(HomeScreen_AllPAsTab, LE_WIDGET_BORDER_NONE);
    HomeScreen_AllPAsTab->fn->setImage(HomeScreen_AllPAsTab, (leImage*)&imgPABarRed);
    HomeScreen_btnAllPAsTab->fn->addChild(HomeScreen_btnAllPAsTab, (leWidget*)HomeScreen_AllPAsTab);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    HomeScreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_HomeScreen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    HomeScreen_OnUpdate(); // raise event
}

void screenHide_HomeScreen(void)
{
    HomeScreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    HomeScreen_Home = NULL;
    HomeScreen_pnlVisibleArea = NULL;
    HomeScreen_Side_Nav = NULL;
    HomeScreen_Bottom_Buttons = NULL;
    HomeScreen_Tabs = NULL;
    HomeScreen_pnlPAPanels = NULL;
    HomeScreen_imgPA0Panel = NULL;
    HomeScreen_imgPA1Panel = NULL;
    HomeScreen_imgPA2Panel = NULL;
    HomeScreen_imgPA3Panel = NULL;
    HomeScreen_imgPA4Panel = NULL;
    HomeScreen_ln1 = NULL;
    HomeScreen_ln2 = NULL;
    HomeScreen_ln3 = NULL;
    HomeScreen_imgPassFail = NULL;
    HomeScreen_lbPA0 = NULL;
    HomeScreen_lblPassedCount_0 = NULL;
    HomeScreen_lblFailedCount_0 = NULL;
    HomeScreen_lblPassed_0 = NULL;
    HomeScreen_lblFailed_0 = NULL;
    HomeScreen_lblDevice = NULL;
    HomeScreen_lblEnv = NULL;
    HomeScreen_lblSocket = NULL;
    HomeScreen_lblDevice_0 = NULL;
    HomeScreen_lblEnv_0 = NULL;
    HomeScreen_lblSocket_0 = NULL;
    HomeScreen_imgPassFail_0 = NULL;
    HomeScreen_lbPA1 = NULL;
    HomeScreen_lblPassedCount_1 = NULL;
    HomeScreen_lblFailedCount_1 = NULL;
    HomeScreen_lblPassed_1 = NULL;
    HomeScreen_lblFailed_1 = NULL;
    HomeScreen_lblEnv_1 = NULL;
    HomeScreen_lblSocket_1 = NULL;
    HomeScreen_lblDevice_1 = NULL;
    HomeScreen_ln3_0 = NULL;
    HomeScreen_ln2_0 = NULL;
    HomeScreen_ln1_0 = NULL;
    HomeScreen_lblDevice_1 = NULL;
    HomeScreen_lblEnv_1 = NULL;
    HomeScreen_lblSocket_1 = NULL;
    HomeScreen_imgPassFail_1 = NULL;
    HomeScreen_lbPA2 = NULL;
    HomeScreen_lblPassedCount_2 = NULL;
    HomeScreen_lblFailedCount_2 = NULL;
    HomeScreen_lblPassed_2 = NULL;
    HomeScreen_lblFailed_2 = NULL;
    HomeScreen_lblEnv_2 = NULL;
    HomeScreen_lblSocket_2 = NULL;
    HomeScreen_lblDevice_2 = NULL;
    HomeScreen_ln3_1 = NULL;
    HomeScreen_ln2_1 = NULL;
    HomeScreen_ln1_1 = NULL;
    HomeScreen_lblDevice_2 = NULL;
    HomeScreen_lblEnv_2 = NULL;
    HomeScreen_lblSocket_2 = NULL;
    HomeScreen_imgPassFail_2 = NULL;
    HomeScreen_lbPA3 = NULL;
    HomeScreen_lblPassedCount_3 = NULL;
    HomeScreen_lblFailedCount_3 = NULL;
    HomeScreen_lblPassed_3 = NULL;
    HomeScreen_lblFailed_3 = NULL;
    HomeScreen_lblEnv_3 = NULL;
    HomeScreen_lblSocket_3 = NULL;
    HomeScreen_lblDevice_3 = NULL;
    HomeScreen_ln3_2 = NULL;
    HomeScreen_ln2_2 = NULL;
    HomeScreen_ln1_2 = NULL;
    HomeScreen_lblDevice_3 = NULL;
    HomeScreen_lblEnv_3 = NULL;
    HomeScreen_lblSocket_3 = NULL;
    HomeScreen_imgPassFail_3 = NULL;
    HomeScreen_lbPA4 = NULL;
    HomeScreen_lblPassedCount_4 = NULL;
    HomeScreen_lblFailedCount_4 = NULL;
    HomeScreen_lblPassed_4 = NULL;
    HomeScreen_lblFailed_4 = NULL;
    HomeScreen_lblEnv_4 = NULL;
    HomeScreen_lblSocket_4 = NULL;
    HomeScreen_lblDevice_4 = NULL;
    HomeScreen_ln3_3 = NULL;
    HomeScreen_ln2_3 = NULL;
    HomeScreen_ln1_3 = NULL;
    HomeScreen_lblDevice_4 = NULL;
    HomeScreen_lblEnv_4 = NULL;
    HomeScreen_lblSocket_4 = NULL;
    HomeScreen_pnlMenu = NULL;
    HomeScreen_imgLogo = NULL;
    HomeScreen_btnPower = NULL;
    HomeScreen_btnProgram = NULL;
    HomeScreen_btnMenu = NULL;
    HomeScreen_btnSettings = NULL;
    HomeScreen_btnHome = NULL;
    HomeScreen_btnVerify = NULL;
    HomeScreen_btnBlank = NULL;
    HomeScreen_btnVerify_0 = NULL;
    HomeScreen_btnVerify_1 = NULL;
    HomeScreen_btnVerify_1_0 = NULL;
    HomeScreen_btnPA0Tab = NULL;
    HomeScreen_btnPA1Tab = NULL;
    HomeScreen_btnPA2Tab = NULL;
    HomeScreen_btnPA3Tab = NULL;
    HomeScreen_btnAllPAsTab = NULL;
    HomeScreen_PA0Tab = NULL;
    HomeScreen_PA1Tab = NULL;
    HomeScreen_PA2Tab = NULL;
    HomeScreen_PA3Tab = NULL;
    HomeScreen_AllPAsTab = NULL;


    showing = LE_FALSE;
}

void screenDestroy_HomeScreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_HomeScreen(uint32_t lyrIdx)
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

