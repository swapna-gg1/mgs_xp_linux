#ifndef LE_GEN_SCREEN_HOME_SCREEN_H
#define LE_GEN_SCREEN_HOME_SCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Home_Screen_panel_Home_Screen;
extern leWidget* Home_Screen_panel_statusBar;
extern leWidget* Home_Screen_panel_security;
extern leWidget* Home_Screen_panel_thermostat;
extern leWidget* Home_Screen_panel_devices;
extern leWidget* Home_Screen_panel_sensors;
extern leImageWidget* Home_Screen_image_statusBar;
extern leImageWidget* Home_Screen_image_Mode;
extern leButtonWidget* Home_Screen_button_Mode;
extern leImageWidget* Home_Screen_image_selMode;
extern leLabelWidget* Home_Screen_label_selMode;
extern leWidget* Home_Screen_PanelDate_Time;
extern leLabelWidget* Home_Screen_LabelSensorWarning;
extern leLabelWidget* Home_Screen_Label_time;
extern leLabelWidget* Home_Screen_Label_date;
extern leImageWidget* Home_Screen_image_securityCard;
extern leLabelWidget* Home_Screen_LabelCameraEvent;
extern leLabelWidget* Home_Screen_LabelCameraEventNum;
extern leImageWidget* Home_Screen_Image_thermostatCard;
extern leImageWidget* Home_Screen_ImageThermoMode;
extern leButtonWidget* Home_Screen_ButtonThermoMode;
extern leButtonWidget* Home_Screen_ButtonThermoUp;
extern leButtonWidget* Home_Screen_ButtonThermoDown;
extern leLabelWidget* Home_Screen_LabelTempCur;
extern leImageWidget* Home_Screen_image_devicesCard;
extern leWidget* Home_Screen_panel_devicesSummary;
extern leWidget* Home_Screen_panel_AppliancesDevices1;
extern leWidget* Home_Screen_panel_AppliancesDevices2;
extern leButtonWidget* Home_Screen_ButtonAddDevice;
extern leLabelWidget* Home_Screen_label_LightsOn;
extern leLabelWidget* Home_Screen_label_blindsOn;
extern leLabelWidget* Home_Screen_label_devicesActive;
extern leLabelWidget* Home_Screen_label_LightsOnNum;
extern leLabelWidget* Home_Screen_label_blindsOnNum;
extern leLabelWidget* Home_Screen_label_devicesActiveNum;
extern leImageWidget* Home_Screen_imageR_Dev1;
extern leImageWidget* Home_Screen_imageR_Dev2;
extern leImageWidget* Home_Screen_imageR_Dev3;
extern leImageWidget* Home_Screen_imageR_Dev4;
extern leLabelWidget* Home_Screen_LabelRoom1;
extern leLabelWidget* Home_Screen_LabelDevice1;
extern leLabelWidget* Home_Screen_LabelDev1_status;
extern leButtonWidget* Home_Screen_ButtonDev1;
extern leLabelWidget* Home_Screen_LabelRoom2;
extern leLabelWidget* Home_Screen_LabelDevice2;
extern leLabelWidget* Home_Screen_LabelDev2_status;
extern leLabelWidget* Home_Screen_LabelRoom3;
extern leLabelWidget* Home_Screen_LabelDevice3;
extern leLabelWidget* Home_Screen_LabelDev3_status;
extern leLabelWidget* Home_Screen_LabelRoom4;
extern leLabelWidget* Home_Screen_LabelDevice4;
extern leLabelWidget* Home_Screen_LabelDev4_status;
extern leImageWidget* Home_Screen_imageR_Dev5;
extern leImageWidget* Home_Screen_imageR_Dev6;
extern leImageWidget* Home_Screen_imageR_Dev7;
extern leImageWidget* Home_Screen_imageR_Dev8;
extern leLabelWidget* Home_Screen_LabelRoom5;
extern leLabelWidget* Home_Screen_LabelDevice5;
extern leLabelWidget* Home_Screen_LabelDev5_status;
extern leLabelWidget* Home_Screen_LabelRoom6;
extern leLabelWidget* Home_Screen_LabelDevice6;
extern leLabelWidget* Home_Screen_LabelDev6_status;
extern leLabelWidget* Home_Screen_LabelRoom7;
extern leLabelWidget* Home_Screen_LabelDev7_status;
extern leLabelWidget* Home_Screen_LabelRoom8;
extern leLabelWidget* Home_Screen_LabelDevice8;
extern leLabelWidget* Home_Screen_LabelDev8_status;
extern leButtonWidget* Home_Screen_ButtonDev8;
extern leImageWidget* Home_Screen_ImageSensors;
extern leWidget* Home_Screen_panel_sensorsSummary;
extern leWidget* Home_Screen_panel_sensors;
extern leLabelWidget* Home_Screen_LabelDoorsOpen;
extern leLabelWidget* Home_Screen_label_doorsOpenNum;
extern leLabelWidget* Home_Screen_LabelWindowsOpen;
extern leLabelWidget* Home_Screen_LabelWindowsOpenNum;
extern leImageWidget* Home_Screen_imageO_Dev1;
extern leImageWidget* Home_Screen_imageO_Dev2;
extern leImageWidget* Home_Screen_imageO_Dev3;
extern leImageWidget* Home_Screen_imageO_Dev4;
extern leLabelWidget* Home_Screen_LabelRoom9;
extern leLabelWidget* Home_Screen_LabelDevice9;
extern leLabelWidget* Home_Screen_LabelDev9_status;
extern leLabelWidget* Home_Screen_LabelRoom10;
extern leLabelWidget* Home_Screen_LabelDevice10;
extern leLabelWidget* Home_Screen_LabelDev10_status;
extern leLabelWidget* Home_Screen_LabelRoom11;
extern leLabelWidget* Home_Screen_LabelDevice11;
extern leLabelWidget* Home_Screen_LabelDev11_status;
extern leLabelWidget* Home_Screen_LabelRoom12;
extern leLabelWidget* Home_Screen_LabelDevice12;
extern leLabelWidget* Home_Screen_LabelDev12_status;
extern leWidget* Home_Screen_PanelWidget_0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Home_Screen_ButtonThermoMode_OnReleased(leButtonWidget* btn);
void event_Home_Screen_ButtonThermoUp_OnReleased(leButtonWidget* btn);
void event_Home_Screen_ButtonThermoDown_OnReleased(leButtonWidget* btn);
void event_Home_Screen_ButtonDev1_OnReleased(leButtonWidget* btn);
void event_Home_Screen_ButtonDev8_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Home_Screen(void); // called when Legato is initialized
leResult screenShow_Home_Screen(void); // called when screen is shown
void screenHide_Home_Screen(void); // called when screen is hidden
void screenDestroy_Home_Screen(void); // called when Legato is destroyed
void screenUpdate_Home_Screen(void); // called when Legato is updating

leWidget* screenGetRoot_Home_Screen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Home_Screen_OnShow(void); // called when this screen is shown
void Home_Screen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_HOME_SCREEN_H
