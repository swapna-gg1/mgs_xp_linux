#ifndef LE_GEN_SCREEN_SCREEN0_H
#define LE_GEN_SCREEN_SCREEN0_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Screen0_BackgroundPanel;
extern leWidget* Screen0_pnlMain;
extern leWidget* Screen0_pnlSwap;
extern leWidget* Screen0_pnlDeemph;
extern leWidget* Screen0_pnlMono;
extern leWidget* Screen0_pnlEq;
extern leButtonWidget* Screen0_btnSource;
extern leButtonWidget* Screen0_btnPlayPause;
extern leButtonWidget* Screen0_btnStop;
extern leImageWidget* Screen0_imgMchp;
extern leWidget* Screen0_pnlMonoType;
extern leWidget* Screen0_pnlSourceSelect;
extern leLabelWidget* Screen0_lblClassDAmp;
extern leLabelWidget* Screen0_lblTickn10;
extern leLabelWidget* Screen0_lblTickn15;
extern leLabelWidget* Screen0_lblTickn20;
extern leLabelWidget* Screen0_lblTickn25;
extern leLabelWidget* Screen0_lblTick5;
extern leLabelWidget* Screen0_lblTickn5;
extern leWidget* Screen0_pnlVolMain;
extern leButtonWidget* Screen0_btnKnobVol;
extern leLabelWidget* Screen0_lblVolume;
extern leLabelWidget* Screen0_lblTick10;
extern leLabelWidget* Screen0_lblTick0;
extern leImageSequenceWidget* Screen0_imgSeqVolBeam;
extern leButtonWidget* Screen0_btnMute;
extern leWidget* Screen0_pnlMainLevels;
extern leButtonWidget* Screen0_btnSwapEnable;
extern leImageSequenceWidget* Screen0_imgSeqSwapBeam;
extern leLabelWidget* Screen0_lblSwap;
extern leImageSequenceWidget* Screen0_imgSeqDeemphBeam;
extern leButtonWidget* Screen0_btnDeempEnable;
extern leLabelWidget* Screen0_lblDeemph;
extern leImageSequenceWidget* Screen0_imgSeqMonoBeam;
extern leButtonWidget* Screen0_btnMonoEnable;
extern leButtonWidget* Screen0_btnMonoType;
extern leLabelWidget* Screen0_lblMono;
extern leButtonWidget* Screen0_btnEqReset;
extern leWidget* Screen0_pnlBass;
extern leImageWidget* Screen0_imgEq;
extern leLabelWidget* Screen0_lblEq;
extern leWidget* Screen0_pnlMid;
extern leWidget* Screen0_pnlTreble;
extern leWidget* Screen0_pnlEqBass;
extern leLabelWidget* Screen0_lblTickn12;
extern leLabelWidget* Screen0_lblTickp12;
extern leLabelWidget* Screen0_lblTick0;
extern leLabelWidget* Screen0_lblTickn6;
extern leLabelWidget* Screen0_lblTickp6;
extern leLabelWidget* Screen0_lblBass;
extern leButtonWidget* Screen0_btnKnobBass;
extern leWidget* Screen0_pnlEqBass_0;
extern leLabelWidget* Screen0_lblBass_0;
extern leLabelWidget* Screen0_lblTickn12_0;
extern leLabelWidget* Screen0_lblTickp12_0;
extern leLabelWidget* Screen0_lblTick0_0;
extern leLabelWidget* Screen0_lblTickn6_0;
extern leLabelWidget* Screen0_lblTickp6_0;
extern leButtonWidget* Screen0_btnKnobMid;
extern leWidget* Screen0_pnlEqBass_0_0;
extern leLabelWidget* Screen0_lblBass_0_0;
extern leLabelWidget* Screen0_lblTickn12_0_0;
extern leLabelWidget* Screen0_lblTickp12_0_0;
extern leLabelWidget* Screen0_lblTick0_0_0;
extern leLabelWidget* Screen0_lblTickn6_0_0;
extern leLabelWidget* Screen0_lblTickp6_0_0;
extern leButtonWidget* Screen0_btnKnobTreble;
extern leImageWidget* Screen0_imgWave;
extern leLabelWidget* Screen0_lblSource;
extern leLabelWidget* Screen0_lblFilename;
extern leLabelWidget* Screen0_lblMonoType;
extern leImageSequenceWidget* Screen0_imgSeqMonoTypeBeam;
extern leButtonWidget* Screen0_btnMonoTypeMix;
extern leButtonWidget* Screen0_btnMonoTypeLeft;
extern leButtonWidget* Screen0_btnMonoTypeSat;
extern leButtonWidget* Screen0_btnMonoTypeRight;
extern leButtonWidget* Screen0_btnMonoTypeClose;
extern leLabelWidget* Screen0_lblMonoType_0;
extern leImageSequenceWidget* Screen0_imgSeqSourceSelect;
extern leButtonWidget* Screen0_btnSource1;
extern leButtonWidget* Screen0_btnSource2;
extern leButtonWidget* Screen0_btnSource3;
extern leButtonWidget* Screen0_btnSource4;
extern leButtonWidget* Screen0_btnSource5;
extern leButtonWidget* Screen0_btnSourceSelectClose;
extern leButtonWidget* Screen0_btnSourceScrollUp;
extern leButtonWidget* Screen0_btnSourceScrollDown;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_btnSource_OnReleased(leButtonWidget* btn);
void event_Screen0_btnPlayPause_OnPressed(leButtonWidget* btn);
void event_Screen0_btnPlayPause_OnReleased(leButtonWidget* btn);
void event_Screen0_btnStop_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMute_OnPressed(leButtonWidget* btn);
void event_Screen0_btnMute_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSwapEnable_OnPressed(leButtonWidget* btn);
void event_Screen0_btnSwapEnable_OnReleased(leButtonWidget* btn);
void event_Screen0_btnDeempEnable_OnPressed(leButtonWidget* btn);
void event_Screen0_btnDeempEnable_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoEnable_OnPressed(leButtonWidget* btn);
void event_Screen0_btnMonoEnable_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoType_OnReleased(leButtonWidget* btn);
void event_Screen0_btnEqReset_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoTypeMix_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoTypeLeft_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoTypeSat_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoTypeRight_OnReleased(leButtonWidget* btn);
void event_Screen0_btnMonoTypeClose_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSource1_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSource2_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSource3_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSource4_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSource5_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSourceSelectClose_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSourceScrollUp_OnReleased(leButtonWidget* btn);
void event_Screen0_btnSourceScrollDown_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Screen0(void); // called when Legato is initialized
leResult screenShow_Screen0(void); // called when screen is shown
void screenHide_Screen0(void); // called when screen is hidden
void screenDestroy_Screen0(void); // called when Legato is destroyed
void screenUpdate_Screen0(void); // called when Legato is updating

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Screen0_OnShow(void); // called when this screen is shown
void Screen0_OnHide(void); // called when this screen is hidden
void Screen0_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN0_H
