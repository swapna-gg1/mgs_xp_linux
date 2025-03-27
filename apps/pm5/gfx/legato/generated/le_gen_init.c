#include "gfx/legato/generated/le_gen_init.h"

static int32_t currentScreen;
static int32_t changingToScreen;

void legato_initializeScreenState(void)
{
    leSetStringTable(&stringTable);

    initializeStrings();

    screenInit_HomeScreen();
    screenInit_LandingPage();

    currentScreen = -1;
    changingToScreen = -1;

    legato_showScreen(screenID_LandingPage);
}

uint32_t legato_getCurrentScreen(void)
{
    return currentScreen;
}

static void legato_hideCurrentScreen(void)
{
    switch(currentScreen)
    {
        case screenID_HomeScreen:
        {
            screenHide_HomeScreen();
            currentScreen = 0;
            break;
        }
        case screenID_LandingPage:
        {
            screenHide_LandingPage();
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
            case screenID_HomeScreen:
            {
                screenShow_HomeScreen();
                break;
            }
            case screenID_LandingPage:
            {
                screenShow_LandingPage();
                break;
            }
        }

        currentScreen = changingToScreen;
        changingToScreen = -1;
    }

    switch(currentScreen)
    {
        case screenID_HomeScreen:
        {
            screenUpdate_HomeScreen();
            break;
        }
        case screenID_LandingPage:
        {
            screenUpdate_LandingPage();
            break;
        }
    }
}

leBool legato_isChangingScreens(void)
{
    return changingToScreen != -1;
}

