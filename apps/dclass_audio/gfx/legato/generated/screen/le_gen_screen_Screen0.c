#include "gfx/legato/generated/screen/le_gen_screen_Screen0.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Screen0_BackgroundPanel;
leWidget* Screen0_pnlMain;
leWidget* Screen0_pnlSwap;
leWidget* Screen0_pnlDeemph;
leWidget* Screen0_pnlMono;
leWidget* Screen0_pnlEq;
leButtonWidget* Screen0_btnSource;
leButtonWidget* Screen0_btnPlayPause;
leButtonWidget* Screen0_btnStop;
leImageWidget* Screen0_imgMchp;
leWidget* Screen0_pnlMonoType;
leWidget* Screen0_pnlSourceSelect;
leLabelWidget* Screen0_lblClassDAmp;
leLabelWidget* Screen0_lblTickn10;
leLabelWidget* Screen0_lblTickn15;
leLabelWidget* Screen0_lblTickn20;
leLabelWidget* Screen0_lblTickn25;
leLabelWidget* Screen0_lblTick5;
leLabelWidget* Screen0_lblTickn5;
leWidget* Screen0_pnlVolMain;
leButtonWidget* Screen0_btnKnobVol;
leLabelWidget* Screen0_lblVolume;
leLabelWidget* Screen0_lblTick10;
leLabelWidget* Screen0_lblTick0;
leImageSequenceWidget* Screen0_imgSeqVolBeam;
leButtonWidget* Screen0_btnMute;
leWidget* Screen0_pnlMainLevels;
leButtonWidget* Screen0_btnSwapEnable;
leImageSequenceWidget* Screen0_imgSeqSwapBeam;
leLabelWidget* Screen0_lblSwap;
leImageSequenceWidget* Screen0_imgSeqDeemphBeam;
leButtonWidget* Screen0_btnDeempEnable;
leLabelWidget* Screen0_lblDeemph;
leImageSequenceWidget* Screen0_imgSeqMonoBeam;
leButtonWidget* Screen0_btnMonoEnable;
leButtonWidget* Screen0_btnMonoType;
leLabelWidget* Screen0_lblMono;
leButtonWidget* Screen0_btnEqReset;
leWidget* Screen0_pnlBass;
leImageWidget* Screen0_imgEq;
leLabelWidget* Screen0_lblEq;
leWidget* Screen0_pnlMid;
leWidget* Screen0_pnlTreble;
leWidget* Screen0_pnlEqBass;
leLabelWidget* Screen0_lblTickn12;
leLabelWidget* Screen0_lblTickp12;
leLabelWidget* Screen0_lblTick0;
leLabelWidget* Screen0_lblTickn6;
leLabelWidget* Screen0_lblTickp6;
leLabelWidget* Screen0_lblBass;
leButtonWidget* Screen0_btnKnobBass;
leWidget* Screen0_pnlEqBass_0;
leLabelWidget* Screen0_lblBass_0;
leLabelWidget* Screen0_lblTickn12_0;
leLabelWidget* Screen0_lblTickp12_0;
leLabelWidget* Screen0_lblTick0_0;
leLabelWidget* Screen0_lblTickn6_0;
leLabelWidget* Screen0_lblTickp6_0;
leButtonWidget* Screen0_btnKnobMid;
leWidget* Screen0_pnlEqBass_0_0;
leLabelWidget* Screen0_lblBass_0_0;
leLabelWidget* Screen0_lblTickn12_0_0;
leLabelWidget* Screen0_lblTickp12_0_0;
leLabelWidget* Screen0_lblTick0_0_0;
leLabelWidget* Screen0_lblTickn6_0_0;
leLabelWidget* Screen0_lblTickp6_0_0;
leButtonWidget* Screen0_btnKnobTreble;
leImageWidget* Screen0_imgWave;
leLabelWidget* Screen0_lblSource;
leLabelWidget* Screen0_lblFilename;
leLabelWidget* Screen0_lblMonoType;
leImageSequenceWidget* Screen0_imgSeqMonoTypeBeam;
leButtonWidget* Screen0_btnMonoTypeMix;
leButtonWidget* Screen0_btnMonoTypeLeft;
leButtonWidget* Screen0_btnMonoTypeSat;
leButtonWidget* Screen0_btnMonoTypeRight;
leButtonWidget* Screen0_btnMonoTypeClose;
leLabelWidget* Screen0_lblMonoType_0;
leImageSequenceWidget* Screen0_imgSeqSourceSelect;
leButtonWidget* Screen0_btnSource1;
leButtonWidget* Screen0_btnSource2;
leButtonWidget* Screen0_btnSource3;
leButtonWidget* Screen0_btnSource4;
leButtonWidget* Screen0_btnSource5;
leButtonWidget* Screen0_btnSourceSelectClose;
leButtonWidget* Screen0_btnSourceScrollUp;
leButtonWidget* Screen0_btnSourceScrollDown;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Screen0(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Screen0(void)
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

    Screen0_BackgroundPanel = leWidget_New();
    Screen0_BackgroundPanel->fn->setPosition(Screen0_BackgroundPanel, 0, 0);
    Screen0_BackgroundPanel->fn->setSize(Screen0_BackgroundPanel, 800, 480);
    Screen0_BackgroundPanel->fn->setScheme(Screen0_BackgroundPanel, &BaseScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_BackgroundPanel);

    Screen0_pnlMain = leWidget_New();
    Screen0_pnlMain->fn->setPosition(Screen0_pnlMain, 630, 6);
    Screen0_pnlMain->fn->setSize(Screen0_pnlMain, 166, 468);
    Screen0_pnlMain->fn->setBackgroundType(Screen0_pnlMain, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlMain);

    Screen0_lblTickn10 = leLabelWidget_New();
    Screen0_lblTickn10->fn->setPosition(Screen0_lblTickn10, 30, 248);
    Screen0_lblTickn10->fn->setSize(Screen0_lblTickn10, 29, 23);
    Screen0_lblTickn10->fn->setScheme(Screen0_lblTickn10, &OverlayScheme);
    Screen0_lblTickn10->fn->setBackgroundType(Screen0_lblTickn10, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn10->fn->setHAlignment(Screen0_lblTickn10, LE_HALIGN_RIGHT);
    Screen0_lblTickn10->fn->setString(Screen0_lblTickn10, (leString*)&string_strn10);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTickn10);

    Screen0_lblTickn15 = leLabelWidget_New();
    Screen0_lblTickn15->fn->setPosition(Screen0_lblTickn15, 30, 291);
    Screen0_lblTickn15->fn->setSize(Screen0_lblTickn15, 29, 23);
    Screen0_lblTickn15->fn->setScheme(Screen0_lblTickn15, &OverlayScheme);
    Screen0_lblTickn15->fn->setBackgroundType(Screen0_lblTickn15, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn15->fn->setHAlignment(Screen0_lblTickn15, LE_HALIGN_RIGHT);
    Screen0_lblTickn15->fn->setString(Screen0_lblTickn15, (leString*)&string_strn15);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTickn15);

    Screen0_lblTickn20 = leLabelWidget_New();
    Screen0_lblTickn20->fn->setPosition(Screen0_lblTickn20, 31, 335);
    Screen0_lblTickn20->fn->setSize(Screen0_lblTickn20, 29, 23);
    Screen0_lblTickn20->fn->setScheme(Screen0_lblTickn20, &OverlayScheme);
    Screen0_lblTickn20->fn->setBackgroundType(Screen0_lblTickn20, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn20->fn->setHAlignment(Screen0_lblTickn20, LE_HALIGN_RIGHT);
    Screen0_lblTickn20->fn->setString(Screen0_lblTickn20, (leString*)&string_strn20);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTickn20);

    Screen0_lblTickn25 = leLabelWidget_New();
    Screen0_lblTickn25->fn->setPosition(Screen0_lblTickn25, 31, 379);
    Screen0_lblTickn25->fn->setSize(Screen0_lblTickn25, 29, 23);
    Screen0_lblTickn25->fn->setScheme(Screen0_lblTickn25, &OverlayScheme);
    Screen0_lblTickn25->fn->setBackgroundType(Screen0_lblTickn25, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn25->fn->setHAlignment(Screen0_lblTickn25, LE_HALIGN_RIGHT);
    Screen0_lblTickn25->fn->setString(Screen0_lblTickn25, (leString*)&string_strn25);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTickn25);

    Screen0_lblTick5 = leLabelWidget_New();
    Screen0_lblTick5->fn->setPosition(Screen0_lblTick5, 30, 121);
    Screen0_lblTick5->fn->setSize(Screen0_lblTick5, 29, 23);
    Screen0_lblTick5->fn->setScheme(Screen0_lblTick5, &OverlayScheme);
    Screen0_lblTick5->fn->setBackgroundType(Screen0_lblTick5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTick5->fn->setHAlignment(Screen0_lblTick5, LE_HALIGN_RIGHT);
    Screen0_lblTick5->fn->setString(Screen0_lblTick5, (leString*)&string_str5);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTick5);

    Screen0_lblTickn5 = leLabelWidget_New();
    Screen0_lblTickn5->fn->setPosition(Screen0_lblTickn5, 30, 207);
    Screen0_lblTickn5->fn->setSize(Screen0_lblTickn5, 29, 23);
    Screen0_lblTickn5->fn->setScheme(Screen0_lblTickn5, &OverlayScheme);
    Screen0_lblTickn5->fn->setBackgroundType(Screen0_lblTickn5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn5->fn->setHAlignment(Screen0_lblTickn5, LE_HALIGN_RIGHT);
    Screen0_lblTickn5->fn->setString(Screen0_lblTickn5, (leString*)&string_strn5);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTickn5);

    Screen0_pnlVolMain = leWidget_New();
    Screen0_pnlVolMain->fn->setPosition(Screen0_pnlVolMain, 109, 92);
    Screen0_pnlVolMain->fn->setSize(Screen0_pnlVolMain, 10, 300);
    Screen0_pnlVolMain->fn->setScheme(Screen0_pnlVolMain, &EqScheme);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_pnlVolMain);

    Screen0_btnKnobVol = leButtonWidget_New();
    Screen0_btnKnobVol->fn->setPosition(Screen0_btnKnobVol, 78, 334);
    Screen0_btnKnobVol->fn->setSize(Screen0_btnKnobVol, 74, 99);
    Screen0_btnKnobVol->fn->setBackgroundType(Screen0_btnKnobVol, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnKnobVol->fn->setBorderType(Screen0_btnKnobVol, LE_WIDGET_BORDER_NONE);
    Screen0_btnKnobVol->fn->setToggleable(Screen0_btnKnobVol, LE_TRUE);
    Screen0_btnKnobVol->fn->setPressedImage(Screen0_btnKnobVol, (leImage*)&Knob);
    Screen0_btnKnobVol->fn->setReleasedImage(Screen0_btnKnobVol, (leImage*)&Knob);
    Screen0_btnKnobVol->fn->setPressedOffset(Screen0_btnKnobVol, 0);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_btnKnobVol);

    Screen0_lblVolume = leLabelWidget_New();
    Screen0_lblVolume->fn->setPosition(Screen0_lblVolume, 36, 36);
    Screen0_lblVolume->fn->setSize(Screen0_lblVolume, 107, 28);
    Screen0_lblVolume->fn->setScheme(Screen0_lblVolume, &BaseScheme);
    Screen0_lblVolume->fn->setBackgroundType(Screen0_lblVolume, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblVolume->fn->setHAlignment(Screen0_lblVolume, LE_HALIGN_CENTER);
    Screen0_lblVolume->fn->setString(Screen0_lblVolume, (leString*)&string_strVol);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblVolume);

    Screen0_lblTick10 = leLabelWidget_New();
    Screen0_lblTick10->fn->setPosition(Screen0_lblTick10, 30, 82);
    Screen0_lblTick10->fn->setSize(Screen0_lblTick10, 29, 23);
    Screen0_lblTick10->fn->setScheme(Screen0_lblTick10, &OverlayScheme);
    Screen0_lblTick10->fn->setBackgroundType(Screen0_lblTick10, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTick10->fn->setHAlignment(Screen0_lblTick10, LE_HALIGN_RIGHT);
    Screen0_lblTick10->fn->setString(Screen0_lblTick10, (leString*)&string_str10);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTick10);

    Screen0_lblTick0 = leLabelWidget_New();
    Screen0_lblTick0->fn->setPosition(Screen0_lblTick0, 30, 164);
    Screen0_lblTick0->fn->setSize(Screen0_lblTick0, 29, 23);
    Screen0_lblTick0->fn->setScheme(Screen0_lblTick0, &OverlayScheme);
    Screen0_lblTick0->fn->setBackgroundType(Screen0_lblTick0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTick0->fn->setHAlignment(Screen0_lblTick0, LE_HALIGN_RIGHT);
    Screen0_lblTick0->fn->setString(Screen0_lblTick0, (leString*)&string_str0);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_lblTick0);

    Screen0_imgSeqVolBeam = leImageSequenceWidget_New();
    Screen0_imgSeqVolBeam->fn->setPosition(Screen0_imgSeqVolBeam, 23, 1);
    Screen0_imgSeqVolBeam->fn->setSize(Screen0_imgSeqVolBeam, 134, 34);
    Screen0_imgSeqVolBeam->fn->setBackgroundType(Screen0_imgSeqVolBeam, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgSeqVolBeam->fn->setImageCount(Screen0_imgSeqVolBeam, 3);
    Screen0_imgSeqVolBeam->fn->setImage(Screen0_imgSeqVolBeam, 0, &BeamWhite);
    Screen0_imgSeqVolBeam->fn->setImageDelay(Screen0_imgSeqVolBeam, 0, 1000);
    Screen0_imgSeqVolBeam->fn->setImage(Screen0_imgSeqVolBeam, 1, &BeamBlue);
    Screen0_imgSeqVolBeam->fn->setImageDelay(Screen0_imgSeqVolBeam, 1, 1000);
    Screen0_imgSeqVolBeam->fn->setImage(Screen0_imgSeqVolBeam, 2, &BeamRed);
    Screen0_imgSeqVolBeam->fn->setImageDelay(Screen0_imgSeqVolBeam, 2, 1000);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_imgSeqVolBeam);

    Screen0_btnMute = leButtonWidget_New();
    Screen0_btnMute->fn->setPosition(Screen0_btnMute, 9, 421);
    Screen0_btnMute->fn->setSize(Screen0_btnMute, 160, 50);
    Screen0_btnMute->fn->setScheme(Screen0_btnMute, &BaseScheme);
    Screen0_btnMute->fn->setBackgroundType(Screen0_btnMute, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMute->fn->setBorderType(Screen0_btnMute, LE_WIDGET_BORDER_NONE);
    Screen0_btnMute->fn->setToggleable(Screen0_btnMute, LE_TRUE);
    Screen0_btnMute->fn->setString(Screen0_btnMute, (leString*)&string_strMute);
    Screen0_btnMute->fn->setPressedImage(Screen0_btnMute, (leImage*)&Btn4P);
    Screen0_btnMute->fn->setReleasedImage(Screen0_btnMute, (leImage*)&Btn4);
    Screen0_btnMute->fn->setImagePosition(Screen0_btnMute, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMute->fn->setPressedEventCallback(Screen0_btnMute, event_Screen0_btnMute_OnPressed);
    Screen0_btnMute->fn->setReleasedEventCallback(Screen0_btnMute, event_Screen0_btnMute_OnReleased);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_btnMute);

    Screen0_pnlMainLevels = leWidget_New();
    Screen0_pnlMainLevels->fn->setPosition(Screen0_pnlMainLevels, 66, 92);
    Screen0_pnlMainLevels->fn->setSize(Screen0_pnlMainLevels, 16, 300);
    Screen0_pnlMainLevels->fn->setScheme(Screen0_pnlMainLevels, &EqScheme);
    Screen0_pnlMain->fn->addChild(Screen0_pnlMain, (leWidget*)Screen0_pnlMainLevels);

    Screen0_pnlSwap = leWidget_New();
    Screen0_pnlSwap->fn->setPosition(Screen0_pnlSwap, 10, 95);
    Screen0_pnlSwap->fn->setSize(Screen0_pnlSwap, 165, 145);
    Screen0_pnlSwap->fn->setScheme(Screen0_pnlSwap, &OverlayScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlSwap);

    Screen0_btnSwapEnable = leButtonWidget_New();
    Screen0_btnSwapEnable->fn->setPosition(Screen0_btnSwapEnable, 2, 70);
    Screen0_btnSwapEnable->fn->setSize(Screen0_btnSwapEnable, 161, 67);
    Screen0_btnSwapEnable->fn->setScheme(Screen0_btnSwapEnable, &BaseScheme);
    Screen0_btnSwapEnable->fn->setBackgroundType(Screen0_btnSwapEnable, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSwapEnable->fn->setBorderType(Screen0_btnSwapEnable, LE_WIDGET_BORDER_NONE);
    Screen0_btnSwapEnable->fn->setToggleable(Screen0_btnSwapEnable, LE_TRUE);
    Screen0_btnSwapEnable->fn->setString(Screen0_btnSwapEnable, (leString*)&string_strDisabled);
    Screen0_btnSwapEnable->fn->setPressedImage(Screen0_btnSwapEnable, (leImage*)&Btn2P);
    Screen0_btnSwapEnable->fn->setReleasedImage(Screen0_btnSwapEnable, (leImage*)&Btn2);
    Screen0_btnSwapEnable->fn->setImagePosition(Screen0_btnSwapEnable, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnSwapEnable->fn->setPressedEventCallback(Screen0_btnSwapEnable, event_Screen0_btnSwapEnable_OnPressed);
    Screen0_btnSwapEnable->fn->setReleasedEventCallback(Screen0_btnSwapEnable, event_Screen0_btnSwapEnable_OnReleased);
    Screen0_pnlSwap->fn->addChild(Screen0_pnlSwap, (leWidget*)Screen0_btnSwapEnable);

    Screen0_imgSeqSwapBeam = leImageSequenceWidget_New();
    Screen0_imgSeqSwapBeam->fn->setPosition(Screen0_imgSeqSwapBeam, 17, 0);
    Screen0_imgSeqSwapBeam->fn->setSize(Screen0_imgSeqSwapBeam, 134, 34);
    Screen0_imgSeqSwapBeam->fn->setBackgroundType(Screen0_imgSeqSwapBeam, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgSeqSwapBeam->fn->setImageCount(Screen0_imgSeqSwapBeam, 3);
    Screen0_imgSeqSwapBeam->fn->setImage(Screen0_imgSeqSwapBeam, 0, &BeamWhite);
    Screen0_imgSeqSwapBeam->fn->setImageDelay(Screen0_imgSeqSwapBeam, 0, 1000);
    Screen0_imgSeqSwapBeam->fn->setImage(Screen0_imgSeqSwapBeam, 1, &BeamBlue);
    Screen0_imgSeqSwapBeam->fn->setImageDelay(Screen0_imgSeqSwapBeam, 1, 1000);
    Screen0_imgSeqSwapBeam->fn->setImage(Screen0_imgSeqSwapBeam, 2, &BeamRed);
    Screen0_imgSeqSwapBeam->fn->setImageDelay(Screen0_imgSeqSwapBeam, 2, 1000);
    Screen0_pnlSwap->fn->addChild(Screen0_pnlSwap, (leWidget*)Screen0_imgSeqSwapBeam);

    Screen0_lblSwap = leLabelWidget_New();
    Screen0_lblSwap->fn->setPosition(Screen0_lblSwap, 29, 32);
    Screen0_lblSwap->fn->setSize(Screen0_lblSwap, 109, 32);
    Screen0_lblSwap->fn->setScheme(Screen0_lblSwap, &BaseScheme);
    Screen0_lblSwap->fn->setBackgroundType(Screen0_lblSwap, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblSwap->fn->setHAlignment(Screen0_lblSwap, LE_HALIGN_CENTER);
    Screen0_lblSwap->fn->setString(Screen0_lblSwap, (leString*)&string_strSwap);
    Screen0_pnlSwap->fn->addChild(Screen0_pnlSwap, (leWidget*)Screen0_lblSwap);

    Screen0_pnlDeemph = leWidget_New();
    Screen0_pnlDeemph->fn->setPosition(Screen0_pnlDeemph, 10, 245);
    Screen0_pnlDeemph->fn->setSize(Screen0_pnlDeemph, 165, 145);
    Screen0_pnlDeemph->fn->setScheme(Screen0_pnlDeemph, &OverlayScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlDeemph);

    Screen0_imgSeqDeemphBeam = leImageSequenceWidget_New();
    Screen0_imgSeqDeemphBeam->fn->setPosition(Screen0_imgSeqDeemphBeam, 15, 1);
    Screen0_imgSeqDeemphBeam->fn->setSize(Screen0_imgSeqDeemphBeam, 134, 34);
    Screen0_imgSeqDeemphBeam->fn->setBackgroundType(Screen0_imgSeqDeemphBeam, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgSeqDeemphBeam->fn->setImageCount(Screen0_imgSeqDeemphBeam, 3);
    Screen0_imgSeqDeemphBeam->fn->setImage(Screen0_imgSeqDeemphBeam, 0, &BeamWhite);
    Screen0_imgSeqDeemphBeam->fn->setImageDelay(Screen0_imgSeqDeemphBeam, 0, 1000);
    Screen0_imgSeqDeemphBeam->fn->setImage(Screen0_imgSeqDeemphBeam, 1, &BeamBlue);
    Screen0_imgSeqDeemphBeam->fn->setImageDelay(Screen0_imgSeqDeemphBeam, 1, 1000);
    Screen0_imgSeqDeemphBeam->fn->setImage(Screen0_imgSeqDeemphBeam, 2, &BeamRed);
    Screen0_imgSeqDeemphBeam->fn->setImageDelay(Screen0_imgSeqDeemphBeam, 2, 1000);
    Screen0_pnlDeemph->fn->addChild(Screen0_pnlDeemph, (leWidget*)Screen0_imgSeqDeemphBeam);

    Screen0_btnDeempEnable = leButtonWidget_New();
    Screen0_btnDeempEnable->fn->setPosition(Screen0_btnDeempEnable, 1, 72);
    Screen0_btnDeempEnable->fn->setSize(Screen0_btnDeempEnable, 161, 67);
    Screen0_btnDeempEnable->fn->setScheme(Screen0_btnDeempEnable, &BaseScheme);
    Screen0_btnDeempEnable->fn->setBackgroundType(Screen0_btnDeempEnable, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnDeempEnable->fn->setBorderType(Screen0_btnDeempEnable, LE_WIDGET_BORDER_NONE);
    Screen0_btnDeempEnable->fn->setToggleable(Screen0_btnDeempEnable, LE_TRUE);
    Screen0_btnDeempEnable->fn->setString(Screen0_btnDeempEnable, (leString*)&string_strDisabled);
    Screen0_btnDeempEnable->fn->setPressedImage(Screen0_btnDeempEnable, (leImage*)&Btn2P);
    Screen0_btnDeempEnable->fn->setReleasedImage(Screen0_btnDeempEnable, (leImage*)&Btn2);
    Screen0_btnDeempEnable->fn->setImagePosition(Screen0_btnDeempEnable, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnDeempEnable->fn->setPressedEventCallback(Screen0_btnDeempEnable, event_Screen0_btnDeempEnable_OnPressed);
    Screen0_btnDeempEnable->fn->setReleasedEventCallback(Screen0_btnDeempEnable, event_Screen0_btnDeempEnable_OnReleased);
    Screen0_pnlDeemph->fn->addChild(Screen0_pnlDeemph, (leWidget*)Screen0_btnDeempEnable);

    Screen0_lblDeemph = leLabelWidget_New();
    Screen0_lblDeemph->fn->setPosition(Screen0_lblDeemph, 29, 31);
    Screen0_lblDeemph->fn->setSize(Screen0_lblDeemph, 108, 41);
    Screen0_lblDeemph->fn->setScheme(Screen0_lblDeemph, &BaseScheme);
    Screen0_lblDeemph->fn->setBackgroundType(Screen0_lblDeemph, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblDeemph->fn->setHAlignment(Screen0_lblDeemph, LE_HALIGN_CENTER);
    Screen0_lblDeemph->fn->setString(Screen0_lblDeemph, (leString*)&string_strDeemph);
    Screen0_pnlDeemph->fn->addChild(Screen0_pnlDeemph, (leWidget*)Screen0_lblDeemph);

    Screen0_pnlMono = leWidget_New();
    Screen0_pnlMono->fn->setPosition(Screen0_pnlMono, 181, 95);
    Screen0_pnlMono->fn->setSize(Screen0_pnlMono, 165, 295);
    Screen0_pnlMono->fn->setScheme(Screen0_pnlMono, &OverlayScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlMono);

    Screen0_imgSeqMonoBeam = leImageSequenceWidget_New();
    Screen0_imgSeqMonoBeam->fn->setPosition(Screen0_imgSeqMonoBeam, 17, 2);
    Screen0_imgSeqMonoBeam->fn->setSize(Screen0_imgSeqMonoBeam, 134, 34);
    Screen0_imgSeqMonoBeam->fn->setBackgroundType(Screen0_imgSeqMonoBeam, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgSeqMonoBeam->fn->setImageCount(Screen0_imgSeqMonoBeam, 3);
    Screen0_imgSeqMonoBeam->fn->setImage(Screen0_imgSeqMonoBeam, 0, &BeamWhite);
    Screen0_imgSeqMonoBeam->fn->setImageDelay(Screen0_imgSeqMonoBeam, 0, 1000);
    Screen0_imgSeqMonoBeam->fn->setImage(Screen0_imgSeqMonoBeam, 1, &BeamBlue);
    Screen0_imgSeqMonoBeam->fn->setImageDelay(Screen0_imgSeqMonoBeam, 1, 1000);
    Screen0_imgSeqMonoBeam->fn->setImage(Screen0_imgSeqMonoBeam, 2, &BeamRed);
    Screen0_imgSeqMonoBeam->fn->setImageDelay(Screen0_imgSeqMonoBeam, 2, 1000);
    Screen0_pnlMono->fn->addChild(Screen0_pnlMono, (leWidget*)Screen0_imgSeqMonoBeam);

    Screen0_btnMonoEnable = leButtonWidget_New();
    Screen0_btnMonoEnable->fn->setPosition(Screen0_btnMonoEnable, 2, 70);
    Screen0_btnMonoEnable->fn->setSize(Screen0_btnMonoEnable, 161, 67);
    Screen0_btnMonoEnable->fn->setScheme(Screen0_btnMonoEnable, &BaseScheme);
    Screen0_btnMonoEnable->fn->setBackgroundType(Screen0_btnMonoEnable, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoEnable->fn->setBorderType(Screen0_btnMonoEnable, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoEnable->fn->setToggleable(Screen0_btnMonoEnable, LE_TRUE);
    Screen0_btnMonoEnable->fn->setString(Screen0_btnMonoEnable, (leString*)&string_strDisabled);
    Screen0_btnMonoEnable->fn->setPressedImage(Screen0_btnMonoEnable, (leImage*)&Btn2P);
    Screen0_btnMonoEnable->fn->setReleasedImage(Screen0_btnMonoEnable, (leImage*)&Btn2);
    Screen0_btnMonoEnable->fn->setImagePosition(Screen0_btnMonoEnable, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMonoEnable->fn->setPressedEventCallback(Screen0_btnMonoEnable, event_Screen0_btnMonoEnable_OnPressed);
    Screen0_btnMonoEnable->fn->setReleasedEventCallback(Screen0_btnMonoEnable, event_Screen0_btnMonoEnable_OnReleased);
    Screen0_pnlMono->fn->addChild(Screen0_pnlMono, (leWidget*)Screen0_btnMonoEnable);

    Screen0_btnMonoType = leButtonWidget_New();
    Screen0_btnMonoType->fn->setPosition(Screen0_btnMonoType, 2, 131);
    Screen0_btnMonoType->fn->setSize(Screen0_btnMonoType, 161, 67);
    Screen0_btnMonoType->fn->setScheme(Screen0_btnMonoType, &BaseScheme);
    Screen0_btnMonoType->fn->setBackgroundType(Screen0_btnMonoType, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoType->fn->setBorderType(Screen0_btnMonoType, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoType->fn->setString(Screen0_btnMonoType, (leString*)&string_strMix);
    Screen0_btnMonoType->fn->setPressedImage(Screen0_btnMonoType, (leImage*)&Btn2P);
    Screen0_btnMonoType->fn->setReleasedImage(Screen0_btnMonoType, (leImage*)&Btn2);
    Screen0_btnMonoType->fn->setImagePosition(Screen0_btnMonoType, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMonoType->fn->setReleasedEventCallback(Screen0_btnMonoType, event_Screen0_btnMonoType_OnReleased);
    Screen0_pnlMono->fn->addChild(Screen0_pnlMono, (leWidget*)Screen0_btnMonoType);

    Screen0_lblMono = leLabelWidget_New();
    Screen0_lblMono->fn->setPosition(Screen0_lblMono, 29, 33);
    Screen0_lblMono->fn->setSize(Screen0_lblMono, 109, 31);
    Screen0_lblMono->fn->setScheme(Screen0_lblMono, &BaseScheme);
    Screen0_lblMono->fn->setBackgroundType(Screen0_lblMono, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblMono->fn->setHAlignment(Screen0_lblMono, LE_HALIGN_CENTER);
    Screen0_lblMono->fn->setString(Screen0_lblMono, (leString*)&string_strMono);
    Screen0_pnlMono->fn->addChild(Screen0_pnlMono, (leWidget*)Screen0_lblMono);

    Screen0_pnlEq = leWidget_New();
    Screen0_pnlEq->fn->setPosition(Screen0_pnlEq, 352, 95);
    Screen0_pnlEq->fn->setSize(Screen0_pnlEq, 270, 376);
    Screen0_pnlEq->fn->setScheme(Screen0_pnlEq, &OverlayScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlEq);

    Screen0_btnEqReset = leButtonWidget_New();
    Screen0_btnEqReset->fn->setPosition(Screen0_btnEqReset, 138, 0);
    Screen0_btnEqReset->fn->setSize(Screen0_btnEqReset, 132, 52);
    Screen0_btnEqReset->fn->setScheme(Screen0_btnEqReset, &BaseScheme);
    Screen0_btnEqReset->fn->setBackgroundType(Screen0_btnEqReset, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnEqReset->fn->setBorderType(Screen0_btnEqReset, LE_WIDGET_BORDER_NONE);
    Screen0_btnEqReset->fn->setString(Screen0_btnEqReset, (leString*)&string_strReset);
    Screen0_btnEqReset->fn->setPressedImage(Screen0_btnEqReset, (leImage*)&Btn4P);
    Screen0_btnEqReset->fn->setReleasedImage(Screen0_btnEqReset, (leImage*)&Btn4);
    Screen0_btnEqReset->fn->setImagePosition(Screen0_btnEqReset, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnEqReset->fn->setReleasedEventCallback(Screen0_btnEqReset, event_Screen0_btnEqReset_OnReleased);
    Screen0_pnlEq->fn->addChild(Screen0_pnlEq, (leWidget*)Screen0_btnEqReset);

    Screen0_pnlBass = leWidget_New();
    Screen0_pnlBass->fn->setPosition(Screen0_pnlBass, 0, 45);
    Screen0_pnlBass->fn->setSize(Screen0_pnlBass, 90, 330);
    Screen0_pnlBass->fn->setBackgroundType(Screen0_pnlBass, LE_WIDGET_BACKGROUND_NONE);
    Screen0_pnlEq->fn->addChild(Screen0_pnlEq, (leWidget*)Screen0_pnlBass);

    Screen0_pnlEqBass = leWidget_New();
    Screen0_pnlEqBass->fn->setPosition(Screen0_pnlEqBass, 47, 26);
    Screen0_pnlEqBass->fn->setSize(Screen0_pnlEqBass, 10, 257);
    Screen0_pnlEqBass->fn->setScheme(Screen0_pnlEqBass, &EqScheme);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_pnlEqBass);

    Screen0_lblTickn12 = leLabelWidget_New();
    Screen0_lblTickn12->fn->setPosition(Screen0_lblTickn12, 11, 269);
    Screen0_lblTickn12->fn->setSize(Screen0_lblTickn12, 29, 23);
    Screen0_lblTickn12->fn->setScheme(Screen0_lblTickn12, &OverlayScheme);
    Screen0_lblTickn12->fn->setBackgroundType(Screen0_lblTickn12, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn12->fn->setHAlignment(Screen0_lblTickn12, LE_HALIGN_RIGHT);
    Screen0_lblTickn12->fn->setString(Screen0_lblTickn12, (leString*)&string_strn12);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_lblTickn12);

    Screen0_lblTickp12 = leLabelWidget_New();
    Screen0_lblTickp12->fn->setPosition(Screen0_lblTickp12, 11, 16);
    Screen0_lblTickp12->fn->setSize(Screen0_lblTickp12, 29, 23);
    Screen0_lblTickp12->fn->setScheme(Screen0_lblTickp12, &OverlayScheme);
    Screen0_lblTickp12->fn->setBackgroundType(Screen0_lblTickp12, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickp12->fn->setHAlignment(Screen0_lblTickp12, LE_HALIGN_RIGHT);
    Screen0_lblTickp12->fn->setString(Screen0_lblTickp12, (leString*)&string_str12);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_lblTickp12);

    Screen0_lblTick0 = leLabelWidget_New();
    Screen0_lblTick0->fn->setPosition(Screen0_lblTick0, 11, 145);
    Screen0_lblTick0->fn->setSize(Screen0_lblTick0, 29, 23);
    Screen0_lblTick0->fn->setScheme(Screen0_lblTick0, &OverlayScheme);
    Screen0_lblTick0->fn->setBackgroundType(Screen0_lblTick0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTick0->fn->setHAlignment(Screen0_lblTick0, LE_HALIGN_RIGHT);
    Screen0_lblTick0->fn->setString(Screen0_lblTick0, (leString*)&string_str0);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_lblTick0);

    Screen0_lblTickn6 = leLabelWidget_New();
    Screen0_lblTickn6->fn->setPosition(Screen0_lblTickn6, 11, 208);
    Screen0_lblTickn6->fn->setSize(Screen0_lblTickn6, 29, 23);
    Screen0_lblTickn6->fn->setScheme(Screen0_lblTickn6, &OverlayScheme);
    Screen0_lblTickn6->fn->setBackgroundType(Screen0_lblTickn6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn6->fn->setHAlignment(Screen0_lblTickn6, LE_HALIGN_CENTER);
    Screen0_lblTickn6->fn->setString(Screen0_lblTickn6, (leString*)&string_strn6);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_lblTickn6);

    Screen0_lblTickp6 = leLabelWidget_New();
    Screen0_lblTickp6->fn->setPosition(Screen0_lblTickp6, 11, 82);
    Screen0_lblTickp6->fn->setSize(Screen0_lblTickp6, 29, 23);
    Screen0_lblTickp6->fn->setScheme(Screen0_lblTickp6, &OverlayScheme);
    Screen0_lblTickp6->fn->setBackgroundType(Screen0_lblTickp6, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickp6->fn->setHAlignment(Screen0_lblTickp6, LE_HALIGN_RIGHT);
    Screen0_lblTickp6->fn->setString(Screen0_lblTickp6, (leString*)&string_str6);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_lblTickp6);

    Screen0_lblBass = leLabelWidget_New();
    Screen0_lblBass->fn->setPosition(Screen0_lblBass, 19, 310);
    Screen0_lblBass->fn->setSize(Screen0_lblBass, 66, 16);
    Screen0_lblBass->fn->setScheme(Screen0_lblBass, &BaseScheme);
    Screen0_lblBass->fn->setBackgroundType(Screen0_lblBass, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblBass->fn->setHAlignment(Screen0_lblBass, LE_HALIGN_CENTER);
    Screen0_lblBass->fn->setString(Screen0_lblBass, (leString*)&string_strBass);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_lblBass);

    Screen0_btnKnobBass = leButtonWidget_New();
    Screen0_btnKnobBass->fn->setPosition(Screen0_btnKnobBass, 18, 120);
    Screen0_btnKnobBass->fn->setSize(Screen0_btnKnobBass, 68, 80);
    Screen0_btnKnobBass->fn->setBackgroundType(Screen0_btnKnobBass, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnKnobBass->fn->setBorderType(Screen0_btnKnobBass, LE_WIDGET_BORDER_NONE);
    Screen0_btnKnobBass->fn->setToggleable(Screen0_btnKnobBass, LE_TRUE);
    Screen0_btnKnobBass->fn->setPressedImage(Screen0_btnKnobBass, (leImage*)&Knob);
    Screen0_btnKnobBass->fn->setReleasedImage(Screen0_btnKnobBass, (leImage*)&Knob);
    Screen0_btnKnobBass->fn->setPressedOffset(Screen0_btnKnobBass, 0);
    Screen0_pnlBass->fn->addChild(Screen0_pnlBass, (leWidget*)Screen0_btnKnobBass);

    Screen0_imgEq = leImageWidget_New();
    Screen0_imgEq->fn->setPosition(Screen0_imgEq, 4, 12);
    Screen0_imgEq->fn->setSize(Screen0_imgEq, 29, 29);
    Screen0_imgEq->fn->setBackgroundType(Screen0_imgEq, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgEq->fn->setBorderType(Screen0_imgEq, LE_WIDGET_BORDER_NONE);
    Screen0_imgEq->fn->setImage(Screen0_imgEq, (leImage*)&Eq);
    Screen0_pnlEq->fn->addChild(Screen0_pnlEq, (leWidget*)Screen0_imgEq);

    Screen0_lblEq = leLabelWidget_New();
    Screen0_lblEq->fn->setPosition(Screen0_lblEq, 39, 10);
    Screen0_lblEq->fn->setSize(Screen0_lblEq, 107, 28);
    Screen0_lblEq->fn->setScheme(Screen0_lblEq, &BaseScheme);
    Screen0_lblEq->fn->setBackgroundType(Screen0_lblEq, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblEq->fn->setString(Screen0_lblEq, (leString*)&string_strEq);
    Screen0_pnlEq->fn->addChild(Screen0_pnlEq, (leWidget*)Screen0_lblEq);

    Screen0_pnlMid = leWidget_New();
    Screen0_pnlMid->fn->setPosition(Screen0_pnlMid, 90, 45);
    Screen0_pnlMid->fn->setSize(Screen0_pnlMid, 90, 330);
    Screen0_pnlMid->fn->setBackgroundType(Screen0_pnlMid, LE_WIDGET_BACKGROUND_NONE);
    Screen0_pnlEq->fn->addChild(Screen0_pnlEq, (leWidget*)Screen0_pnlMid);

    Screen0_pnlEqBass_0 = leWidget_New();
    Screen0_pnlEqBass_0->fn->setPosition(Screen0_pnlEqBass_0, 47, 26);
    Screen0_pnlEqBass_0->fn->setSize(Screen0_pnlEqBass_0, 10, 257);
    Screen0_pnlEqBass_0->fn->setScheme(Screen0_pnlEqBass_0, &EqScheme);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_pnlEqBass_0);

    Screen0_lblBass_0 = leLabelWidget_New();
    Screen0_lblBass_0->fn->setPosition(Screen0_lblBass_0, 19, 310);
    Screen0_lblBass_0->fn->setSize(Screen0_lblBass_0, 66, 16);
    Screen0_lblBass_0->fn->setScheme(Screen0_lblBass_0, &BaseScheme);
    Screen0_lblBass_0->fn->setBackgroundType(Screen0_lblBass_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblBass_0->fn->setHAlignment(Screen0_lblBass_0, LE_HALIGN_CENTER);
    Screen0_lblBass_0->fn->setString(Screen0_lblBass_0, (leString*)&string_strMid);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_lblBass_0);

    Screen0_lblTickn12_0 = leLabelWidget_New();
    Screen0_lblTickn12_0->fn->setPosition(Screen0_lblTickn12_0, 11, 269);
    Screen0_lblTickn12_0->fn->setSize(Screen0_lblTickn12_0, 29, 23);
    Screen0_lblTickn12_0->fn->setScheme(Screen0_lblTickn12_0, &OverlayScheme);
    Screen0_lblTickn12_0->fn->setBackgroundType(Screen0_lblTickn12_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn12_0->fn->setHAlignment(Screen0_lblTickn12_0, LE_HALIGN_RIGHT);
    Screen0_lblTickn12_0->fn->setString(Screen0_lblTickn12_0, (leString*)&string_strn12);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_lblTickn12_0);

    Screen0_lblTickp12_0 = leLabelWidget_New();
    Screen0_lblTickp12_0->fn->setPosition(Screen0_lblTickp12_0, 11, 16);
    Screen0_lblTickp12_0->fn->setSize(Screen0_lblTickp12_0, 29, 23);
    Screen0_lblTickp12_0->fn->setScheme(Screen0_lblTickp12_0, &OverlayScheme);
    Screen0_lblTickp12_0->fn->setBackgroundType(Screen0_lblTickp12_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickp12_0->fn->setHAlignment(Screen0_lblTickp12_0, LE_HALIGN_RIGHT);
    Screen0_lblTickp12_0->fn->setString(Screen0_lblTickp12_0, (leString*)&string_str12);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_lblTickp12_0);

    Screen0_lblTick0_0 = leLabelWidget_New();
    Screen0_lblTick0_0->fn->setPosition(Screen0_lblTick0_0, 11, 145);
    Screen0_lblTick0_0->fn->setSize(Screen0_lblTick0_0, 29, 23);
    Screen0_lblTick0_0->fn->setScheme(Screen0_lblTick0_0, &OverlayScheme);
    Screen0_lblTick0_0->fn->setBackgroundType(Screen0_lblTick0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTick0_0->fn->setHAlignment(Screen0_lblTick0_0, LE_HALIGN_RIGHT);
    Screen0_lblTick0_0->fn->setString(Screen0_lblTick0_0, (leString*)&string_str0);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_lblTick0_0);

    Screen0_lblTickn6_0 = leLabelWidget_New();
    Screen0_lblTickn6_0->fn->setPosition(Screen0_lblTickn6_0, 11, 208);
    Screen0_lblTickn6_0->fn->setSize(Screen0_lblTickn6_0, 29, 23);
    Screen0_lblTickn6_0->fn->setScheme(Screen0_lblTickn6_0, &OverlayScheme);
    Screen0_lblTickn6_0->fn->setBackgroundType(Screen0_lblTickn6_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn6_0->fn->setHAlignment(Screen0_lblTickn6_0, LE_HALIGN_CENTER);
    Screen0_lblTickn6_0->fn->setString(Screen0_lblTickn6_0, (leString*)&string_strn6);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_lblTickn6_0);

    Screen0_lblTickp6_0 = leLabelWidget_New();
    Screen0_lblTickp6_0->fn->setPosition(Screen0_lblTickp6_0, 11, 82);
    Screen0_lblTickp6_0->fn->setSize(Screen0_lblTickp6_0, 29, 23);
    Screen0_lblTickp6_0->fn->setScheme(Screen0_lblTickp6_0, &OverlayScheme);
    Screen0_lblTickp6_0->fn->setBackgroundType(Screen0_lblTickp6_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickp6_0->fn->setHAlignment(Screen0_lblTickp6_0, LE_HALIGN_RIGHT);
    Screen0_lblTickp6_0->fn->setString(Screen0_lblTickp6_0, (leString*)&string_str6);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_lblTickp6_0);

    Screen0_btnKnobMid = leButtonWidget_New();
    Screen0_btnKnobMid->fn->setPosition(Screen0_btnKnobMid, 18, 119);
    Screen0_btnKnobMid->fn->setSize(Screen0_btnKnobMid, 68, 80);
    Screen0_btnKnobMid->fn->setBackgroundType(Screen0_btnKnobMid, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnKnobMid->fn->setBorderType(Screen0_btnKnobMid, LE_WIDGET_BORDER_NONE);
    Screen0_btnKnobMid->fn->setToggleable(Screen0_btnKnobMid, LE_TRUE);
    Screen0_btnKnobMid->fn->setPressedImage(Screen0_btnKnobMid, (leImage*)&Knob);
    Screen0_btnKnobMid->fn->setReleasedImage(Screen0_btnKnobMid, (leImage*)&Knob);
    Screen0_btnKnobMid->fn->setPressedOffset(Screen0_btnKnobMid, 0);
    Screen0_pnlMid->fn->addChild(Screen0_pnlMid, (leWidget*)Screen0_btnKnobMid);

    Screen0_pnlTreble = leWidget_New();
    Screen0_pnlTreble->fn->setPosition(Screen0_pnlTreble, 176, 45);
    Screen0_pnlTreble->fn->setSize(Screen0_pnlTreble, 90, 330);
    Screen0_pnlTreble->fn->setBackgroundType(Screen0_pnlTreble, LE_WIDGET_BACKGROUND_NONE);
    Screen0_pnlEq->fn->addChild(Screen0_pnlEq, (leWidget*)Screen0_pnlTreble);

    Screen0_pnlEqBass_0_0 = leWidget_New();
    Screen0_pnlEqBass_0_0->fn->setPosition(Screen0_pnlEqBass_0_0, 47, 26);
    Screen0_pnlEqBass_0_0->fn->setSize(Screen0_pnlEqBass_0_0, 10, 257);
    Screen0_pnlEqBass_0_0->fn->setScheme(Screen0_pnlEqBass_0_0, &EqScheme);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_pnlEqBass_0_0);

    Screen0_lblBass_0_0 = leLabelWidget_New();
    Screen0_lblBass_0_0->fn->setPosition(Screen0_lblBass_0_0, 19, 310);
    Screen0_lblBass_0_0->fn->setSize(Screen0_lblBass_0_0, 66, 16);
    Screen0_lblBass_0_0->fn->setScheme(Screen0_lblBass_0_0, &BaseScheme);
    Screen0_lblBass_0_0->fn->setBackgroundType(Screen0_lblBass_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblBass_0_0->fn->setHAlignment(Screen0_lblBass_0_0, LE_HALIGN_CENTER);
    Screen0_lblBass_0_0->fn->setString(Screen0_lblBass_0_0, (leString*)&string_strTreble);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_lblBass_0_0);

    Screen0_lblTickn12_0_0 = leLabelWidget_New();
    Screen0_lblTickn12_0_0->fn->setPosition(Screen0_lblTickn12_0_0, 11, 269);
    Screen0_lblTickn12_0_0->fn->setSize(Screen0_lblTickn12_0_0, 29, 23);
    Screen0_lblTickn12_0_0->fn->setScheme(Screen0_lblTickn12_0_0, &OverlayScheme);
    Screen0_lblTickn12_0_0->fn->setBackgroundType(Screen0_lblTickn12_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn12_0_0->fn->setHAlignment(Screen0_lblTickn12_0_0, LE_HALIGN_RIGHT);
    Screen0_lblTickn12_0_0->fn->setString(Screen0_lblTickn12_0_0, (leString*)&string_strn12);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_lblTickn12_0_0);

    Screen0_lblTickp12_0_0 = leLabelWidget_New();
    Screen0_lblTickp12_0_0->fn->setPosition(Screen0_lblTickp12_0_0, 11, 16);
    Screen0_lblTickp12_0_0->fn->setSize(Screen0_lblTickp12_0_0, 29, 23);
    Screen0_lblTickp12_0_0->fn->setScheme(Screen0_lblTickp12_0_0, &OverlayScheme);
    Screen0_lblTickp12_0_0->fn->setBackgroundType(Screen0_lblTickp12_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickp12_0_0->fn->setHAlignment(Screen0_lblTickp12_0_0, LE_HALIGN_RIGHT);
    Screen0_lblTickp12_0_0->fn->setString(Screen0_lblTickp12_0_0, (leString*)&string_str12);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_lblTickp12_0_0);

    Screen0_lblTick0_0_0 = leLabelWidget_New();
    Screen0_lblTick0_0_0->fn->setPosition(Screen0_lblTick0_0_0, 11, 145);
    Screen0_lblTick0_0_0->fn->setSize(Screen0_lblTick0_0_0, 29, 23);
    Screen0_lblTick0_0_0->fn->setScheme(Screen0_lblTick0_0_0, &OverlayScheme);
    Screen0_lblTick0_0_0->fn->setBackgroundType(Screen0_lblTick0_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTick0_0_0->fn->setHAlignment(Screen0_lblTick0_0_0, LE_HALIGN_RIGHT);
    Screen0_lblTick0_0_0->fn->setString(Screen0_lblTick0_0_0, (leString*)&string_str0);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_lblTick0_0_0);

    Screen0_lblTickn6_0_0 = leLabelWidget_New();
    Screen0_lblTickn6_0_0->fn->setPosition(Screen0_lblTickn6_0_0, 11, 208);
    Screen0_lblTickn6_0_0->fn->setSize(Screen0_lblTickn6_0_0, 29, 23);
    Screen0_lblTickn6_0_0->fn->setScheme(Screen0_lblTickn6_0_0, &OverlayScheme);
    Screen0_lblTickn6_0_0->fn->setBackgroundType(Screen0_lblTickn6_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickn6_0_0->fn->setHAlignment(Screen0_lblTickn6_0_0, LE_HALIGN_CENTER);
    Screen0_lblTickn6_0_0->fn->setString(Screen0_lblTickn6_0_0, (leString*)&string_strn6);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_lblTickn6_0_0);

    Screen0_lblTickp6_0_0 = leLabelWidget_New();
    Screen0_lblTickp6_0_0->fn->setPosition(Screen0_lblTickp6_0_0, 11, 82);
    Screen0_lblTickp6_0_0->fn->setSize(Screen0_lblTickp6_0_0, 29, 23);
    Screen0_lblTickp6_0_0->fn->setScheme(Screen0_lblTickp6_0_0, &OverlayScheme);
    Screen0_lblTickp6_0_0->fn->setBackgroundType(Screen0_lblTickp6_0_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblTickp6_0_0->fn->setHAlignment(Screen0_lblTickp6_0_0, LE_HALIGN_RIGHT);
    Screen0_lblTickp6_0_0->fn->setString(Screen0_lblTickp6_0_0, (leString*)&string_str6);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_lblTickp6_0_0);

    Screen0_btnKnobTreble = leButtonWidget_New();
    Screen0_btnKnobTreble->fn->setPosition(Screen0_btnKnobTreble, 18, 120);
    Screen0_btnKnobTreble->fn->setSize(Screen0_btnKnobTreble, 68, 80);
    Screen0_btnKnobTreble->fn->setBackgroundType(Screen0_btnKnobTreble, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnKnobTreble->fn->setBorderType(Screen0_btnKnobTreble, LE_WIDGET_BORDER_NONE);
    Screen0_btnKnobTreble->fn->setToggleable(Screen0_btnKnobTreble, LE_TRUE);
    Screen0_btnKnobTreble->fn->setPressedImage(Screen0_btnKnobTreble, (leImage*)&Knob);
    Screen0_btnKnobTreble->fn->setReleasedImage(Screen0_btnKnobTreble, (leImage*)&Knob);
    Screen0_btnKnobTreble->fn->setPressedOffset(Screen0_btnKnobTreble, 0);
    Screen0_pnlTreble->fn->addChild(Screen0_pnlTreble, (leWidget*)Screen0_btnKnobTreble);

    Screen0_btnSource = leButtonWidget_New();
    Screen0_btnSource->fn->setPosition(Screen0_btnSource, 7, 393);
    Screen0_btnSource->fn->setSize(Screen0_btnSource, 340, 80);
    Screen0_btnSource->fn->setBackgroundType(Screen0_btnSource, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSource->fn->setBorderType(Screen0_btnSource, LE_WIDGET_BORDER_NONE);
    Screen0_btnSource->fn->setPressedImage(Screen0_btnSource, (leImage*)&Btn5P);
    Screen0_btnSource->fn->setReleasedImage(Screen0_btnSource, (leImage*)&Btn5);
    Screen0_btnSource->fn->setPressedOffset(Screen0_btnSource, 0);
    Screen0_btnSource->fn->setReleasedEventCallback(Screen0_btnSource, event_Screen0_btnSource_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_btnSource);

    Screen0_imgWave = leImageWidget_New();
    Screen0_imgWave->fn->setPosition(Screen0_imgWave, 31, 13);
    Screen0_imgWave->fn->setSize(Screen0_imgWave, 29, 29);
    Screen0_imgWave->fn->setBackgroundType(Screen0_imgWave, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgWave->fn->setBorderType(Screen0_imgWave, LE_WIDGET_BORDER_NONE);
    Screen0_imgWave->fn->setImage(Screen0_imgWave, (leImage*)&Wave);
    Screen0_btnSource->fn->addChild(Screen0_btnSource, (leWidget*)Screen0_imgWave);

    Screen0_lblSource = leLabelWidget_New();
    Screen0_lblSource->fn->setPosition(Screen0_lblSource, 17, 37);
    Screen0_lblSource->fn->setSize(Screen0_lblSource, 61, 25);
    Screen0_lblSource->fn->setScheme(Screen0_lblSource, &BaseScheme);
    Screen0_lblSource->fn->setBackgroundType(Screen0_lblSource, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblSource->fn->setString(Screen0_lblSource, (leString*)&string_strSource);
    Screen0_btnSource->fn->addChild(Screen0_btnSource, (leWidget*)Screen0_lblSource);

    Screen0_lblFilename = leLabelWidget_New();
    Screen0_lblFilename->fn->setPosition(Screen0_lblFilename, 94, 21);
    Screen0_lblFilename->fn->setSize(Screen0_lblFilename, 232, 36);
    Screen0_lblFilename->fn->setScheme(Screen0_lblFilename, &OverlayScheme);
    Screen0_lblFilename->fn->setBackgroundType(Screen0_lblFilename, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblFilename->fn->setHAlignment(Screen0_lblFilename, LE_HALIGN_CENTER);
    Screen0_lblFilename->fn->setString(Screen0_lblFilename, (leString*)&string_strFilename);
    Screen0_btnSource->fn->addChild(Screen0_btnSource, (leWidget*)Screen0_lblFilename);

    Screen0_btnPlayPause = leButtonWidget_New();
    Screen0_btnPlayPause->fn->setPosition(Screen0_btnPlayPause, 260, 8);
    Screen0_btnPlayPause->fn->setSize(Screen0_btnPlayPause, 183, 75);
    Screen0_btnPlayPause->fn->setScheme(Screen0_btnPlayPause, &BaseScheme);
    Screen0_btnPlayPause->fn->setBackgroundType(Screen0_btnPlayPause, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnPlayPause->fn->setBorderType(Screen0_btnPlayPause, LE_WIDGET_BORDER_NONE);
    Screen0_btnPlayPause->fn->setToggleable(Screen0_btnPlayPause, LE_TRUE);
    Screen0_btnPlayPause->fn->setString(Screen0_btnPlayPause, (leString*)&string_strPlay);
    Screen0_btnPlayPause->fn->setPressedImage(Screen0_btnPlayPause, (leImage*)&Btn1P);
    Screen0_btnPlayPause->fn->setReleasedImage(Screen0_btnPlayPause, (leImage*)&Btn1);
    Screen0_btnPlayPause->fn->setImagePosition(Screen0_btnPlayPause, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnPlayPause->fn->setPressedEventCallback(Screen0_btnPlayPause, event_Screen0_btnPlayPause_OnPressed);
    Screen0_btnPlayPause->fn->setReleasedEventCallback(Screen0_btnPlayPause, event_Screen0_btnPlayPause_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_btnPlayPause);

    Screen0_btnStop = leButtonWidget_New();
    Screen0_btnStop->fn->setPosition(Screen0_btnStop, 445, 8);
    Screen0_btnStop->fn->setSize(Screen0_btnStop, 183, 75);
    Screen0_btnStop->fn->setScheme(Screen0_btnStop, &BaseScheme);
    Screen0_btnStop->fn->setBackgroundType(Screen0_btnStop, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnStop->fn->setBorderType(Screen0_btnStop, LE_WIDGET_BORDER_NONE);
    Screen0_btnStop->fn->setString(Screen0_btnStop, (leString*)&string_strStop);
    Screen0_btnStop->fn->setPressedImage(Screen0_btnStop, (leImage*)&Btn1P);
    Screen0_btnStop->fn->setReleasedImage(Screen0_btnStop, (leImage*)&Btn1);
    Screen0_btnStop->fn->setImagePosition(Screen0_btnStop, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnStop->fn->setReleasedEventCallback(Screen0_btnStop, event_Screen0_btnStop_OnReleased);
    root0->fn->addChild(root0, (leWidget*)Screen0_btnStop);

    Screen0_imgMchp = leImageWidget_New();
    Screen0_imgMchp->fn->setPosition(Screen0_imgMchp, 72, 54);
    Screen0_imgMchp->fn->setSize(Screen0_imgMchp, 150, 20);
    Screen0_imgMchp->fn->setBackgroundType(Screen0_imgMchp, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgMchp->fn->setBorderType(Screen0_imgMchp, LE_WIDGET_BORDER_NONE);
    Screen0_imgMchp->fn->setImage(Screen0_imgMchp, (leImage*)&Mchp_0);
    root0->fn->addChild(root0, (leWidget*)Screen0_imgMchp);

    Screen0_pnlMonoType = leWidget_New();
    Screen0_pnlMonoType->fn->setPosition(Screen0_pnlMonoType, -348, 95);
    Screen0_pnlMonoType->fn->setSize(Screen0_pnlMonoType, 335, 376);
    Screen0_pnlMonoType->fn->setScheme(Screen0_pnlMonoType, &OverlayScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlMonoType);

    Screen0_lblMonoType = leLabelWidget_New();
    Screen0_lblMonoType->fn->setPosition(Screen0_lblMonoType, 113, 52);
    Screen0_lblMonoType->fn->setSize(Screen0_lblMonoType, 122, 25);
    Screen0_lblMonoType->fn->setScheme(Screen0_lblMonoType, &BaseScheme);
    Screen0_lblMonoType->fn->setBackgroundType(Screen0_lblMonoType, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblMonoType->fn->setHAlignment(Screen0_lblMonoType, LE_HALIGN_CENTER);
    Screen0_lblMonoType->fn->setString(Screen0_lblMonoType, (leString*)&string_strMonoType);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_lblMonoType);

    Screen0_imgSeqMonoTypeBeam = leImageSequenceWidget_New();
    Screen0_imgSeqMonoTypeBeam->fn->setPosition(Screen0_imgSeqMonoTypeBeam, 106, 18);
    Screen0_imgSeqMonoTypeBeam->fn->setSize(Screen0_imgSeqMonoTypeBeam, 134, 34);
    Screen0_imgSeqMonoTypeBeam->fn->setBackgroundType(Screen0_imgSeqMonoTypeBeam, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgSeqMonoTypeBeam->fn->setImageCount(Screen0_imgSeqMonoTypeBeam, 3);
    Screen0_imgSeqMonoTypeBeam->fn->setImage(Screen0_imgSeqMonoTypeBeam, 0, &BeamWhite);
    Screen0_imgSeqMonoTypeBeam->fn->setImageDelay(Screen0_imgSeqMonoTypeBeam, 0, 1000);
    Screen0_imgSeqMonoTypeBeam->fn->setImage(Screen0_imgSeqMonoTypeBeam, 1, &BeamBlue);
    Screen0_imgSeqMonoTypeBeam->fn->setImageDelay(Screen0_imgSeqMonoTypeBeam, 1, 1000);
    Screen0_imgSeqMonoTypeBeam->fn->setImage(Screen0_imgSeqMonoTypeBeam, 2, &BeamRed);
    Screen0_imgSeqMonoTypeBeam->fn->setImageDelay(Screen0_imgSeqMonoTypeBeam, 2, 1000);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_imgSeqMonoTypeBeam);

    Screen0_btnMonoTypeMix = leButtonWidget_New();
    Screen0_btnMonoTypeMix->fn->setPosition(Screen0_btnMonoTypeMix, 91, 106);
    Screen0_btnMonoTypeMix->fn->setSize(Screen0_btnMonoTypeMix, 161, 56);
    Screen0_btnMonoTypeMix->fn->setScheme(Screen0_btnMonoTypeMix, &BaseScheme);
    Screen0_btnMonoTypeMix->fn->setBackgroundType(Screen0_btnMonoTypeMix, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoTypeMix->fn->setBorderType(Screen0_btnMonoTypeMix, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoTypeMix->fn->setString(Screen0_btnMonoTypeMix, (leString*)&string_strMix);
    Screen0_btnMonoTypeMix->fn->setPressedImage(Screen0_btnMonoTypeMix, (leImage*)&Btn2P);
    Screen0_btnMonoTypeMix->fn->setReleasedImage(Screen0_btnMonoTypeMix, (leImage*)&Btn2);
    Screen0_btnMonoTypeMix->fn->setImagePosition(Screen0_btnMonoTypeMix, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMonoTypeMix->fn->setReleasedEventCallback(Screen0_btnMonoTypeMix, event_Screen0_btnMonoTypeMix_OnReleased);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_btnMonoTypeMix);

    Screen0_btnMonoTypeLeft = leButtonWidget_New();
    Screen0_btnMonoTypeLeft->fn->setPosition(Screen0_btnMonoTypeLeft, 90, 169);
    Screen0_btnMonoTypeLeft->fn->setSize(Screen0_btnMonoTypeLeft, 161, 57);
    Screen0_btnMonoTypeLeft->fn->setScheme(Screen0_btnMonoTypeLeft, &BaseScheme);
    Screen0_btnMonoTypeLeft->fn->setBackgroundType(Screen0_btnMonoTypeLeft, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoTypeLeft->fn->setBorderType(Screen0_btnMonoTypeLeft, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoTypeLeft->fn->setString(Screen0_btnMonoTypeLeft, (leString*)&string_strLeft);
    Screen0_btnMonoTypeLeft->fn->setPressedImage(Screen0_btnMonoTypeLeft, (leImage*)&Btn2P);
    Screen0_btnMonoTypeLeft->fn->setReleasedImage(Screen0_btnMonoTypeLeft, (leImage*)&Btn2);
    Screen0_btnMonoTypeLeft->fn->setImagePosition(Screen0_btnMonoTypeLeft, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMonoTypeLeft->fn->setReleasedEventCallback(Screen0_btnMonoTypeLeft, event_Screen0_btnMonoTypeLeft_OnReleased);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_btnMonoTypeLeft);

    Screen0_btnMonoTypeSat = leButtonWidget_New();
    Screen0_btnMonoTypeSat->fn->setPosition(Screen0_btnMonoTypeSat, 90, 231);
    Screen0_btnMonoTypeSat->fn->setSize(Screen0_btnMonoTypeSat, 161, 57);
    Screen0_btnMonoTypeSat->fn->setScheme(Screen0_btnMonoTypeSat, &BaseScheme);
    Screen0_btnMonoTypeSat->fn->setBackgroundType(Screen0_btnMonoTypeSat, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoTypeSat->fn->setBorderType(Screen0_btnMonoTypeSat, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoTypeSat->fn->setString(Screen0_btnMonoTypeSat, (leString*)&string_strSat);
    Screen0_btnMonoTypeSat->fn->setPressedImage(Screen0_btnMonoTypeSat, (leImage*)&Btn2P);
    Screen0_btnMonoTypeSat->fn->setReleasedImage(Screen0_btnMonoTypeSat, (leImage*)&Btn2);
    Screen0_btnMonoTypeSat->fn->setImagePosition(Screen0_btnMonoTypeSat, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMonoTypeSat->fn->setReleasedEventCallback(Screen0_btnMonoTypeSat, event_Screen0_btnMonoTypeSat_OnReleased);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_btnMonoTypeSat);

    Screen0_btnMonoTypeRight = leButtonWidget_New();
    Screen0_btnMonoTypeRight->fn->setPosition(Screen0_btnMonoTypeRight, 90, 290);
    Screen0_btnMonoTypeRight->fn->setSize(Screen0_btnMonoTypeRight, 161, 61);
    Screen0_btnMonoTypeRight->fn->setScheme(Screen0_btnMonoTypeRight, &BaseScheme);
    Screen0_btnMonoTypeRight->fn->setBackgroundType(Screen0_btnMonoTypeRight, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoTypeRight->fn->setBorderType(Screen0_btnMonoTypeRight, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoTypeRight->fn->setString(Screen0_btnMonoTypeRight, (leString*)&string_strRight);
    Screen0_btnMonoTypeRight->fn->setPressedImage(Screen0_btnMonoTypeRight, (leImage*)&Btn2P);
    Screen0_btnMonoTypeRight->fn->setReleasedImage(Screen0_btnMonoTypeRight, (leImage*)&Btn2);
    Screen0_btnMonoTypeRight->fn->setImagePosition(Screen0_btnMonoTypeRight, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnMonoTypeRight->fn->setReleasedEventCallback(Screen0_btnMonoTypeRight, event_Screen0_btnMonoTypeRight_OnReleased);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_btnMonoTypeRight);

    Screen0_btnMonoTypeClose = leButtonWidget_New();
    Screen0_btnMonoTypeClose->fn->setPosition(Screen0_btnMonoTypeClose, 269, 5);
    Screen0_btnMonoTypeClose->fn->setSize(Screen0_btnMonoTypeClose, 60, 60);
    Screen0_btnMonoTypeClose->fn->setScheme(Screen0_btnMonoTypeClose, &BaseScheme);
    Screen0_btnMonoTypeClose->fn->setBackgroundType(Screen0_btnMonoTypeClose, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnMonoTypeClose->fn->setBorderType(Screen0_btnMonoTypeClose, LE_WIDGET_BORDER_NONE);
    Screen0_btnMonoTypeClose->fn->setString(Screen0_btnMonoTypeClose, (leString*)&string_strClose);
    Screen0_btnMonoTypeClose->fn->setReleasedEventCallback(Screen0_btnMonoTypeClose, event_Screen0_btnMonoTypeClose_OnReleased);
    Screen0_pnlMonoType->fn->addChild(Screen0_pnlMonoType, (leWidget*)Screen0_btnMonoTypeClose);

    Screen0_pnlSourceSelect = leWidget_New();
    Screen0_pnlSourceSelect->fn->setPosition(Screen0_pnlSourceSelect, -694, 94);
    Screen0_pnlSourceSelect->fn->setSize(Screen0_pnlSourceSelect, 335, 376);
    Screen0_pnlSourceSelect->fn->setScheme(Screen0_pnlSourceSelect, &OverlayScheme);
    root0->fn->addChild(root0, (leWidget*)Screen0_pnlSourceSelect);

    Screen0_lblMonoType_0 = leLabelWidget_New();
    Screen0_lblMonoType_0->fn->setPosition(Screen0_lblMonoType_0, 98, 52);
    Screen0_lblMonoType_0->fn->setSize(Screen0_lblMonoType_0, 152, 25);
    Screen0_lblMonoType_0->fn->setScheme(Screen0_lblMonoType_0, &BaseScheme);
    Screen0_lblMonoType_0->fn->setBackgroundType(Screen0_lblMonoType_0, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblMonoType_0->fn->setHAlignment(Screen0_lblMonoType_0, LE_HALIGN_CENTER);
    Screen0_lblMonoType_0->fn->setString(Screen0_lblMonoType_0, (leString*)&string_strSourceSelect);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_lblMonoType_0);

    Screen0_imgSeqSourceSelect = leImageSequenceWidget_New();
    Screen0_imgSeqSourceSelect->fn->setPosition(Screen0_imgSeqSourceSelect, 110, 18);
    Screen0_imgSeqSourceSelect->fn->setSize(Screen0_imgSeqSourceSelect, 134, 34);
    Screen0_imgSeqSourceSelect->fn->setBackgroundType(Screen0_imgSeqSourceSelect, LE_WIDGET_BACKGROUND_NONE);
    Screen0_imgSeqSourceSelect->fn->setImageCount(Screen0_imgSeqSourceSelect, 3);
    Screen0_imgSeqSourceSelect->fn->setImage(Screen0_imgSeqSourceSelect, 0, &BeamWhite);
    Screen0_imgSeqSourceSelect->fn->setImageDelay(Screen0_imgSeqSourceSelect, 0, 1000);
    Screen0_imgSeqSourceSelect->fn->setImage(Screen0_imgSeqSourceSelect, 1, &BeamBlue);
    Screen0_imgSeqSourceSelect->fn->setImageDelay(Screen0_imgSeqSourceSelect, 1, 1000);
    Screen0_imgSeqSourceSelect->fn->setImage(Screen0_imgSeqSourceSelect, 2, &BeamRed);
    Screen0_imgSeqSourceSelect->fn->setImageDelay(Screen0_imgSeqSourceSelect, 2, 1000);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_imgSeqSourceSelect);

    Screen0_btnSource1 = leButtonWidget_New();
    Screen0_btnSource1->fn->setPosition(Screen0_btnSource1, 30, 100);
    Screen0_btnSource1->fn->setSize(Screen0_btnSource1, 200, 50);
    Screen0_btnSource1->fn->setScheme(Screen0_btnSource1, &BaseScheme);
    Screen0_btnSource1->fn->setBackgroundType(Screen0_btnSource1, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSource1->fn->setBorderType(Screen0_btnSource1, LE_WIDGET_BORDER_NONE);
    Screen0_btnSource1->fn->setString(Screen0_btnSource1, (leString*)&string_strFilename);
    Screen0_btnSource1->fn->setPressedImage(Screen0_btnSource1, (leImage*)&Btn3P);
    Screen0_btnSource1->fn->setReleasedImage(Screen0_btnSource1, (leImage*)&Btn3);
    Screen0_btnSource1->fn->setImagePosition(Screen0_btnSource1, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnSource1->fn->setReleasedEventCallback(Screen0_btnSource1, event_Screen0_btnSource1_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSource1);

    Screen0_btnSource2 = leButtonWidget_New();
    Screen0_btnSource2->fn->setPosition(Screen0_btnSource2, 30, 151);
    Screen0_btnSource2->fn->setSize(Screen0_btnSource2, 200, 50);
    Screen0_btnSource2->fn->setScheme(Screen0_btnSource2, &BaseScheme);
    Screen0_btnSource2->fn->setBackgroundType(Screen0_btnSource2, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSource2->fn->setBorderType(Screen0_btnSource2, LE_WIDGET_BORDER_NONE);
    Screen0_btnSource2->fn->setString(Screen0_btnSource2, (leString*)&string_strFilename);
    Screen0_btnSource2->fn->setPressedImage(Screen0_btnSource2, (leImage*)&Btn3P);
    Screen0_btnSource2->fn->setReleasedImage(Screen0_btnSource2, (leImage*)&Btn3);
    Screen0_btnSource2->fn->setImagePosition(Screen0_btnSource2, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnSource2->fn->setReleasedEventCallback(Screen0_btnSource2, event_Screen0_btnSource2_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSource2);

    Screen0_btnSource3 = leButtonWidget_New();
    Screen0_btnSource3->fn->setPosition(Screen0_btnSource3, 30, 199);
    Screen0_btnSource3->fn->setSize(Screen0_btnSource3, 200, 50);
    Screen0_btnSource3->fn->setScheme(Screen0_btnSource3, &BaseScheme);
    Screen0_btnSource3->fn->setBackgroundType(Screen0_btnSource3, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSource3->fn->setBorderType(Screen0_btnSource3, LE_WIDGET_BORDER_NONE);
    Screen0_btnSource3->fn->setString(Screen0_btnSource3, (leString*)&string_strFilename);
    Screen0_btnSource3->fn->setPressedImage(Screen0_btnSource3, (leImage*)&Btn3P);
    Screen0_btnSource3->fn->setReleasedImage(Screen0_btnSource3, (leImage*)&Btn3);
    Screen0_btnSource3->fn->setImagePosition(Screen0_btnSource3, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnSource3->fn->setReleasedEventCallback(Screen0_btnSource3, event_Screen0_btnSource3_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSource3);

    Screen0_btnSource4 = leButtonWidget_New();
    Screen0_btnSource4->fn->setPosition(Screen0_btnSource4, 30, 247);
    Screen0_btnSource4->fn->setSize(Screen0_btnSource4, 200, 50);
    Screen0_btnSource4->fn->setScheme(Screen0_btnSource4, &BaseScheme);
    Screen0_btnSource4->fn->setBackgroundType(Screen0_btnSource4, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSource4->fn->setBorderType(Screen0_btnSource4, LE_WIDGET_BORDER_NONE);
    Screen0_btnSource4->fn->setString(Screen0_btnSource4, (leString*)&string_strFilename);
    Screen0_btnSource4->fn->setPressedImage(Screen0_btnSource4, (leImage*)&Btn3P);
    Screen0_btnSource4->fn->setReleasedImage(Screen0_btnSource4, (leImage*)&Btn3);
    Screen0_btnSource4->fn->setImagePosition(Screen0_btnSource4, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnSource4->fn->setReleasedEventCallback(Screen0_btnSource4, event_Screen0_btnSource4_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSource4);

    Screen0_btnSource5 = leButtonWidget_New();
    Screen0_btnSource5->fn->setPosition(Screen0_btnSource5, 30, 294);
    Screen0_btnSource5->fn->setSize(Screen0_btnSource5, 200, 50);
    Screen0_btnSource5->fn->setScheme(Screen0_btnSource5, &BaseScheme);
    Screen0_btnSource5->fn->setBackgroundType(Screen0_btnSource5, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSource5->fn->setBorderType(Screen0_btnSource5, LE_WIDGET_BORDER_NONE);
    Screen0_btnSource5->fn->setString(Screen0_btnSource5, (leString*)&string_strFilename);
    Screen0_btnSource5->fn->setPressedImage(Screen0_btnSource5, (leImage*)&Btn3P);
    Screen0_btnSource5->fn->setReleasedImage(Screen0_btnSource5, (leImage*)&Btn3);
    Screen0_btnSource5->fn->setImagePosition(Screen0_btnSource5, LE_RELATIVE_POSITION_BEHIND);
    Screen0_btnSource5->fn->setReleasedEventCallback(Screen0_btnSource5, event_Screen0_btnSource5_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSource5);

    Screen0_btnSourceSelectClose = leButtonWidget_New();
    Screen0_btnSourceSelectClose->fn->setPosition(Screen0_btnSourceSelectClose, 265, 6);
    Screen0_btnSourceSelectClose->fn->setSize(Screen0_btnSourceSelectClose, 60, 60);
    Screen0_btnSourceSelectClose->fn->setScheme(Screen0_btnSourceSelectClose, &BaseScheme);
    Screen0_btnSourceSelectClose->fn->setBackgroundType(Screen0_btnSourceSelectClose, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSourceSelectClose->fn->setBorderType(Screen0_btnSourceSelectClose, LE_WIDGET_BORDER_NONE);
    Screen0_btnSourceSelectClose->fn->setString(Screen0_btnSourceSelectClose, (leString*)&string_strClose);
    Screen0_btnSourceSelectClose->fn->setReleasedEventCallback(Screen0_btnSourceSelectClose, event_Screen0_btnSourceSelectClose_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSourceSelectClose);

    Screen0_btnSourceScrollUp = leButtonWidget_New();
    Screen0_btnSourceScrollUp->fn->setPosition(Screen0_btnSourceScrollUp, 257, 121);
    Screen0_btnSourceScrollUp->fn->setSize(Screen0_btnSourceScrollUp, 70, 87);
    Screen0_btnSourceScrollUp->fn->setBackgroundType(Screen0_btnSourceScrollUp, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSourceScrollUp->fn->setBorderType(Screen0_btnSourceScrollUp, LE_WIDGET_BORDER_NONE);
    Screen0_btnSourceScrollUp->fn->setPressedImage(Screen0_btnSourceScrollUp, (leImage*)&BtnUpP);
    Screen0_btnSourceScrollUp->fn->setReleasedImage(Screen0_btnSourceScrollUp, (leImage*)&BtnUp);
    Screen0_btnSourceScrollUp->fn->setReleasedEventCallback(Screen0_btnSourceScrollUp, event_Screen0_btnSourceScrollUp_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSourceScrollUp);

    Screen0_btnSourceScrollDown = leButtonWidget_New();
    Screen0_btnSourceScrollDown->fn->setPosition(Screen0_btnSourceScrollDown, 255, 216);
    Screen0_btnSourceScrollDown->fn->setSize(Screen0_btnSourceScrollDown, 70, 87);
    Screen0_btnSourceScrollDown->fn->setBackgroundType(Screen0_btnSourceScrollDown, LE_WIDGET_BACKGROUND_NONE);
    Screen0_btnSourceScrollDown->fn->setBorderType(Screen0_btnSourceScrollDown, LE_WIDGET_BORDER_NONE);
    Screen0_btnSourceScrollDown->fn->setPressedImage(Screen0_btnSourceScrollDown, (leImage*)&BtnDownP);
    Screen0_btnSourceScrollDown->fn->setReleasedImage(Screen0_btnSourceScrollDown, (leImage*)&BtnDown);
    Screen0_btnSourceScrollDown->fn->setReleasedEventCallback(Screen0_btnSourceScrollDown, event_Screen0_btnSourceScrollDown_OnReleased);
    Screen0_pnlSourceSelect->fn->addChild(Screen0_pnlSourceSelect, (leWidget*)Screen0_btnSourceScrollDown);

    Screen0_lblClassDAmp = leLabelWidget_New();
    Screen0_lblClassDAmp->fn->setPosition(Screen0_lblClassDAmp, 38, 13);
    Screen0_lblClassDAmp->fn->setSize(Screen0_lblClassDAmp, 222, 35);
    Screen0_lblClassDAmp->fn->setScheme(Screen0_lblClassDAmp, &BaseScheme);
    Screen0_lblClassDAmp->fn->setBackgroundType(Screen0_lblClassDAmp, LE_WIDGET_BACKGROUND_NONE);
    Screen0_lblClassDAmp->fn->setMargins(Screen0_lblClassDAmp, 0, 0, 0, 0);
    Screen0_lblClassDAmp->fn->setString(Screen0_lblClassDAmp, (leString*)&string_strClassD);
    root0->fn->addChild(root0, (leWidget*)Screen0_lblClassDAmp);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    Screen0_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Screen0(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Screen0_OnUpdate(); // raise event
}

void screenHide_Screen0(void)
{
    Screen0_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Screen0_BackgroundPanel = NULL;
    Screen0_pnlMain = NULL;
    Screen0_pnlSwap = NULL;
    Screen0_pnlDeemph = NULL;
    Screen0_pnlMono = NULL;
    Screen0_pnlEq = NULL;
    Screen0_btnSource = NULL;
    Screen0_btnPlayPause = NULL;
    Screen0_btnStop = NULL;
    Screen0_imgMchp = NULL;
    Screen0_pnlMonoType = NULL;
    Screen0_pnlSourceSelect = NULL;
    Screen0_lblClassDAmp = NULL;
    Screen0_lblTickn10 = NULL;
    Screen0_lblTickn15 = NULL;
    Screen0_lblTickn20 = NULL;
    Screen0_lblTickn25 = NULL;
    Screen0_lblTick5 = NULL;
    Screen0_lblTickn5 = NULL;
    Screen0_pnlVolMain = NULL;
    Screen0_btnKnobVol = NULL;
    Screen0_lblVolume = NULL;
    Screen0_lblTick10 = NULL;
    Screen0_lblTick0 = NULL;
    Screen0_imgSeqVolBeam = NULL;
    Screen0_btnMute = NULL;
    Screen0_pnlMainLevels = NULL;
    Screen0_btnSwapEnable = NULL;
    Screen0_imgSeqSwapBeam = NULL;
    Screen0_lblSwap = NULL;
    Screen0_imgSeqDeemphBeam = NULL;
    Screen0_btnDeempEnable = NULL;
    Screen0_lblDeemph = NULL;
    Screen0_imgSeqMonoBeam = NULL;
    Screen0_btnMonoEnable = NULL;
    Screen0_btnMonoType = NULL;
    Screen0_lblMono = NULL;
    Screen0_btnEqReset = NULL;
    Screen0_pnlBass = NULL;
    Screen0_imgEq = NULL;
    Screen0_lblEq = NULL;
    Screen0_pnlMid = NULL;
    Screen0_pnlTreble = NULL;
    Screen0_pnlEqBass = NULL;
    Screen0_lblTickn12 = NULL;
    Screen0_lblTickp12 = NULL;
    Screen0_lblTick0 = NULL;
    Screen0_lblTickn6 = NULL;
    Screen0_lblTickp6 = NULL;
    Screen0_lblBass = NULL;
    Screen0_btnKnobBass = NULL;
    Screen0_pnlEqBass_0 = NULL;
    Screen0_lblBass_0 = NULL;
    Screen0_lblTickn12_0 = NULL;
    Screen0_lblTickp12_0 = NULL;
    Screen0_lblTick0_0 = NULL;
    Screen0_lblTickn6_0 = NULL;
    Screen0_lblTickp6_0 = NULL;
    Screen0_btnKnobMid = NULL;
    Screen0_pnlEqBass_0_0 = NULL;
    Screen0_lblBass_0_0 = NULL;
    Screen0_lblTickn12_0_0 = NULL;
    Screen0_lblTickp12_0_0 = NULL;
    Screen0_lblTick0_0_0 = NULL;
    Screen0_lblTickn6_0_0 = NULL;
    Screen0_lblTickp6_0_0 = NULL;
    Screen0_btnKnobTreble = NULL;
    Screen0_imgWave = NULL;
    Screen0_lblSource = NULL;
    Screen0_lblFilename = NULL;
    Screen0_lblMonoType = NULL;
    Screen0_imgSeqMonoTypeBeam = NULL;
    Screen0_btnMonoTypeMix = NULL;
    Screen0_btnMonoTypeLeft = NULL;
    Screen0_btnMonoTypeSat = NULL;
    Screen0_btnMonoTypeRight = NULL;
    Screen0_btnMonoTypeClose = NULL;
    Screen0_lblMonoType_0 = NULL;
    Screen0_imgSeqSourceSelect = NULL;
    Screen0_btnSource1 = NULL;
    Screen0_btnSource2 = NULL;
    Screen0_btnSource3 = NULL;
    Screen0_btnSource4 = NULL;
    Screen0_btnSource5 = NULL;
    Screen0_btnSourceSelectClose = NULL;
    Screen0_btnSourceScrollUp = NULL;
    Screen0_btnSourceScrollDown = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Screen0(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx)
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

