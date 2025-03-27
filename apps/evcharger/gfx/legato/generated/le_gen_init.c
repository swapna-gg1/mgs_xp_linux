#include "gfx/legato/generated/le_gen_init.h"

static int32_t currentScreen;
static int32_t changingToScreen;

void legato_initializeScreenState(void)
{
    leSetStringTable(&stringTable);

    initializeStrings();

    screenInit_BatteryFull();
    screenInit_ChargeDashMetric();
    screenInit_PaymentScreen();
    screenInit_PlugScreen();
    screenInit_SplashScreen();

    currentScreen = -1;
    changingToScreen = -1;

    legato_showScreen(screenID_SplashScreen);
}

uint32_t legato_getCurrentScreen(void)
{
    return currentScreen;
}

static void legato_hideCurrentScreen(void)
{
    switch(currentScreen)
    {
        case screenID_BatteryFull:
        {
            screenHide_BatteryFull();
            currentScreen = 0;
            break;
        }
        case screenID_ChargeDashMetric:
        {
            screenHide_ChargeDashMetric();
            currentScreen = 0;
            break;
        }
        case screenID_PaymentScreen:
        {
            screenHide_PaymentScreen();
            currentScreen = 0;
            break;
        }
        case screenID_PlugScreen:
        {
            screenHide_PlugScreen();
            currentScreen = 0;
            break;
        }
        case screenID_SplashScreen:
        {
            screenHide_SplashScreen();
            currentScreen = 0;
            break;
        }
    }
}

void legato_showScreen(uint32_t id)
{
    if(changingToScreen >= 0)
        return;

    changingToScreen = id;
}

void legato_updateScreenState(void)
{
    if(leIsDrawing() == LE_TRUE)
        return;

    if(changingToScreen >= 0)
    {
        legato_hideCurrentScreen();

        switch(changingToScreen)
        {
            case screenID_BatteryFull:
            {
                screenShow_BatteryFull();
                break;
            }
            case screenID_ChargeDashMetric:
            {
                screenShow_ChargeDashMetric();
                break;
            }
            case screenID_PaymentScreen:
            {
                screenShow_PaymentScreen();
                break;
            }
            case screenID_PlugScreen:
            {
                screenShow_PlugScreen();
                break;
            }
            case screenID_SplashScreen:
            {
                screenShow_SplashScreen();
                break;
            }
        }

        currentScreen = changingToScreen;
        changingToScreen = -1;
    }

    switch(currentScreen)
    {
        case screenID_BatteryFull:
        {
            screenUpdate_BatteryFull();
            break;
        }
        case screenID_ChargeDashMetric:
        {
            screenUpdate_ChargeDashMetric();
            break;
        }
        case screenID_PaymentScreen:
        {
            screenUpdate_PaymentScreen();
            break;
        }
        case screenID_PlugScreen:
        {
            screenUpdate_PlugScreen();
            break;
        }
        case screenID_SplashScreen:
        {
            screenUpdate_SplashScreen();
            break;
        }
    }
}

leBool legato_isChangingScreens(void)
{
    return changingToScreen != -1;
}

