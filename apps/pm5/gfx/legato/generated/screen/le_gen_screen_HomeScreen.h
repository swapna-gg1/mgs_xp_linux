#ifndef LE_GEN_SCREEN_HOMESCREEN_H
#define LE_GEN_SCREEN_HOMESCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* HomeScreen_Home;
extern leWidget* HomeScreen_pnlVisibleArea;
extern leWidget* HomeScreen_Side_Nav;
extern leWidget* HomeScreen_Bottom_Buttons;
extern leWidget* HomeScreen_Tabs;
extern leWidget* HomeScreen_pnlPAPanels;
extern leImageWidget* HomeScreen_imgPA0Panel;
extern leImageWidget* HomeScreen_imgPA1Panel;
extern leImageWidget* HomeScreen_imgPA2Panel;
extern leImageWidget* HomeScreen_imgPA3Panel;
extern leImageWidget* HomeScreen_imgPA4Panel;
extern leLineWidget* HomeScreen_ln1;
extern leLineWidget* HomeScreen_ln2;
extern leLineWidget* HomeScreen_ln3;
extern leImageWidget* HomeScreen_imgPassFail;
extern leLabelWidget* HomeScreen_lbPA0;
extern leLabelWidget* HomeScreen_lblPassedCount_0;
extern leLabelWidget* HomeScreen_lblFailedCount_0;
extern leLabelWidget* HomeScreen_lblPassed_0;
extern leLabelWidget* HomeScreen_lblFailed_0;
extern leLabelWidget* HomeScreen_lblDevice;
extern leLabelWidget* HomeScreen_lblEnv;
extern leLabelWidget* HomeScreen_lblSocket;
extern leLabelWidget* HomeScreen_lblDevice_0;
extern leLabelWidget* HomeScreen_lblEnv_0;
extern leLabelWidget* HomeScreen_lblSocket_0;
extern leImageWidget* HomeScreen_imgPassFail_0;
extern leLabelWidget* HomeScreen_lbPA1;
extern leLabelWidget* HomeScreen_lblPassedCount_1;
extern leLabelWidget* HomeScreen_lblFailedCount_1;
extern leLabelWidget* HomeScreen_lblPassed_1;
extern leLabelWidget* HomeScreen_lblFailed_1;
extern leLabelWidget* HomeScreen_lblEnv_1;
extern leLabelWidget* HomeScreen_lblSocket_1;
extern leLabelWidget* HomeScreen_lblDevice_1;
extern leLineWidget* HomeScreen_ln3_0;
extern leLineWidget* HomeScreen_ln2_0;
extern leLineWidget* HomeScreen_ln1_0;
extern leLabelWidget* HomeScreen_lblDevice_1;
extern leLabelWidget* HomeScreen_lblEnv_1;
extern leLabelWidget* HomeScreen_lblSocket_1;
extern leImageWidget* HomeScreen_imgPassFail_1;
extern leLabelWidget* HomeScreen_lbPA2;
extern leLabelWidget* HomeScreen_lblPassedCount_2;
extern leLabelWidget* HomeScreen_lblFailedCount_2;
extern leLabelWidget* HomeScreen_lblPassed_2;
extern leLabelWidget* HomeScreen_lblFailed_2;
extern leLabelWidget* HomeScreen_lblEnv_2;
extern leLabelWidget* HomeScreen_lblSocket_2;
extern leLabelWidget* HomeScreen_lblDevice_2;
extern leLineWidget* HomeScreen_ln3_1;
extern leLineWidget* HomeScreen_ln2_1;
extern leLineWidget* HomeScreen_ln1_1;
extern leLabelWidget* HomeScreen_lblDevice_2;
extern leLabelWidget* HomeScreen_lblEnv_2;
extern leLabelWidget* HomeScreen_lblSocket_2;
extern leImageWidget* HomeScreen_imgPassFail_2;
extern leLabelWidget* HomeScreen_lbPA3;
extern leLabelWidget* HomeScreen_lblPassedCount_3;
extern leLabelWidget* HomeScreen_lblFailedCount_3;
extern leLabelWidget* HomeScreen_lblPassed_3;
extern leLabelWidget* HomeScreen_lblFailed_3;
extern leLabelWidget* HomeScreen_lblEnv_3;
extern leLabelWidget* HomeScreen_lblSocket_3;
extern leLabelWidget* HomeScreen_lblDevice_3;
extern leLineWidget* HomeScreen_ln3_2;
extern leLineWidget* HomeScreen_ln2_2;
extern leLineWidget* HomeScreen_ln1_2;
extern leLabelWidget* HomeScreen_lblDevice_3;
extern leLabelWidget* HomeScreen_lblEnv_3;
extern leLabelWidget* HomeScreen_lblSocket_3;
extern leImageWidget* HomeScreen_imgPassFail_3;
extern leLabelWidget* HomeScreen_lbPA4;
extern leLabelWidget* HomeScreen_lblPassedCount_4;
extern leLabelWidget* HomeScreen_lblFailedCount_4;
extern leLabelWidget* HomeScreen_lblPassed_4;
extern leLabelWidget* HomeScreen_lblFailed_4;
extern leLabelWidget* HomeScreen_lblEnv_4;
extern leLabelWidget* HomeScreen_lblSocket_4;
extern leLabelWidget* HomeScreen_lblDevice_4;
extern leLineWidget* HomeScreen_ln3_3;
extern leLineWidget* HomeScreen_ln2_3;
extern leLineWidget* HomeScreen_ln1_3;
extern leLabelWidget* HomeScreen_lblDevice_4;
extern leLabelWidget* HomeScreen_lblEnv_4;
extern leLabelWidget* HomeScreen_lblSocket_4;
extern leWidget* HomeScreen_pnlMenu;
extern leImageWidget* HomeScreen_imgLogo;
extern leButtonWidget* HomeScreen_btnPower;
extern leButtonWidget* HomeScreen_btnProgram;
extern leButtonWidget* HomeScreen_btnMenu;
extern leButtonWidget* HomeScreen_btnSettings;
extern leButtonWidget* HomeScreen_btnHome;
extern leButtonWidget* HomeScreen_btnVerify;
extern leButtonWidget* HomeScreen_btnBlank;
extern leButtonWidget* HomeScreen_btnVerify_0;
extern leButtonWidget* HomeScreen_btnVerify_1;
extern leButtonWidget* HomeScreen_btnVerify_1_0;
extern leButtonWidget* HomeScreen_btnPA0Tab;
extern leButtonWidget* HomeScreen_btnPA1Tab;
extern leButtonWidget* HomeScreen_btnPA2Tab;
extern leButtonWidget* HomeScreen_btnPA3Tab;
extern leButtonWidget* HomeScreen_btnAllPAsTab;
extern leImageWidget* HomeScreen_PA0Tab;
extern leImageWidget* HomeScreen_PA1Tab;
extern leImageWidget* HomeScreen_PA2Tab;
extern leImageWidget* HomeScreen_PA3Tab;
extern leImageWidget* HomeScreen_AllPAsTab;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_HomeScreen_btnPower_OnReleased(leButtonWidget* btn);
void event_HomeScreen_btnPA0Tab_OnReleased(leButtonWidget* btn);
void event_HomeScreen_btnPA1Tab_OnReleased(leButtonWidget* btn);
void event_HomeScreen_btnPA2Tab_OnReleased(leButtonWidget* btn);
void event_HomeScreen_btnPA3Tab_OnReleased(leButtonWidget* btn);
void event_HomeScreen_btnAllPAsTab_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_HomeScreen(void); // called when Legato is initialized
leResult screenShow_HomeScreen(void); // called when screen is shown
void screenHide_HomeScreen(void); // called when screen is hidden
void screenDestroy_HomeScreen(void); // called when Legato is destroyed
void screenUpdate_HomeScreen(void); // called when Legato is updating

leWidget* screenGetRoot_HomeScreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void HomeScreen_OnShow(void); // called when this screen is shown
void HomeScreen_OnHide(void); // called when this screen is hidden
void HomeScreen_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_HOMESCREEN_H
