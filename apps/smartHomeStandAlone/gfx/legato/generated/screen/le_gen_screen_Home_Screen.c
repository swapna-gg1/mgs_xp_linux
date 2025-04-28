#include "gfx/legato/generated/screen/le_gen_screen_Home_Screen.h"

// screen member widget declarations
static leWidget* root0;
static leWidget* root1;

leWidget* Home_Screen_panel_Home_Screen;
leWidget* Home_Screen_panel_statusBar;
leWidget* Home_Screen_panel_security;
leWidget* Home_Screen_panel_thermostat;
leWidget* Home_Screen_panel_devices;
leWidget* Home_Screen_panel_sensors;
leImageWidget* Home_Screen_image_statusBar;
leImageWidget* Home_Screen_image_Mode;
leButtonWidget* Home_Screen_button_Mode;
leImageWidget* Home_Screen_image_selMode;
leLabelWidget* Home_Screen_label_selMode;
leWidget* Home_Screen_PanelDate_Time;
leLabelWidget* Home_Screen_LabelSensorWarning;
leLabelWidget* Home_Screen_Label_time;
leLabelWidget* Home_Screen_Label_date;
leImageWidget* Home_Screen_image_securityCard;
leLabelWidget* Home_Screen_LabelCameraEvent;
leLabelWidget* Home_Screen_LabelCameraEventNum;
leImageWidget* Home_Screen_Image_thermostatCard;
leImageWidget* Home_Screen_ImageThermoMode;
leButtonWidget* Home_Screen_ButtonThermoMode;
leButtonWidget* Home_Screen_ButtonThermoUp;
leButtonWidget* Home_Screen_ButtonThermoDown;
leLabelWidget* Home_Screen_LabelTempCur;
leImageWidget* Home_Screen_image_devicesCard;
leWidget* Home_Screen_panel_devicesSummary;
leWidget* Home_Screen_panel_AppliancesDevices1;
leWidget* Home_Screen_panel_AppliancesDevices2;
leButtonWidget* Home_Screen_ButtonAddDevice;
leLabelWidget* Home_Screen_label_LightsOn;
leLabelWidget* Home_Screen_label_blindsOn;
leLabelWidget* Home_Screen_label_devicesActive;
leLabelWidget* Home_Screen_label_LightsOnNum;
leLabelWidget* Home_Screen_label_blindsOnNum;
leLabelWidget* Home_Screen_label_devicesActiveNum;
leImageWidget* Home_Screen_imageR_Dev1;
leImageWidget* Home_Screen_imageR_Dev2;
leImageWidget* Home_Screen_imageR_Dev3;
leImageWidget* Home_Screen_imageR_Dev4;
leLabelWidget* Home_Screen_LabelRoom1;
leLabelWidget* Home_Screen_LabelDevice1;
leLabelWidget* Home_Screen_LabelDev1_status;
leButtonWidget* Home_Screen_ButtonDev1;
leLabelWidget* Home_Screen_LabelRoom2;
leLabelWidget* Home_Screen_LabelDevice2;
leLabelWidget* Home_Screen_LabelDev2_status;
leButtonWidget* Home_Screen_ButtonDev2;
leLabelWidget* Home_Screen_LabelRoom3;
leLabelWidget* Home_Screen_LabelDevice3;
leLabelWidget* Home_Screen_LabelDev3_status;
leButtonWidget* Home_Screen_ButtonDev3;
leLabelWidget* Home_Screen_LabelRoom4;
leLabelWidget* Home_Screen_LabelDevice4;
leLabelWidget* Home_Screen_LabelDev4_status;
leButtonWidget* Home_Screen_ButtonDev4;
leImageWidget* Home_Screen_imageR_Dev5;
leImageWidget* Home_Screen_imageR_Dev6;
leImageWidget* Home_Screen_imageR_Dev7;
leImageWidget* Home_Screen_imageR_Dev8;
leLabelWidget* Home_Screen_LabelRoom5;
leLabelWidget* Home_Screen_LabelDevice5;
leLabelWidget* Home_Screen_LabelDev5_status;
leButtonWidget* Home_Screen_ButtonDev5;
leLabelWidget* Home_Screen_LabelRoom6;
leLabelWidget* Home_Screen_LabelDevice6;
leLabelWidget* Home_Screen_LabelDev6_status;
leButtonWidget* Home_Screen_ButtonDev6;
leLabelWidget* Home_Screen_LabelRoom7;
leLabelWidget* Home_Screen_LabelDev7_status;
leButtonWidget* Home_Screen_ButtonDev7;
leLabelWidget* Home_Screen_LabelRoom8;
leLabelWidget* Home_Screen_LabelDevice8;
leLabelWidget* Home_Screen_LabelDev8_status;
leButtonWidget* Home_Screen_ButtonDev8;
leImageWidget* Home_Screen_ImageSensors;
leWidget* Home_Screen_panel_sensorsSummary;
leWidget* Home_Screen_panel_sensors;
leLabelWidget* Home_Screen_LabelDoorsOpen;
leLabelWidget* Home_Screen_label_doorsOpenNum;
leLabelWidget* Home_Screen_LabelWindowsOpen;
leLabelWidget* Home_Screen_LabelWindowsOpenNum;
leImageWidget* Home_Screen_imageO_Dev1;
leImageWidget* Home_Screen_imageO_Dev2;
leImageWidget* Home_Screen_imageO_Dev3;
leImageWidget* Home_Screen_imageO_Dev4;
leLabelWidget* Home_Screen_LabelRoom9;
leLabelWidget* Home_Screen_LabelDevice9;
leLabelWidget* Home_Screen_LabelDev9_status;
leLabelWidget* Home_Screen_LabelRoom10;
leLabelWidget* Home_Screen_LabelDevice10;
leLabelWidget* Home_Screen_LabelDev10_status;
leLabelWidget* Home_Screen_LabelRoom11;
leLabelWidget* Home_Screen_LabelDevice11;
leLabelWidget* Home_Screen_LabelDev11_status;
leLabelWidget* Home_Screen_LabelRoom12;
leLabelWidget* Home_Screen_LabelDevice12;
leLabelWidget* Home_Screen_LabelDev12_status;
leWidget* Home_Screen_PanelWidget_0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Home_Screen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Home_Screen(void)
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

    Home_Screen_panel_Home_Screen = leWidget_New();
    Home_Screen_panel_Home_Screen->fn->setPosition(Home_Screen_panel_Home_Screen, 0, 0);
    Home_Screen_panel_Home_Screen->fn->setSize(Home_Screen_panel_Home_Screen, 1280, 800);
    Home_Screen_panel_Home_Screen->fn->setScheme(Home_Screen_panel_Home_Screen, &DarkScheme);
    root0->fn->addChild(root0, (leWidget*)Home_Screen_panel_Home_Screen);

    Home_Screen_panel_statusBar = leWidget_New();
    Home_Screen_panel_statusBar->fn->setPosition(Home_Screen_panel_statusBar, 71, 8);
    Home_Screen_panel_statusBar->fn->setSize(Home_Screen_panel_statusBar, 1138, 88);
    Home_Screen_panel_statusBar->fn->setBackgroundType(Home_Screen_panel_statusBar, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_Home_Screen->fn->addChild(Home_Screen_panel_Home_Screen, (leWidget*)Home_Screen_panel_statusBar);

    Home_Screen_image_statusBar = leImageWidget_New();
    Home_Screen_image_statusBar->fn->setPosition(Home_Screen_image_statusBar, 0, 0);
    Home_Screen_image_statusBar->fn->setSize(Home_Screen_image_statusBar, 1138, 88);
    Home_Screen_image_statusBar->fn->setBackgroundType(Home_Screen_image_statusBar, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_image_statusBar->fn->setBorderType(Home_Screen_image_statusBar, LE_WIDGET_BORDER_NONE);
    Home_Screen_image_statusBar->fn->setImage(Home_Screen_image_statusBar, (leImage*)&StatusBar);
    Home_Screen_panel_statusBar->fn->addChild(Home_Screen_panel_statusBar, (leWidget*)Home_Screen_image_statusBar);

    Home_Screen_image_Mode = leImageWidget_New();
    Home_Screen_image_Mode->fn->setPosition(Home_Screen_image_Mode, 957, 16);
    Home_Screen_image_Mode->fn->setSize(Home_Screen_image_Mode, 165, 56);
    Home_Screen_image_Mode->fn->setBackgroundType(Home_Screen_image_Mode, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_image_Mode->fn->setBorderType(Home_Screen_image_Mode, LE_WIDGET_BORDER_NONE);
    Home_Screen_image_Mode->fn->setImage(Home_Screen_image_Mode, (leImage*)&ModeDropdown);
    Home_Screen_image_statusBar->fn->addChild(Home_Screen_image_statusBar, (leWidget*)Home_Screen_image_Mode);

    Home_Screen_button_Mode = leButtonWidget_New();
    Home_Screen_button_Mode->fn->setPosition(Home_Screen_button_Mode, 957, 16);
    Home_Screen_button_Mode->fn->setSize(Home_Screen_button_Mode, 162, 56);
    Home_Screen_button_Mode->fn->setBackgroundType(Home_Screen_button_Mode, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_button_Mode->fn->setBorderType(Home_Screen_button_Mode, LE_WIDGET_BORDER_NONE);
    Home_Screen_image_statusBar->fn->addChild(Home_Screen_image_statusBar, (leWidget*)Home_Screen_button_Mode);

    Home_Screen_image_selMode = leImageWidget_New();
    Home_Screen_image_selMode->fn->setPosition(Home_Screen_image_selMode, 966, 31);
    Home_Screen_image_selMode->fn->setSize(Home_Screen_image_selMode, 28, 28);
    Home_Screen_image_selMode->fn->setBackgroundType(Home_Screen_image_selMode, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_image_selMode->fn->setBorderType(Home_Screen_image_selMode, LE_WIDGET_BORDER_NONE);
    Home_Screen_image_selMode->fn->setImage(Home_Screen_image_selMode, (leImage*)&Sunny);
    Home_Screen_image_statusBar->fn->addChild(Home_Screen_image_statusBar, (leWidget*)Home_Screen_image_selMode);

    Home_Screen_label_selMode = leLabelWidget_New();
    Home_Screen_label_selMode->fn->setPosition(Home_Screen_label_selMode, 1005, 20);
    Home_Screen_label_selMode->fn->setSize(Home_Screen_label_selMode, 66, 25);
    Home_Screen_label_selMode->fn->setScheme(Home_Screen_label_selMode, &WhiteScheme);
    Home_Screen_label_selMode->fn->setBackgroundType(Home_Screen_label_selMode, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_selMode->fn->setString(Home_Screen_label_selMode, (leString*)&string_DaytimeMode);
    Home_Screen_image_statusBar->fn->addChild(Home_Screen_image_statusBar, (leWidget*)Home_Screen_label_selMode);

    Home_Screen_PanelDate_Time = leWidget_New();
    Home_Screen_PanelDate_Time->fn->setPosition(Home_Screen_PanelDate_Time, 756, 29);
    Home_Screen_PanelDate_Time->fn->setSize(Home_Screen_PanelDate_Time, 199, 25);
    Home_Screen_PanelDate_Time->fn->setBackgroundType(Home_Screen_PanelDate_Time, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_image_statusBar->fn->addChild(Home_Screen_image_statusBar, (leWidget*)Home_Screen_PanelDate_Time);

    Home_Screen_Label_time = leLabelWidget_New();
    Home_Screen_Label_time->fn->setPosition(Home_Screen_Label_time, 0, 0);
    Home_Screen_Label_time->fn->setScheme(Home_Screen_Label_time, &WhiteScheme);
    Home_Screen_Label_time->fn->setBackgroundType(Home_Screen_Label_time, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_Label_time->fn->setString(Home_Screen_Label_time, (leString*)&string_time_example);
    Home_Screen_PanelDate_Time->fn->addChild(Home_Screen_PanelDate_Time, (leWidget*)Home_Screen_Label_time);

    Home_Screen_Label_date = leLabelWidget_New();
    Home_Screen_Label_date->fn->setPosition(Home_Screen_Label_date, 91, 1);
    Home_Screen_Label_date->fn->setSize(Home_Screen_Label_date, 105, 25);
    Home_Screen_Label_date->fn->setScheme(Home_Screen_Label_date, &WhiteScheme);
    Home_Screen_Label_date->fn->setBackgroundType(Home_Screen_Label_date, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_Label_date->fn->setString(Home_Screen_Label_date, (leString*)&string_date_example);
    Home_Screen_PanelDate_Time->fn->addChild(Home_Screen_PanelDate_Time, (leWidget*)Home_Screen_Label_date);

    Home_Screen_LabelSensorWarning = leLabelWidget_New();
    Home_Screen_LabelSensorWarning->fn->setPosition(Home_Screen_LabelSensorWarning, 358, 13);
    Home_Screen_LabelSensorWarning->fn->setSize(Home_Screen_LabelSensorWarning, 422, 61);
    Home_Screen_LabelSensorWarning->fn->setEnabled(Home_Screen_LabelSensorWarning, LE_FALSE);
    Home_Screen_LabelSensorWarning->fn->setVisible(Home_Screen_LabelSensorWarning, LE_FALSE);
    Home_Screen_LabelSensorWarning->fn->setScheme(Home_Screen_LabelSensorWarning, &DarkScheme);
    Home_Screen_LabelSensorWarning->fn->setBackgroundType(Home_Screen_LabelSensorWarning, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelSensorWarning->fn->setHAlignment(Home_Screen_LabelSensorWarning, LE_HALIGN_CENTER);
    Home_Screen_LabelSensorWarning->fn->setString(Home_Screen_LabelSensorWarning, (leString*)&string_warning);
    Home_Screen_image_statusBar->fn->addChild(Home_Screen_image_statusBar, (leWidget*)Home_Screen_LabelSensorWarning);

    Home_Screen_panel_security = leWidget_New();
    Home_Screen_panel_security->fn->setPosition(Home_Screen_panel_security, 71, 104);
    Home_Screen_panel_security->fn->setSize(Home_Screen_panel_security, 542, 400);
    Home_Screen_panel_security->fn->setBackgroundType(Home_Screen_panel_security, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_Home_Screen->fn->addChild(Home_Screen_panel_Home_Screen, (leWidget*)Home_Screen_panel_security);

    Home_Screen_image_securityCard = leImageWidget_New();
    Home_Screen_image_securityCard->fn->setPosition(Home_Screen_image_securityCard, 0, 0);
    Home_Screen_image_securityCard->fn->setSize(Home_Screen_image_securityCard, 542, 400);
    Home_Screen_image_securityCard->fn->setBackgroundType(Home_Screen_image_securityCard, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_image_securityCard->fn->setBorderType(Home_Screen_image_securityCard, LE_WIDGET_BORDER_NONE);
    Home_Screen_image_securityCard->fn->setImage(Home_Screen_image_securityCard, (leImage*)&SecurityCard);
    Home_Screen_panel_security->fn->addChild(Home_Screen_panel_security, (leWidget*)Home_Screen_image_securityCard);

    Home_Screen_LabelCameraEvent = leLabelWidget_New();
    Home_Screen_LabelCameraEvent->fn->setPosition(Home_Screen_LabelCameraEvent, 460, 100);
    Home_Screen_LabelCameraEvent->fn->setSize(Home_Screen_LabelCameraEvent, 53, 33);
    Home_Screen_LabelCameraEvent->fn->setScheme(Home_Screen_LabelCameraEvent, &WhiteScheme);
    Home_Screen_LabelCameraEvent->fn->setBackgroundType(Home_Screen_LabelCameraEvent, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelCameraEvent->fn->setString(Home_Screen_LabelCameraEvent, (leString*)&string_figmaStr_CamerEvents);
    Home_Screen_image_securityCard->fn->addChild(Home_Screen_image_securityCard, (leWidget*)Home_Screen_LabelCameraEvent);

    Home_Screen_LabelCameraEventNum = leLabelWidget_New();
    Home_Screen_LabelCameraEventNum->fn->setPosition(Home_Screen_LabelCameraEventNum, 404, 99);
    Home_Screen_LabelCameraEventNum->fn->setSize(Home_Screen_LabelCameraEventNum, 52, 37);
    Home_Screen_LabelCameraEventNum->fn->setScheme(Home_Screen_LabelCameraEventNum, &WhiteScheme);
    Home_Screen_LabelCameraEventNum->fn->setBackgroundType(Home_Screen_LabelCameraEventNum, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelCameraEventNum->fn->setHAlignment(Home_Screen_LabelCameraEventNum, LE_HALIGN_RIGHT);
    Home_Screen_LabelCameraEventNum->fn->setString(Home_Screen_LabelCameraEventNum, (leString*)&string_three);
    Home_Screen_image_securityCard->fn->addChild(Home_Screen_image_securityCard, (leWidget*)Home_Screen_LabelCameraEventNum);

    Home_Screen_panel_thermostat = leWidget_New();
    Home_Screen_panel_thermostat->fn->setPosition(Home_Screen_panel_thermostat, 71, 512);
    Home_Screen_panel_thermostat->fn->setSize(Home_Screen_panel_thermostat, 542, 280);
    Home_Screen_panel_thermostat->fn->setBackgroundType(Home_Screen_panel_thermostat, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_Home_Screen->fn->addChild(Home_Screen_panel_Home_Screen, (leWidget*)Home_Screen_panel_thermostat);

    Home_Screen_Image_thermostatCard = leImageWidget_New();
    Home_Screen_Image_thermostatCard->fn->setPosition(Home_Screen_Image_thermostatCard, 0, 0);
    Home_Screen_Image_thermostatCard->fn->setSize(Home_Screen_Image_thermostatCard, 542, 280);
    Home_Screen_Image_thermostatCard->fn->setBackgroundType(Home_Screen_Image_thermostatCard, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_Image_thermostatCard->fn->setBorderType(Home_Screen_Image_thermostatCard, LE_WIDGET_BORDER_NONE);
    Home_Screen_Image_thermostatCard->fn->setImage(Home_Screen_Image_thermostatCard, (leImage*)&ThermostatCard);
    Home_Screen_panel_thermostat->fn->addChild(Home_Screen_panel_thermostat, (leWidget*)Home_Screen_Image_thermostatCard);

    Home_Screen_ImageThermoMode = leImageWidget_New();
    Home_Screen_ImageThermoMode->fn->setPosition(Home_Screen_ImageThermoMode, 32, 110);
    Home_Screen_ImageThermoMode->fn->setSize(Home_Screen_ImageThermoMode, 98, 40);
    Home_Screen_ImageThermoMode->fn->setBackgroundType(Home_Screen_ImageThermoMode, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ImageThermoMode->fn->setBorderType(Home_Screen_ImageThermoMode, LE_WIDGET_BORDER_NONE);
    Home_Screen_ImageThermoMode->fn->setImage(Home_Screen_ImageThermoMode, (leImage*)&hotThermostat);
    Home_Screen_Image_thermostatCard->fn->addChild(Home_Screen_Image_thermostatCard, (leWidget*)Home_Screen_ImageThermoMode);

    Home_Screen_ButtonThermoMode = leButtonWidget_New();
    Home_Screen_ButtonThermoMode->fn->setPosition(Home_Screen_ButtonThermoMode, 32, 110);
    Home_Screen_ButtonThermoMode->fn->setSize(Home_Screen_ButtonThermoMode, 98, 40);
    Home_Screen_ButtonThermoMode->fn->setBackgroundType(Home_Screen_ButtonThermoMode, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonThermoMode->fn->setBorderType(Home_Screen_ButtonThermoMode, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonThermoMode->fn->setReleasedEventCallback(Home_Screen_ButtonThermoMode, event_Home_Screen_ButtonThermoMode_OnReleased);
    Home_Screen_Image_thermostatCard->fn->addChild(Home_Screen_Image_thermostatCard, (leWidget*)Home_Screen_ButtonThermoMode);

    Home_Screen_ButtonThermoUp = leButtonWidget_New();
    Home_Screen_ButtonThermoUp->fn->setPosition(Home_Screen_ButtonThermoUp, 405, 93);
    Home_Screen_ButtonThermoUp->fn->setSize(Home_Screen_ButtonThermoUp, 62, 44);
    Home_Screen_ButtonThermoUp->fn->setBackgroundType(Home_Screen_ButtonThermoUp, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonThermoUp->fn->setBorderType(Home_Screen_ButtonThermoUp, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonThermoUp->fn->setReleasedEventCallback(Home_Screen_ButtonThermoUp, event_Home_Screen_ButtonThermoUp_OnReleased);
    Home_Screen_Image_thermostatCard->fn->addChild(Home_Screen_Image_thermostatCard, (leWidget*)Home_Screen_ButtonThermoUp);

    Home_Screen_ButtonThermoDown = leButtonWidget_New();
    Home_Screen_ButtonThermoDown->fn->setPosition(Home_Screen_ButtonThermoDown, 404, 174);
    Home_Screen_ButtonThermoDown->fn->setSize(Home_Screen_ButtonThermoDown, 62, 44);
    Home_Screen_ButtonThermoDown->fn->setBackgroundType(Home_Screen_ButtonThermoDown, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonThermoDown->fn->setBorderType(Home_Screen_ButtonThermoDown, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonThermoDown->fn->setReleasedEventCallback(Home_Screen_ButtonThermoDown, event_Home_Screen_ButtonThermoDown_OnReleased);
    Home_Screen_Image_thermostatCard->fn->addChild(Home_Screen_Image_thermostatCard, (leWidget*)Home_Screen_ButtonThermoDown);

    Home_Screen_LabelTempCur = leLabelWidget_New();
    Home_Screen_LabelTempCur->fn->setPosition(Home_Screen_LabelTempCur, 149, 103);
    Home_Screen_LabelTempCur->fn->setSize(Home_Screen_LabelTempCur, 178, 113);
    Home_Screen_LabelTempCur->fn->setScheme(Home_Screen_LabelTempCur, &SandybrownScheme);
    Home_Screen_LabelTempCur->fn->setBackgroundType(Home_Screen_LabelTempCur, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelTempCur->fn->setHAlignment(Home_Screen_LabelTempCur, LE_HALIGN_RIGHT);
    Home_Screen_LabelTempCur->fn->setString(Home_Screen_LabelTempCur, (leString*)&string_TemperatureExample);
    Home_Screen_Image_thermostatCard->fn->addChild(Home_Screen_Image_thermostatCard, (leWidget*)Home_Screen_LabelTempCur);

    Home_Screen_panel_devices = leWidget_New();
    Home_Screen_panel_devices->fn->setPosition(Home_Screen_panel_devices, 620, 104);
    Home_Screen_panel_devices->fn->setSize(Home_Screen_panel_devices, 588, 400);
    Home_Screen_panel_devices->fn->setBackgroundType(Home_Screen_panel_devices, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_Home_Screen->fn->addChild(Home_Screen_panel_Home_Screen, (leWidget*)Home_Screen_panel_devices);

    Home_Screen_image_devicesCard = leImageWidget_New();
    Home_Screen_image_devicesCard->fn->setPosition(Home_Screen_image_devicesCard, 0, 0);
    Home_Screen_image_devicesCard->fn->setSize(Home_Screen_image_devicesCard, 588, 400);
    Home_Screen_image_devicesCard->fn->setBackgroundType(Home_Screen_image_devicesCard, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_image_devicesCard->fn->setBorderType(Home_Screen_image_devicesCard, LE_WIDGET_BORDER_NONE);
    Home_Screen_image_devicesCard->fn->setImage(Home_Screen_image_devicesCard, (leImage*)&Devices_Card);
    Home_Screen_panel_devices->fn->addChild(Home_Screen_panel_devices, (leWidget*)Home_Screen_image_devicesCard);

    Home_Screen_panel_devicesSummary = leWidget_New();
    Home_Screen_panel_devicesSummary->fn->setPosition(Home_Screen_panel_devicesSummary, 40, 70);
    Home_Screen_panel_devicesSummary->fn->setSize(Home_Screen_panel_devicesSummary, 508, 40);
    Home_Screen_panel_devicesSummary->fn->setBackgroundType(Home_Screen_panel_devicesSummary, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_devices->fn->addChild(Home_Screen_panel_devices, (leWidget*)Home_Screen_panel_devicesSummary);

    Home_Screen_label_LightsOn = leLabelWidget_New();
    Home_Screen_label_LightsOn->fn->setPosition(Home_Screen_label_LightsOn, 87, 10);
    Home_Screen_label_LightsOn->fn->setSize(Home_Screen_label_LightsOn, 64, 25);
    Home_Screen_label_LightsOn->fn->setScheme(Home_Screen_label_LightsOn, &WhiteScheme);
    Home_Screen_label_LightsOn->fn->setBackgroundType(Home_Screen_label_LightsOn, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_LightsOn->fn->setString(Home_Screen_label_LightsOn, (leString*)&string_figmaStr_Lights_On);
    Home_Screen_panel_devicesSummary->fn->addChild(Home_Screen_panel_devicesSummary, (leWidget*)Home_Screen_label_LightsOn);

    Home_Screen_label_blindsOn = leLabelWidget_New();
    Home_Screen_label_blindsOn->fn->setPosition(Home_Screen_label_blindsOn, 280, 10);
    Home_Screen_label_blindsOn->fn->setSize(Home_Screen_label_blindsOn, 78, 25);
    Home_Screen_label_blindsOn->fn->setScheme(Home_Screen_label_blindsOn, &WhiteScheme);
    Home_Screen_label_blindsOn->fn->setBackgroundType(Home_Screen_label_blindsOn, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_blindsOn->fn->setString(Home_Screen_label_blindsOn, (leString*)&string_figmaStr_BlindsOpen);
    Home_Screen_panel_devicesSummary->fn->addChild(Home_Screen_panel_devicesSummary, (leWidget*)Home_Screen_label_blindsOn);

    Home_Screen_label_devicesActive = leLabelWidget_New();
    Home_Screen_label_devicesActive->fn->setPosition(Home_Screen_label_devicesActive, 460, 10);
    Home_Screen_label_devicesActive->fn->setSize(Home_Screen_label_devicesActive, 55, 25);
    Home_Screen_label_devicesActive->fn->setScheme(Home_Screen_label_devicesActive, &WhiteScheme);
    Home_Screen_label_devicesActive->fn->setBackgroundType(Home_Screen_label_devicesActive, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_devicesActive->fn->setString(Home_Screen_label_devicesActive, (leString*)&string_figmaStr_DevicesActive);
    Home_Screen_panel_devicesSummary->fn->addChild(Home_Screen_panel_devicesSummary, (leWidget*)Home_Screen_label_devicesActive);

    Home_Screen_label_LightsOnNum = leLabelWidget_New();
    Home_Screen_label_LightsOnNum->fn->setPosition(Home_Screen_label_LightsOnNum, 36, 2);
    Home_Screen_label_LightsOnNum->fn->setSize(Home_Screen_label_LightsOnNum, 47, 37);
    Home_Screen_label_LightsOnNum->fn->setScheme(Home_Screen_label_LightsOnNum, &WhiteScheme);
    Home_Screen_label_LightsOnNum->fn->setBackgroundType(Home_Screen_label_LightsOnNum, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_LightsOnNum->fn->setHAlignment(Home_Screen_label_LightsOnNum, LE_HALIGN_RIGHT);
    Home_Screen_label_LightsOnNum->fn->setString(Home_Screen_label_LightsOnNum, (leString*)&string_three);
    Home_Screen_panel_devicesSummary->fn->addChild(Home_Screen_panel_devicesSummary, (leWidget*)Home_Screen_label_LightsOnNum);

    Home_Screen_label_blindsOnNum = leLabelWidget_New();
    Home_Screen_label_blindsOnNum->fn->setPosition(Home_Screen_label_blindsOnNum, 230, 2);
    Home_Screen_label_blindsOnNum->fn->setSize(Home_Screen_label_blindsOnNum, 51, 37);
    Home_Screen_label_blindsOnNum->fn->setScheme(Home_Screen_label_blindsOnNum, &WhiteScheme);
    Home_Screen_label_blindsOnNum->fn->setBackgroundType(Home_Screen_label_blindsOnNum, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_blindsOnNum->fn->setHAlignment(Home_Screen_label_blindsOnNum, LE_HALIGN_RIGHT);
    Home_Screen_label_blindsOnNum->fn->setString(Home_Screen_label_blindsOnNum, (leString*)&string_one);
    Home_Screen_panel_devicesSummary->fn->addChild(Home_Screen_panel_devicesSummary, (leWidget*)Home_Screen_label_blindsOnNum);

    Home_Screen_label_devicesActiveNum = leLabelWidget_New();
    Home_Screen_label_devicesActiveNum->fn->setPosition(Home_Screen_label_devicesActiveNum, 430, 2);
    Home_Screen_label_devicesActiveNum->fn->setSize(Home_Screen_label_devicesActiveNum, 35, 37);
    Home_Screen_label_devicesActiveNum->fn->setScheme(Home_Screen_label_devicesActiveNum, &WhiteScheme);
    Home_Screen_label_devicesActiveNum->fn->setBackgroundType(Home_Screen_label_devicesActiveNum, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_devicesActiveNum->fn->setHAlignment(Home_Screen_label_devicesActiveNum, LE_HALIGN_RIGHT);
    Home_Screen_label_devicesActiveNum->fn->setString(Home_Screen_label_devicesActiveNum, (leString*)&string_one);
    Home_Screen_panel_devicesSummary->fn->addChild(Home_Screen_panel_devicesSummary, (leWidget*)Home_Screen_label_devicesActiveNum);

    Home_Screen_panel_AppliancesDevices1 = leWidget_New();
    Home_Screen_panel_AppliancesDevices1->fn->setPosition(Home_Screen_panel_AppliancesDevices1, 40, 124);
    Home_Screen_panel_AppliancesDevices1->fn->setSize(Home_Screen_panel_AppliancesDevices1, 508, 120);
    Home_Screen_panel_AppliancesDevices1->fn->setBackgroundType(Home_Screen_panel_AppliancesDevices1, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_devices->fn->addChild(Home_Screen_panel_devices, (leWidget*)Home_Screen_panel_AppliancesDevices1);

    Home_Screen_imageR_Dev1 = leImageWidget_New();
    Home_Screen_imageR_Dev1->fn->setPosition(Home_Screen_imageR_Dev1, 0, 0);
    Home_Screen_imageR_Dev1->fn->setSize(Home_Screen_imageR_Dev1, 120, 120);
    Home_Screen_imageR_Dev1->fn->setBackgroundType(Home_Screen_imageR_Dev1, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev1->fn->setBorderType(Home_Screen_imageR_Dev1, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev1->fn->setImage(Home_Screen_imageR_Dev1, (leImage*)&lampBttnOn);
    Home_Screen_panel_AppliancesDevices1->fn->addChild(Home_Screen_panel_AppliancesDevices1, (leWidget*)Home_Screen_imageR_Dev1);

    Home_Screen_LabelRoom1 = leLabelWidget_New();
    Home_Screen_LabelRoom1->fn->setPosition(Home_Screen_LabelRoom1, 6, 27);
    Home_Screen_LabelRoom1->fn->setSize(Home_Screen_LabelRoom1, 107, 25);
    Home_Screen_LabelRoom1->fn->setScheme(Home_Screen_LabelRoom1, &WhiteScheme);
    Home_Screen_LabelRoom1->fn->setBackgroundType(Home_Screen_LabelRoom1, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom1->fn->setString(Home_Screen_LabelRoom1, (leString*)&string_livRoomB);
    Home_Screen_imageR_Dev1->fn->addChild(Home_Screen_imageR_Dev1, (leWidget*)Home_Screen_LabelRoom1);

    Home_Screen_LabelDevice1 = leLabelWidget_New();
    Home_Screen_LabelDevice1->fn->setPosition(Home_Screen_LabelDevice1, 6, 50);
    Home_Screen_LabelDevice1->fn->setScheme(Home_Screen_LabelDevice1, &WhiteScheme);
    Home_Screen_LabelDevice1->fn->setBackgroundType(Home_Screen_LabelDevice1, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice1->fn->setString(Home_Screen_LabelDevice1, (leString*)&string_LightsB);
    Home_Screen_imageR_Dev1->fn->addChild(Home_Screen_imageR_Dev1, (leWidget*)Home_Screen_LabelDevice1);

    Home_Screen_LabelDev1_status = leLabelWidget_New();
    Home_Screen_LabelDev1_status->fn->setPosition(Home_Screen_LabelDev1_status, 6, 79);
    Home_Screen_LabelDev1_status->fn->setSize(Home_Screen_LabelDev1_status, 103, 25);
    Home_Screen_LabelDev1_status->fn->setScheme(Home_Screen_LabelDev1_status, &SpringgreenScheme);
    Home_Screen_LabelDev1_status->fn->setBackgroundType(Home_Screen_LabelDev1_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev1_status->fn->setString(Home_Screen_LabelDev1_status, (leString*)&string_ON);
    Home_Screen_imageR_Dev1->fn->addChild(Home_Screen_imageR_Dev1, (leWidget*)Home_Screen_LabelDev1_status);

    Home_Screen_ButtonDev1 = leButtonWidget_New();
    Home_Screen_ButtonDev1->fn->setPosition(Home_Screen_ButtonDev1, 0, 0);
    Home_Screen_ButtonDev1->fn->setSize(Home_Screen_ButtonDev1, 120, 120);
    Home_Screen_ButtonDev1->fn->setBackgroundType(Home_Screen_ButtonDev1, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev1->fn->setBorderType(Home_Screen_ButtonDev1, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev1->fn->setReleasedEventCallback(Home_Screen_ButtonDev1, event_Home_Screen_ButtonDev1_OnReleased);
    Home_Screen_imageR_Dev1->fn->addChild(Home_Screen_imageR_Dev1, (leWidget*)Home_Screen_ButtonDev1);

    Home_Screen_imageR_Dev2 = leImageWidget_New();
    Home_Screen_imageR_Dev2->fn->setPosition(Home_Screen_imageR_Dev2, 130, 0);
    Home_Screen_imageR_Dev2->fn->setSize(Home_Screen_imageR_Dev2, 120, 120);
    Home_Screen_imageR_Dev2->fn->setBackgroundType(Home_Screen_imageR_Dev2, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev2->fn->setBorderType(Home_Screen_imageR_Dev2, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev2->fn->setImage(Home_Screen_imageR_Dev2, (leImage*)&lampBttnOn);
    Home_Screen_panel_AppliancesDevices1->fn->addChild(Home_Screen_panel_AppliancesDevices1, (leWidget*)Home_Screen_imageR_Dev2);

    Home_Screen_LabelRoom2 = leLabelWidget_New();
    Home_Screen_LabelRoom2->fn->setPosition(Home_Screen_LabelRoom2, 6, 27);
    Home_Screen_LabelRoom2->fn->setSize(Home_Screen_LabelRoom2, 106, 25);
    Home_Screen_LabelRoom2->fn->setScheme(Home_Screen_LabelRoom2, &WhiteScheme);
    Home_Screen_LabelRoom2->fn->setBackgroundType(Home_Screen_LabelRoom2, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom2->fn->setString(Home_Screen_LabelRoom2, (leString*)&string_kichenB);
    Home_Screen_imageR_Dev2->fn->addChild(Home_Screen_imageR_Dev2, (leWidget*)Home_Screen_LabelRoom2);

    Home_Screen_LabelDevice2 = leLabelWidget_New();
    Home_Screen_LabelDevice2->fn->setPosition(Home_Screen_LabelDevice2, 6, 50);
    Home_Screen_LabelDevice2->fn->setScheme(Home_Screen_LabelDevice2, &WhiteScheme);
    Home_Screen_LabelDevice2->fn->setBackgroundType(Home_Screen_LabelDevice2, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice2->fn->setString(Home_Screen_LabelDevice2, (leString*)&string_LightsB);
    Home_Screen_imageR_Dev2->fn->addChild(Home_Screen_imageR_Dev2, (leWidget*)Home_Screen_LabelDevice2);

    Home_Screen_LabelDev2_status = leLabelWidget_New();
    Home_Screen_LabelDev2_status->fn->setPosition(Home_Screen_LabelDev2_status, 6, 79);
    Home_Screen_LabelDev2_status->fn->setSize(Home_Screen_LabelDev2_status, 103, 25);
    Home_Screen_LabelDev2_status->fn->setScheme(Home_Screen_LabelDev2_status, &SpringgreenScheme);
    Home_Screen_LabelDev2_status->fn->setBackgroundType(Home_Screen_LabelDev2_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev2_status->fn->setString(Home_Screen_LabelDev2_status, (leString*)&string_ON);
    Home_Screen_imageR_Dev2->fn->addChild(Home_Screen_imageR_Dev2, (leWidget*)Home_Screen_LabelDev2_status);

    Home_Screen_ButtonDev2 = leButtonWidget_New();
    Home_Screen_ButtonDev2->fn->setPosition(Home_Screen_ButtonDev2, 0, 0);
    Home_Screen_ButtonDev2->fn->setSize(Home_Screen_ButtonDev2, 120, 120);
    Home_Screen_ButtonDev2->fn->setBackgroundType(Home_Screen_ButtonDev2, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev2->fn->setBorderType(Home_Screen_ButtonDev2, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev2->fn->setReleasedEventCallback(Home_Screen_ButtonDev2, event_Home_Screen_ButtonDev2_OnReleased);
    Home_Screen_imageR_Dev2->fn->addChild(Home_Screen_imageR_Dev2, (leWidget*)Home_Screen_ButtonDev2);

    Home_Screen_imageR_Dev3 = leImageWidget_New();
    Home_Screen_imageR_Dev3->fn->setPosition(Home_Screen_imageR_Dev3, 259, 0);
    Home_Screen_imageR_Dev3->fn->setSize(Home_Screen_imageR_Dev3, 120, 120);
    Home_Screen_imageR_Dev3->fn->setBackgroundType(Home_Screen_imageR_Dev3, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev3->fn->setBorderType(Home_Screen_imageR_Dev3, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev3->fn->setImage(Home_Screen_imageR_Dev3, (leImage*)&lampBttnOn);
    Home_Screen_panel_AppliancesDevices1->fn->addChild(Home_Screen_panel_AppliancesDevices1, (leWidget*)Home_Screen_imageR_Dev3);

    Home_Screen_LabelRoom3 = leLabelWidget_New();
    Home_Screen_LabelRoom3->fn->setPosition(Home_Screen_LabelRoom3, 6, 27);
    Home_Screen_LabelRoom3->fn->setSize(Home_Screen_LabelRoom3, 106, 25);
    Home_Screen_LabelRoom3->fn->setScheme(Home_Screen_LabelRoom3, &WhiteScheme);
    Home_Screen_LabelRoom3->fn->setBackgroundType(Home_Screen_LabelRoom3, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom3->fn->setString(Home_Screen_LabelRoom3, (leString*)&string_BedroomB);
    Home_Screen_imageR_Dev3->fn->addChild(Home_Screen_imageR_Dev3, (leWidget*)Home_Screen_LabelRoom3);

    Home_Screen_LabelDevice3 = leLabelWidget_New();
    Home_Screen_LabelDevice3->fn->setPosition(Home_Screen_LabelDevice3, 6, 50);
    Home_Screen_LabelDevice3->fn->setScheme(Home_Screen_LabelDevice3, &WhiteScheme);
    Home_Screen_LabelDevice3->fn->setBackgroundType(Home_Screen_LabelDevice3, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice3->fn->setString(Home_Screen_LabelDevice3, (leString*)&string_LightsB);
    Home_Screen_imageR_Dev3->fn->addChild(Home_Screen_imageR_Dev3, (leWidget*)Home_Screen_LabelDevice3);

    Home_Screen_LabelDev3_status = leLabelWidget_New();
    Home_Screen_LabelDev3_status->fn->setPosition(Home_Screen_LabelDev3_status, 6, 79);
    Home_Screen_LabelDev3_status->fn->setSize(Home_Screen_LabelDev3_status, 103, 25);
    Home_Screen_LabelDev3_status->fn->setScheme(Home_Screen_LabelDev3_status, &SpringgreenScheme);
    Home_Screen_LabelDev3_status->fn->setBackgroundType(Home_Screen_LabelDev3_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev3_status->fn->setString(Home_Screen_LabelDev3_status, (leString*)&string_ON);
    Home_Screen_imageR_Dev3->fn->addChild(Home_Screen_imageR_Dev3, (leWidget*)Home_Screen_LabelDev3_status);

    Home_Screen_ButtonDev3 = leButtonWidget_New();
    Home_Screen_ButtonDev3->fn->setPosition(Home_Screen_ButtonDev3, 0, 0);
    Home_Screen_ButtonDev3->fn->setSize(Home_Screen_ButtonDev3, 120, 120);
    Home_Screen_ButtonDev3->fn->setBackgroundType(Home_Screen_ButtonDev3, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev3->fn->setBorderType(Home_Screen_ButtonDev3, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev3->fn->setReleasedEventCallback(Home_Screen_ButtonDev3, event_Home_Screen_ButtonDev3_OnReleased);
    Home_Screen_imageR_Dev3->fn->addChild(Home_Screen_imageR_Dev3, (leWidget*)Home_Screen_ButtonDev3);

    Home_Screen_imageR_Dev4 = leImageWidget_New();
    Home_Screen_imageR_Dev4->fn->setPosition(Home_Screen_imageR_Dev4, 388, 0);
    Home_Screen_imageR_Dev4->fn->setSize(Home_Screen_imageR_Dev4, 120, 120);
    Home_Screen_imageR_Dev4->fn->setBackgroundType(Home_Screen_imageR_Dev4, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev4->fn->setBorderType(Home_Screen_imageR_Dev4, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev4->fn->setImage(Home_Screen_imageR_Dev4, (leImage*)&fanBttnOff);
    Home_Screen_panel_AppliancesDevices1->fn->addChild(Home_Screen_panel_AppliancesDevices1, (leWidget*)Home_Screen_imageR_Dev4);

    Home_Screen_LabelRoom4 = leLabelWidget_New();
    Home_Screen_LabelRoom4->fn->setPosition(Home_Screen_LabelRoom4, 6, 27);
    Home_Screen_LabelRoom4->fn->setSize(Home_Screen_LabelRoom4, 107, 25);
    Home_Screen_LabelRoom4->fn->setScheme(Home_Screen_LabelRoom4, &WhiteScheme);
    Home_Screen_LabelRoom4->fn->setBackgroundType(Home_Screen_LabelRoom4, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom4->fn->setString(Home_Screen_LabelRoom4, (leString*)&string_livRoom);
    Home_Screen_imageR_Dev4->fn->addChild(Home_Screen_imageR_Dev4, (leWidget*)Home_Screen_LabelRoom4);

    Home_Screen_LabelDevice4 = leLabelWidget_New();
    Home_Screen_LabelDevice4->fn->setPosition(Home_Screen_LabelDevice4, 6, 50);
    Home_Screen_LabelDevice4->fn->setScheme(Home_Screen_LabelDevice4, &WhiteScheme);
    Home_Screen_LabelDevice4->fn->setBackgroundType(Home_Screen_LabelDevice4, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice4->fn->setString(Home_Screen_LabelDevice4, (leString*)&string_Fan);
    Home_Screen_imageR_Dev4->fn->addChild(Home_Screen_imageR_Dev4, (leWidget*)Home_Screen_LabelDevice4);

    Home_Screen_LabelDev4_status = leLabelWidget_New();
    Home_Screen_LabelDev4_status->fn->setPosition(Home_Screen_LabelDev4_status, 6, 79);
    Home_Screen_LabelDev4_status->fn->setSize(Home_Screen_LabelDev4_status, 103, 25);
    Home_Screen_LabelDev4_status->fn->setScheme(Home_Screen_LabelDev4_status, &LightGreyScheme);
    Home_Screen_LabelDev4_status->fn->setBackgroundType(Home_Screen_LabelDev4_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev4_status->fn->setString(Home_Screen_LabelDev4_status, (leString*)&string_OFF);
    Home_Screen_imageR_Dev4->fn->addChild(Home_Screen_imageR_Dev4, (leWidget*)Home_Screen_LabelDev4_status);

    Home_Screen_ButtonDev4 = leButtonWidget_New();
    Home_Screen_ButtonDev4->fn->setPosition(Home_Screen_ButtonDev4, 0, 0);
    Home_Screen_ButtonDev4->fn->setSize(Home_Screen_ButtonDev4, 120, 120);
    Home_Screen_ButtonDev4->fn->setBackgroundType(Home_Screen_ButtonDev4, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev4->fn->setBorderType(Home_Screen_ButtonDev4, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev4->fn->setReleasedEventCallback(Home_Screen_ButtonDev4, event_Home_Screen_ButtonDev4_OnReleased);
    Home_Screen_imageR_Dev4->fn->addChild(Home_Screen_imageR_Dev4, (leWidget*)Home_Screen_ButtonDev4);

    Home_Screen_panel_AppliancesDevices2 = leWidget_New();
    Home_Screen_panel_AppliancesDevices2->fn->setPosition(Home_Screen_panel_AppliancesDevices2, 40, 260);
    Home_Screen_panel_AppliancesDevices2->fn->setSize(Home_Screen_panel_AppliancesDevices2, 508, 120);
    Home_Screen_panel_AppliancesDevices2->fn->setBackgroundType(Home_Screen_panel_AppliancesDevices2, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_devices->fn->addChild(Home_Screen_panel_devices, (leWidget*)Home_Screen_panel_AppliancesDevices2);

    Home_Screen_imageR_Dev5 = leImageWidget_New();
    Home_Screen_imageR_Dev5->fn->setPosition(Home_Screen_imageR_Dev5, 0, 0);
    Home_Screen_imageR_Dev5->fn->setSize(Home_Screen_imageR_Dev5, 120, 120);
    Home_Screen_imageR_Dev5->fn->setBackgroundType(Home_Screen_imageR_Dev5, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev5->fn->setBorderType(Home_Screen_imageR_Dev5, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev5->fn->setImage(Home_Screen_imageR_Dev5, (leImage*)&blindsBttnOn);
    Home_Screen_panel_AppliancesDevices2->fn->addChild(Home_Screen_panel_AppliancesDevices2, (leWidget*)Home_Screen_imageR_Dev5);

    Home_Screen_LabelRoom5 = leLabelWidget_New();
    Home_Screen_LabelRoom5->fn->setPosition(Home_Screen_LabelRoom5, 6, 27);
    Home_Screen_LabelRoom5->fn->setSize(Home_Screen_LabelRoom5, 107, 25);
    Home_Screen_LabelRoom5->fn->setScheme(Home_Screen_LabelRoom5, &WhiteScheme);
    Home_Screen_LabelRoom5->fn->setBackgroundType(Home_Screen_LabelRoom5, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom5->fn->setString(Home_Screen_LabelRoom5, (leString*)&string_BedroomB);
    Home_Screen_imageR_Dev5->fn->addChild(Home_Screen_imageR_Dev5, (leWidget*)Home_Screen_LabelRoom5);

    Home_Screen_LabelDevice5 = leLabelWidget_New();
    Home_Screen_LabelDevice5->fn->setPosition(Home_Screen_LabelDevice5, 6, 50);
    Home_Screen_LabelDevice5->fn->setScheme(Home_Screen_LabelDevice5, &WhiteScheme);
    Home_Screen_LabelDevice5->fn->setBackgroundType(Home_Screen_LabelDevice5, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice5->fn->setString(Home_Screen_LabelDevice5, (leString*)&string_BlindsB);
    Home_Screen_imageR_Dev5->fn->addChild(Home_Screen_imageR_Dev5, (leWidget*)Home_Screen_LabelDevice5);

    Home_Screen_LabelDev5_status = leLabelWidget_New();
    Home_Screen_LabelDev5_status->fn->setPosition(Home_Screen_LabelDev5_status, 6, 79);
    Home_Screen_LabelDev5_status->fn->setSize(Home_Screen_LabelDev5_status, 103, 25);
    Home_Screen_LabelDev5_status->fn->setScheme(Home_Screen_LabelDev5_status, &SpringgreenScheme);
    Home_Screen_LabelDev5_status->fn->setBackgroundType(Home_Screen_LabelDev5_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev5_status->fn->setString(Home_Screen_LabelDev5_status, (leString*)&string_OPEN);
    Home_Screen_imageR_Dev5->fn->addChild(Home_Screen_imageR_Dev5, (leWidget*)Home_Screen_LabelDev5_status);

    Home_Screen_ButtonDev5 = leButtonWidget_New();
    Home_Screen_ButtonDev5->fn->setPosition(Home_Screen_ButtonDev5, 0, 0);
    Home_Screen_ButtonDev5->fn->setSize(Home_Screen_ButtonDev5, 120, 120);
    Home_Screen_ButtonDev5->fn->setBackgroundType(Home_Screen_ButtonDev5, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev5->fn->setBorderType(Home_Screen_ButtonDev5, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev5->fn->setReleasedEventCallback(Home_Screen_ButtonDev5, event_Home_Screen_ButtonDev5_OnReleased);
    Home_Screen_imageR_Dev5->fn->addChild(Home_Screen_imageR_Dev5, (leWidget*)Home_Screen_ButtonDev5);

    Home_Screen_imageR_Dev6 = leImageWidget_New();
    Home_Screen_imageR_Dev6->fn->setPosition(Home_Screen_imageR_Dev6, 130, 0);
    Home_Screen_imageR_Dev6->fn->setSize(Home_Screen_imageR_Dev6, 120, 120);
    Home_Screen_imageR_Dev6->fn->setBackgroundType(Home_Screen_imageR_Dev6, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev6->fn->setBorderType(Home_Screen_imageR_Dev6, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev6->fn->setImage(Home_Screen_imageR_Dev6, (leImage*)&tvBttnOn);
    Home_Screen_panel_AppliancesDevices2->fn->addChild(Home_Screen_panel_AppliancesDevices2, (leWidget*)Home_Screen_imageR_Dev6);

    Home_Screen_LabelRoom6 = leLabelWidget_New();
    Home_Screen_LabelRoom6->fn->setPosition(Home_Screen_LabelRoom6, 6, 27);
    Home_Screen_LabelRoom6->fn->setScheme(Home_Screen_LabelRoom6, &WhiteScheme);
    Home_Screen_LabelRoom6->fn->setBackgroundType(Home_Screen_LabelRoom6, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom6->fn->setString(Home_Screen_LabelRoom6, (leString*)&string_livRoomB);
    Home_Screen_imageR_Dev6->fn->addChild(Home_Screen_imageR_Dev6, (leWidget*)Home_Screen_LabelRoom6);

    Home_Screen_LabelDevice6 = leLabelWidget_New();
    Home_Screen_LabelDevice6->fn->setPosition(Home_Screen_LabelDevice6, 6, 50);
    Home_Screen_LabelDevice6->fn->setScheme(Home_Screen_LabelDevice6, &WhiteScheme);
    Home_Screen_LabelDevice6->fn->setBackgroundType(Home_Screen_LabelDevice6, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice6->fn->setString(Home_Screen_LabelDevice6, (leString*)&string_TVB);
    Home_Screen_imageR_Dev6->fn->addChild(Home_Screen_imageR_Dev6, (leWidget*)Home_Screen_LabelDevice6);

    Home_Screen_LabelDev6_status = leLabelWidget_New();
    Home_Screen_LabelDev6_status->fn->setPosition(Home_Screen_LabelDev6_status, 6, 79);
    Home_Screen_LabelDev6_status->fn->setSize(Home_Screen_LabelDev6_status, 103, 25);
    Home_Screen_LabelDev6_status->fn->setScheme(Home_Screen_LabelDev6_status, &SpringgreenScheme);
    Home_Screen_LabelDev6_status->fn->setBackgroundType(Home_Screen_LabelDev6_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev6_status->fn->setString(Home_Screen_LabelDev6_status, (leString*)&string_ON);
    Home_Screen_imageR_Dev6->fn->addChild(Home_Screen_imageR_Dev6, (leWidget*)Home_Screen_LabelDev6_status);

    Home_Screen_ButtonDev6 = leButtonWidget_New();
    Home_Screen_ButtonDev6->fn->setPosition(Home_Screen_ButtonDev6, 0, 0);
    Home_Screen_ButtonDev6->fn->setSize(Home_Screen_ButtonDev6, 120, 120);
    Home_Screen_ButtonDev6->fn->setBackgroundType(Home_Screen_ButtonDev6, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev6->fn->setBorderType(Home_Screen_ButtonDev6, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev6->fn->setReleasedEventCallback(Home_Screen_ButtonDev6, event_Home_Screen_ButtonDev6_OnReleased);
    Home_Screen_imageR_Dev6->fn->addChild(Home_Screen_imageR_Dev6, (leWidget*)Home_Screen_ButtonDev6);

    Home_Screen_imageR_Dev7 = leImageWidget_New();
    Home_Screen_imageR_Dev7->fn->setPosition(Home_Screen_imageR_Dev7, 259, 0);
    Home_Screen_imageR_Dev7->fn->setSize(Home_Screen_imageR_Dev7, 120, 120);
    Home_Screen_imageR_Dev7->fn->setBackgroundType(Home_Screen_imageR_Dev7, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev7->fn->setBorderType(Home_Screen_imageR_Dev7, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev7->fn->setImage(Home_Screen_imageR_Dev7, (leImage*)&robVacuumOff);
    Home_Screen_panel_AppliancesDevices2->fn->addChild(Home_Screen_panel_AppliancesDevices2, (leWidget*)Home_Screen_imageR_Dev7);

    Home_Screen_LabelRoom7 = leLabelWidget_New();
    Home_Screen_LabelRoom7->fn->setPosition(Home_Screen_LabelRoom7, 6, 27);
    Home_Screen_LabelRoom7->fn->setSize(Home_Screen_LabelRoom7, 100, 50);
    Home_Screen_LabelRoom7->fn->setScheme(Home_Screen_LabelRoom7, &WhiteScheme);
    Home_Screen_LabelRoom7->fn->setBackgroundType(Home_Screen_LabelRoom7, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom7->fn->setString(Home_Screen_LabelRoom7, (leString*)&string_roboVaccum);
    Home_Screen_imageR_Dev7->fn->addChild(Home_Screen_imageR_Dev7, (leWidget*)Home_Screen_LabelRoom7);

    Home_Screen_LabelDev7_status = leLabelWidget_New();
    Home_Screen_LabelDev7_status->fn->setPosition(Home_Screen_LabelDev7_status, 6, 79);
    Home_Screen_LabelDev7_status->fn->setSize(Home_Screen_LabelDev7_status, 103, 25);
    Home_Screen_LabelDev7_status->fn->setScheme(Home_Screen_LabelDev7_status, &LightGreyScheme);
    Home_Screen_LabelDev7_status->fn->setBackgroundType(Home_Screen_LabelDev7_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev7_status->fn->setString(Home_Screen_LabelDev7_status, (leString*)&string_OFF);
    Home_Screen_imageR_Dev7->fn->addChild(Home_Screen_imageR_Dev7, (leWidget*)Home_Screen_LabelDev7_status);

    Home_Screen_ButtonDev7 = leButtonWidget_New();
    Home_Screen_ButtonDev7->fn->setPosition(Home_Screen_ButtonDev7, 0, 0);
    Home_Screen_ButtonDev7->fn->setSize(Home_Screen_ButtonDev7, 120, 120);
    Home_Screen_ButtonDev7->fn->setBackgroundType(Home_Screen_ButtonDev7, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev7->fn->setBorderType(Home_Screen_ButtonDev7, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev7->fn->setReleasedEventCallback(Home_Screen_ButtonDev7, event_Home_Screen_ButtonDev7_OnReleased);
    Home_Screen_imageR_Dev7->fn->addChild(Home_Screen_imageR_Dev7, (leWidget*)Home_Screen_ButtonDev7);

    Home_Screen_imageR_Dev8 = leImageWidget_New();
    Home_Screen_imageR_Dev8->fn->setPosition(Home_Screen_imageR_Dev8, 388, 0);
    Home_Screen_imageR_Dev8->fn->setSize(Home_Screen_imageR_Dev8, 120, 120);
    Home_Screen_imageR_Dev8->fn->setBackgroundType(Home_Screen_imageR_Dev8, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageR_Dev8->fn->setBorderType(Home_Screen_imageR_Dev8, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageR_Dev8->fn->setImage(Home_Screen_imageR_Dev8, (leImage*)&fanBttnOff);
    Home_Screen_panel_AppliancesDevices2->fn->addChild(Home_Screen_panel_AppliancesDevices2, (leWidget*)Home_Screen_imageR_Dev8);

    Home_Screen_LabelRoom8 = leLabelWidget_New();
    Home_Screen_LabelRoom8->fn->setPosition(Home_Screen_LabelRoom8, 6, 27);
    Home_Screen_LabelRoom8->fn->setScheme(Home_Screen_LabelRoom8, &WhiteScheme);
    Home_Screen_LabelRoom8->fn->setBackgroundType(Home_Screen_LabelRoom8, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom8->fn->setString(Home_Screen_LabelRoom8, (leString*)&string_Bedroom);
    Home_Screen_imageR_Dev8->fn->addChild(Home_Screen_imageR_Dev8, (leWidget*)Home_Screen_LabelRoom8);

    Home_Screen_LabelDevice8 = leLabelWidget_New();
    Home_Screen_LabelDevice8->fn->setPosition(Home_Screen_LabelDevice8, 6, 50);
    Home_Screen_LabelDevice8->fn->setScheme(Home_Screen_LabelDevice8, &WhiteScheme);
    Home_Screen_LabelDevice8->fn->setBackgroundType(Home_Screen_LabelDevice8, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice8->fn->setString(Home_Screen_LabelDevice8, (leString*)&string_Fan);
    Home_Screen_imageR_Dev8->fn->addChild(Home_Screen_imageR_Dev8, (leWidget*)Home_Screen_LabelDevice8);

    Home_Screen_LabelDev8_status = leLabelWidget_New();
    Home_Screen_LabelDev8_status->fn->setPosition(Home_Screen_LabelDev8_status, 6, 79);
    Home_Screen_LabelDev8_status->fn->setScheme(Home_Screen_LabelDev8_status, &LightGreyScheme);
    Home_Screen_LabelDev8_status->fn->setBackgroundType(Home_Screen_LabelDev8_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev8_status->fn->setString(Home_Screen_LabelDev8_status, (leString*)&string_OFF);
    Home_Screen_imageR_Dev8->fn->addChild(Home_Screen_imageR_Dev8, (leWidget*)Home_Screen_LabelDev8_status);

    Home_Screen_ButtonDev8 = leButtonWidget_New();
    Home_Screen_ButtonDev8->fn->setPosition(Home_Screen_ButtonDev8, 0, 0);
    Home_Screen_ButtonDev8->fn->setSize(Home_Screen_ButtonDev8, 120, 120);
    Home_Screen_ButtonDev8->fn->setBackgroundType(Home_Screen_ButtonDev8, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonDev8->fn->setBorderType(Home_Screen_ButtonDev8, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonDev8->fn->setReleasedEventCallback(Home_Screen_ButtonDev8, event_Home_Screen_ButtonDev8_OnReleased);
    Home_Screen_imageR_Dev8->fn->addChild(Home_Screen_imageR_Dev8, (leWidget*)Home_Screen_ButtonDev8);

    Home_Screen_ButtonAddDevice = leButtonWidget_New();
    Home_Screen_ButtonAddDevice->fn->setPosition(Home_Screen_ButtonAddDevice, 442, 24);
    Home_Screen_ButtonAddDevice->fn->setSize(Home_Screen_ButtonAddDevice, 121, 36);
    Home_Screen_ButtonAddDevice->fn->setBackgroundType(Home_Screen_ButtonAddDevice, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ButtonAddDevice->fn->setBorderType(Home_Screen_ButtonAddDevice, LE_WIDGET_BORDER_NONE);
    Home_Screen_ButtonAddDevice->fn->setPressedImage(Home_Screen_ButtonAddDevice, (leImage*)&ButtonAddDevice);
    Home_Screen_ButtonAddDevice->fn->setReleasedImage(Home_Screen_ButtonAddDevice, (leImage*)&ButtonAddDevice);
    Home_Screen_panel_devices->fn->addChild(Home_Screen_panel_devices, (leWidget*)Home_Screen_ButtonAddDevice);

    Home_Screen_panel_sensors = leWidget_New();
    Home_Screen_panel_sensors->fn->setPosition(Home_Screen_panel_sensors, 620, 512);
    Home_Screen_panel_sensors->fn->setSize(Home_Screen_panel_sensors, 588, 280);
    Home_Screen_panel_sensors->fn->setBackgroundType(Home_Screen_panel_sensors, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_panel_Home_Screen->fn->addChild(Home_Screen_panel_Home_Screen, (leWidget*)Home_Screen_panel_sensors);

    Home_Screen_ImageSensors = leImageWidget_New();
    Home_Screen_ImageSensors->fn->setPosition(Home_Screen_ImageSensors, 0, 0);
    Home_Screen_ImageSensors->fn->setSize(Home_Screen_ImageSensors, 588, 280);
    Home_Screen_ImageSensors->fn->setBackgroundType(Home_Screen_ImageSensors, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ImageSensors->fn->setBorderType(Home_Screen_ImageSensors, LE_WIDGET_BORDER_NONE);
    Home_Screen_ImageSensors->fn->setImage(Home_Screen_ImageSensors, (leImage*)&sensorsCard);
    Home_Screen_panel_sensors->fn->addChild(Home_Screen_panel_sensors, (leWidget*)Home_Screen_ImageSensors);

    Home_Screen_panel_sensorsSummary = leWidget_New();
    Home_Screen_panel_sensorsSummary->fn->setPosition(Home_Screen_panel_sensorsSummary, 40, 70);
    Home_Screen_panel_sensorsSummary->fn->setSize(Home_Screen_panel_sensorsSummary, 508, 40);
    Home_Screen_panel_sensorsSummary->fn->setBackgroundType(Home_Screen_panel_sensorsSummary, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ImageSensors->fn->addChild(Home_Screen_ImageSensors, (leWidget*)Home_Screen_panel_sensorsSummary);

    Home_Screen_LabelDoorsOpen = leLabelWidget_New();
    Home_Screen_LabelDoorsOpen->fn->setPosition(Home_Screen_LabelDoorsOpen, 87, 1);
    Home_Screen_LabelDoorsOpen->fn->setSize(Home_Screen_LabelDoorsOpen, 72, 33);
    Home_Screen_LabelDoorsOpen->fn->setScheme(Home_Screen_LabelDoorsOpen, &WhiteScheme);
    Home_Screen_LabelDoorsOpen->fn->setBackgroundType(Home_Screen_LabelDoorsOpen, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDoorsOpen->fn->setString(Home_Screen_LabelDoorsOpen, (leString*)&string_figmaStr_DoorsOpen);
    Home_Screen_panel_sensorsSummary->fn->addChild(Home_Screen_panel_sensorsSummary, (leWidget*)Home_Screen_LabelDoorsOpen);

    Home_Screen_label_doorsOpenNum = leLabelWidget_New();
    Home_Screen_label_doorsOpenNum->fn->setPosition(Home_Screen_label_doorsOpenNum, 36, 0);
    Home_Screen_label_doorsOpenNum->fn->setSize(Home_Screen_label_doorsOpenNum, 47, 37);
    Home_Screen_label_doorsOpenNum->fn->setScheme(Home_Screen_label_doorsOpenNum, &WhiteScheme);
    Home_Screen_label_doorsOpenNum->fn->setBackgroundType(Home_Screen_label_doorsOpenNum, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_label_doorsOpenNum->fn->setHAlignment(Home_Screen_label_doorsOpenNum, LE_HALIGN_RIGHT);
    Home_Screen_label_doorsOpenNum->fn->setVAlignment(Home_Screen_label_doorsOpenNum, LE_VALIGN_TOP);
    Home_Screen_label_doorsOpenNum->fn->setString(Home_Screen_label_doorsOpenNum, (leString*)&string_zero);
    Home_Screen_panel_sensorsSummary->fn->addChild(Home_Screen_panel_sensorsSummary, (leWidget*)Home_Screen_label_doorsOpenNum);

    Home_Screen_LabelWindowsOpen = leLabelWidget_New();
    Home_Screen_LabelWindowsOpen->fn->setPosition(Home_Screen_LabelWindowsOpen, 280, 1);
    Home_Screen_LabelWindowsOpen->fn->setSize(Home_Screen_LabelWindowsOpen, 55, 33);
    Home_Screen_LabelWindowsOpen->fn->setScheme(Home_Screen_LabelWindowsOpen, &WhiteScheme);
    Home_Screen_LabelWindowsOpen->fn->setBackgroundType(Home_Screen_LabelWindowsOpen, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelWindowsOpen->fn->setString(Home_Screen_LabelWindowsOpen, (leString*)&string_figmaStr_WindowsOpen);
    Home_Screen_panel_sensorsSummary->fn->addChild(Home_Screen_panel_sensorsSummary, (leWidget*)Home_Screen_LabelWindowsOpen);

    Home_Screen_LabelWindowsOpenNum = leLabelWidget_New();
    Home_Screen_LabelWindowsOpenNum->fn->setPosition(Home_Screen_LabelWindowsOpenNum, 230, 0);
    Home_Screen_LabelWindowsOpenNum->fn->setSize(Home_Screen_LabelWindowsOpenNum, 49, 37);
    Home_Screen_LabelWindowsOpenNum->fn->setScheme(Home_Screen_LabelWindowsOpenNum, &WhiteScheme);
    Home_Screen_LabelWindowsOpenNum->fn->setBackgroundType(Home_Screen_LabelWindowsOpenNum, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelWindowsOpenNum->fn->setHAlignment(Home_Screen_LabelWindowsOpenNum, LE_HALIGN_RIGHT);
    Home_Screen_LabelWindowsOpenNum->fn->setVAlignment(Home_Screen_LabelWindowsOpenNum, LE_VALIGN_TOP);
    Home_Screen_LabelWindowsOpenNum->fn->setString(Home_Screen_LabelWindowsOpenNum, (leString*)&string_one);
    Home_Screen_panel_sensorsSummary->fn->addChild(Home_Screen_panel_sensorsSummary, (leWidget*)Home_Screen_LabelWindowsOpenNum);

    Home_Screen_panel_sensors = leWidget_New();
    Home_Screen_panel_sensors->fn->setPosition(Home_Screen_panel_sensors, 40, 126);
    Home_Screen_panel_sensors->fn->setSize(Home_Screen_panel_sensors, 508, 120);
    Home_Screen_panel_sensors->fn->setBackgroundType(Home_Screen_panel_sensors, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_ImageSensors->fn->addChild(Home_Screen_ImageSensors, (leWidget*)Home_Screen_panel_sensors);

    Home_Screen_imageO_Dev1 = leImageWidget_New();
    Home_Screen_imageO_Dev1->fn->setPosition(Home_Screen_imageO_Dev1, 0, 0);
    Home_Screen_imageO_Dev1->fn->setSize(Home_Screen_imageO_Dev1, 120, 120);
    Home_Screen_imageO_Dev1->fn->setBackgroundType(Home_Screen_imageO_Dev1, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageO_Dev1->fn->setBorderType(Home_Screen_imageO_Dev1, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageO_Dev1->fn->setImage(Home_Screen_imageO_Dev1, (leImage*)&doorBttnClosed);
    Home_Screen_panel_sensors->fn->addChild(Home_Screen_panel_sensors, (leWidget*)Home_Screen_imageO_Dev1);

    Home_Screen_LabelRoom9 = leLabelWidget_New();
    Home_Screen_LabelRoom9->fn->setPosition(Home_Screen_LabelRoom9, 6, 27);
    Home_Screen_LabelRoom9->fn->setScheme(Home_Screen_LabelRoom9, &WhiteScheme);
    Home_Screen_LabelRoom9->fn->setBackgroundType(Home_Screen_LabelRoom9, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom9->fn->setString(Home_Screen_LabelRoom9, (leString*)&string_Front);
    Home_Screen_imageO_Dev1->fn->addChild(Home_Screen_imageO_Dev1, (leWidget*)Home_Screen_LabelRoom9);

    Home_Screen_LabelDevice9 = leLabelWidget_New();
    Home_Screen_LabelDevice9->fn->setPosition(Home_Screen_LabelDevice9, 6, 50);
    Home_Screen_LabelDevice9->fn->setScheme(Home_Screen_LabelDevice9, &WhiteScheme);
    Home_Screen_LabelDevice9->fn->setBackgroundType(Home_Screen_LabelDevice9, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice9->fn->setString(Home_Screen_LabelDevice9, (leString*)&string_Door);
    Home_Screen_imageO_Dev1->fn->addChild(Home_Screen_imageO_Dev1, (leWidget*)Home_Screen_LabelDevice9);

    Home_Screen_LabelDev9_status = leLabelWidget_New();
    Home_Screen_LabelDev9_status->fn->setPosition(Home_Screen_LabelDev9_status, 6, 79);
    Home_Screen_LabelDev9_status->fn->setScheme(Home_Screen_LabelDev9_status, &LightGreyScheme);
    Home_Screen_LabelDev9_status->fn->setBackgroundType(Home_Screen_LabelDev9_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev9_status->fn->setString(Home_Screen_LabelDev9_status, (leString*)&string_CLOSED);
    Home_Screen_imageO_Dev1->fn->addChild(Home_Screen_imageO_Dev1, (leWidget*)Home_Screen_LabelDev9_status);

    Home_Screen_imageO_Dev2 = leImageWidget_New();
    Home_Screen_imageO_Dev2->fn->setPosition(Home_Screen_imageO_Dev2, 130, 0);
    Home_Screen_imageO_Dev2->fn->setSize(Home_Screen_imageO_Dev2, 120, 120);
    Home_Screen_imageO_Dev2->fn->setBackgroundType(Home_Screen_imageO_Dev2, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageO_Dev2->fn->setBorderType(Home_Screen_imageO_Dev2, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageO_Dev2->fn->setImage(Home_Screen_imageO_Dev2, (leImage*)&windowBttonOpen);
    Home_Screen_panel_sensors->fn->addChild(Home_Screen_panel_sensors, (leWidget*)Home_Screen_imageO_Dev2);

    Home_Screen_LabelRoom10 = leLabelWidget_New();
    Home_Screen_LabelRoom10->fn->setPosition(Home_Screen_LabelRoom10, 6, 27);
    Home_Screen_LabelRoom10->fn->setScheme(Home_Screen_LabelRoom10, &WhiteScheme);
    Home_Screen_LabelRoom10->fn->setBackgroundType(Home_Screen_LabelRoom10, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom10->fn->setString(Home_Screen_LabelRoom10, (leString*)&string_BedroomB);
    Home_Screen_imageO_Dev2->fn->addChild(Home_Screen_imageO_Dev2, (leWidget*)Home_Screen_LabelRoom10);

    Home_Screen_LabelDevice10 = leLabelWidget_New();
    Home_Screen_LabelDevice10->fn->setPosition(Home_Screen_LabelDevice10, 6, 50);
    Home_Screen_LabelDevice10->fn->setScheme(Home_Screen_LabelDevice10, &WhiteScheme);
    Home_Screen_LabelDevice10->fn->setBackgroundType(Home_Screen_LabelDevice10, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice10->fn->setString(Home_Screen_LabelDevice10, (leString*)&string_WindowB);
    Home_Screen_imageO_Dev2->fn->addChild(Home_Screen_imageO_Dev2, (leWidget*)Home_Screen_LabelDevice10);

    Home_Screen_LabelDev10_status = leLabelWidget_New();
    Home_Screen_LabelDev10_status->fn->setPosition(Home_Screen_LabelDev10_status, 6, 78);
    Home_Screen_LabelDev10_status->fn->setSize(Home_Screen_LabelDev10_status, 100, 26);
    Home_Screen_LabelDev10_status->fn->setScheme(Home_Screen_LabelDev10_status, &SpringgreenScheme);
    Home_Screen_LabelDev10_status->fn->setBackgroundType(Home_Screen_LabelDev10_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev10_status->fn->setString(Home_Screen_LabelDev10_status, (leString*)&string_OPEN);
    Home_Screen_imageO_Dev2->fn->addChild(Home_Screen_imageO_Dev2, (leWidget*)Home_Screen_LabelDev10_status);

    Home_Screen_imageO_Dev3 = leImageWidget_New();
    Home_Screen_imageO_Dev3->fn->setPosition(Home_Screen_imageO_Dev3, 259, 0);
    Home_Screen_imageO_Dev3->fn->setSize(Home_Screen_imageO_Dev3, 120, 120);
    Home_Screen_imageO_Dev3->fn->setBackgroundType(Home_Screen_imageO_Dev3, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageO_Dev3->fn->setBorderType(Home_Screen_imageO_Dev3, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageO_Dev3->fn->setImage(Home_Screen_imageO_Dev3, (leImage*)&garageBttnClosed);
    Home_Screen_panel_sensors->fn->addChild(Home_Screen_panel_sensors, (leWidget*)Home_Screen_imageO_Dev3);

    Home_Screen_LabelRoom11 = leLabelWidget_New();
    Home_Screen_LabelRoom11->fn->setPosition(Home_Screen_LabelRoom11, 6, 27);
    Home_Screen_LabelRoom11->fn->setScheme(Home_Screen_LabelRoom11, &WhiteScheme);
    Home_Screen_LabelRoom11->fn->setBackgroundType(Home_Screen_LabelRoom11, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom11->fn->setString(Home_Screen_LabelRoom11, (leString*)&string_Garage);
    Home_Screen_imageO_Dev3->fn->addChild(Home_Screen_imageO_Dev3, (leWidget*)Home_Screen_LabelRoom11);

    Home_Screen_LabelDevice11 = leLabelWidget_New();
    Home_Screen_LabelDevice11->fn->setPosition(Home_Screen_LabelDevice11, 6, 50);
    Home_Screen_LabelDevice11->fn->setScheme(Home_Screen_LabelDevice11, &WhiteScheme);
    Home_Screen_LabelDevice11->fn->setBackgroundType(Home_Screen_LabelDevice11, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice11->fn->setString(Home_Screen_LabelDevice11, (leString*)&string_Door);
    Home_Screen_imageO_Dev3->fn->addChild(Home_Screen_imageO_Dev3, (leWidget*)Home_Screen_LabelDevice11);

    Home_Screen_LabelDev11_status = leLabelWidget_New();
    Home_Screen_LabelDev11_status->fn->setPosition(Home_Screen_LabelDev11_status, 6, 79);
    Home_Screen_LabelDev11_status->fn->setScheme(Home_Screen_LabelDev11_status, &LightGreyScheme);
    Home_Screen_LabelDev11_status->fn->setBackgroundType(Home_Screen_LabelDev11_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev11_status->fn->setString(Home_Screen_LabelDev11_status, (leString*)&string_CLOSED);
    Home_Screen_imageO_Dev3->fn->addChild(Home_Screen_imageO_Dev3, (leWidget*)Home_Screen_LabelDev11_status);

    Home_Screen_imageO_Dev4 = leImageWidget_New();
    Home_Screen_imageO_Dev4->fn->setPosition(Home_Screen_imageO_Dev4, 388, 0);
    Home_Screen_imageO_Dev4->fn->setSize(Home_Screen_imageO_Dev4, 120, 120);
    Home_Screen_imageO_Dev4->fn->setBackgroundType(Home_Screen_imageO_Dev4, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_imageO_Dev4->fn->setBorderType(Home_Screen_imageO_Dev4, LE_WIDGET_BORDER_NONE);
    Home_Screen_imageO_Dev4->fn->setImage(Home_Screen_imageO_Dev4, (leImage*)&windowBttonClosed);
    Home_Screen_panel_sensors->fn->addChild(Home_Screen_panel_sensors, (leWidget*)Home_Screen_imageO_Dev4);

    Home_Screen_LabelRoom12 = leLabelWidget_New();
    Home_Screen_LabelRoom12->fn->setPosition(Home_Screen_LabelRoom12, 7, 27);
    Home_Screen_LabelRoom12->fn->setScheme(Home_Screen_LabelRoom12, &WhiteScheme);
    Home_Screen_LabelRoom12->fn->setBackgroundType(Home_Screen_LabelRoom12, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelRoom12->fn->setString(Home_Screen_LabelRoom12, (leString*)&string_livRoom);
    Home_Screen_imageO_Dev4->fn->addChild(Home_Screen_imageO_Dev4, (leWidget*)Home_Screen_LabelRoom12);

    Home_Screen_LabelDevice12 = leLabelWidget_New();
    Home_Screen_LabelDevice12->fn->setPosition(Home_Screen_LabelDevice12, 6, 50);
    Home_Screen_LabelDevice12->fn->setScheme(Home_Screen_LabelDevice12, &WhiteScheme);
    Home_Screen_LabelDevice12->fn->setBackgroundType(Home_Screen_LabelDevice12, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDevice12->fn->setString(Home_Screen_LabelDevice12, (leString*)&string_Window);
    Home_Screen_imageO_Dev4->fn->addChild(Home_Screen_imageO_Dev4, (leWidget*)Home_Screen_LabelDevice12);

    Home_Screen_LabelDev12_status = leLabelWidget_New();
    Home_Screen_LabelDev12_status->fn->setPosition(Home_Screen_LabelDev12_status, 6, 79);
    Home_Screen_LabelDev12_status->fn->setScheme(Home_Screen_LabelDev12_status, &LightGreyScheme);
    Home_Screen_LabelDev12_status->fn->setBackgroundType(Home_Screen_LabelDev12_status, LE_WIDGET_BACKGROUND_NONE);
    Home_Screen_LabelDev12_status->fn->setString(Home_Screen_LabelDev12_status, (leString*)&string_CLOSED);
    Home_Screen_imageO_Dev4->fn->addChild(Home_Screen_imageO_Dev4, (leWidget*)Home_Screen_LabelDev12_status);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Home_Screen_PanelWidget_0 = leWidget_New();
    Home_Screen_PanelWidget_0->fn->setPosition(Home_Screen_PanelWidget_0, 100, 200);
    Home_Screen_PanelWidget_0->fn->setSize(Home_Screen_PanelWidget_0, 350, 250);
    Home_Screen_PanelWidget_0->fn->setEnabled(Home_Screen_PanelWidget_0, LE_FALSE);
    Home_Screen_PanelWidget_0->fn->setVisible(Home_Screen_PanelWidget_0, LE_FALSE);
    Home_Screen_PanelWidget_0->fn->setBackgroundType(Home_Screen_PanelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)Home_Screen_PanelWidget_0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    Home_Screen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Home_Screen(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    root1->fn->setSize(root1, root1->rect.width, root1->rect.height);

    Home_Screen_OnUpdate(); // raise event
}

void screenHide_Home_Screen(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Home_Screen_panel_Home_Screen = NULL;
    Home_Screen_panel_statusBar = NULL;
    Home_Screen_panel_security = NULL;
    Home_Screen_panel_thermostat = NULL;
    Home_Screen_panel_devices = NULL;
    Home_Screen_panel_sensors = NULL;
    Home_Screen_image_statusBar = NULL;
    Home_Screen_image_Mode = NULL;
    Home_Screen_button_Mode = NULL;
    Home_Screen_image_selMode = NULL;
    Home_Screen_label_selMode = NULL;
    Home_Screen_PanelDate_Time = NULL;
    Home_Screen_LabelSensorWarning = NULL;
    Home_Screen_Label_time = NULL;
    Home_Screen_Label_date = NULL;
    Home_Screen_image_securityCard = NULL;
    Home_Screen_LabelCameraEvent = NULL;
    Home_Screen_LabelCameraEventNum = NULL;
    Home_Screen_Image_thermostatCard = NULL;
    Home_Screen_ImageThermoMode = NULL;
    Home_Screen_ButtonThermoMode = NULL;
    Home_Screen_ButtonThermoUp = NULL;
    Home_Screen_ButtonThermoDown = NULL;
    Home_Screen_LabelTempCur = NULL;
    Home_Screen_image_devicesCard = NULL;
    Home_Screen_panel_devicesSummary = NULL;
    Home_Screen_panel_AppliancesDevices1 = NULL;
    Home_Screen_panel_AppliancesDevices2 = NULL;
    Home_Screen_ButtonAddDevice = NULL;
    Home_Screen_label_LightsOn = NULL;
    Home_Screen_label_blindsOn = NULL;
    Home_Screen_label_devicesActive = NULL;
    Home_Screen_label_LightsOnNum = NULL;
    Home_Screen_label_blindsOnNum = NULL;
    Home_Screen_label_devicesActiveNum = NULL;
    Home_Screen_imageR_Dev1 = NULL;
    Home_Screen_imageR_Dev2 = NULL;
    Home_Screen_imageR_Dev3 = NULL;
    Home_Screen_imageR_Dev4 = NULL;
    Home_Screen_LabelRoom1 = NULL;
    Home_Screen_LabelDevice1 = NULL;
    Home_Screen_LabelDev1_status = NULL;
    Home_Screen_ButtonDev1 = NULL;
    Home_Screen_LabelRoom2 = NULL;
    Home_Screen_LabelDevice2 = NULL;
    Home_Screen_LabelDev2_status = NULL;
    Home_Screen_ButtonDev2 = NULL;
    Home_Screen_LabelRoom3 = NULL;
    Home_Screen_LabelDevice3 = NULL;
    Home_Screen_LabelDev3_status = NULL;
    Home_Screen_ButtonDev3 = NULL;
    Home_Screen_LabelRoom4 = NULL;
    Home_Screen_LabelDevice4 = NULL;
    Home_Screen_LabelDev4_status = NULL;
    Home_Screen_ButtonDev4 = NULL;
    Home_Screen_imageR_Dev5 = NULL;
    Home_Screen_imageR_Dev6 = NULL;
    Home_Screen_imageR_Dev7 = NULL;
    Home_Screen_imageR_Dev8 = NULL;
    Home_Screen_LabelRoom5 = NULL;
    Home_Screen_LabelDevice5 = NULL;
    Home_Screen_LabelDev5_status = NULL;
    Home_Screen_ButtonDev5 = NULL;
    Home_Screen_LabelRoom6 = NULL;
    Home_Screen_LabelDevice6 = NULL;
    Home_Screen_LabelDev6_status = NULL;
    Home_Screen_ButtonDev6 = NULL;
    Home_Screen_LabelRoom7 = NULL;
    Home_Screen_LabelDev7_status = NULL;
    Home_Screen_ButtonDev7 = NULL;
    Home_Screen_LabelRoom8 = NULL;
    Home_Screen_LabelDevice8 = NULL;
    Home_Screen_LabelDev8_status = NULL;
    Home_Screen_ButtonDev8 = NULL;
    Home_Screen_ImageSensors = NULL;
    Home_Screen_panel_sensorsSummary = NULL;
    Home_Screen_panel_sensors = NULL;
    Home_Screen_LabelDoorsOpen = NULL;
    Home_Screen_label_doorsOpenNum = NULL;
    Home_Screen_LabelWindowsOpen = NULL;
    Home_Screen_LabelWindowsOpenNum = NULL;
    Home_Screen_imageO_Dev1 = NULL;
    Home_Screen_imageO_Dev2 = NULL;
    Home_Screen_imageO_Dev3 = NULL;
    Home_Screen_imageO_Dev4 = NULL;
    Home_Screen_LabelRoom9 = NULL;
    Home_Screen_LabelDevice9 = NULL;
    Home_Screen_LabelDev9_status = NULL;
    Home_Screen_LabelRoom10 = NULL;
    Home_Screen_LabelDevice10 = NULL;
    Home_Screen_LabelDev10_status = NULL;
    Home_Screen_LabelRoom11 = NULL;
    Home_Screen_LabelDevice11 = NULL;
    Home_Screen_LabelDev11_status = NULL;
    Home_Screen_LabelRoom12 = NULL;
    Home_Screen_LabelDevice12 = NULL;
    Home_Screen_LabelDev12_status = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Home_Screen_PanelWidget_0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Home_Screen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Home_Screen(uint32_t lyrIdx)
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

