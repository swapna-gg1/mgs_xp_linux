#include "gfx/legato/generated/le_gen_init.h"

static int32_t currentScreen;
static int32_t changingToScreen;

void legato_initializeScreenState(void)
{
    leSetStringTable(&stringTable);

    initializeStrings();

    screenInit_DetailsScreen();
    screenInit_LastNameConfScreen();
    screenInit_PaymentScreen();
    screenInit_CompleteScreen();
    screenInit_WelcomeScreen();

    currentScreen = -1;
    changingToScreen = -1;

    legato_showScreen(screenID_WelcomeScreen);
}

uint32_t legato_getCurrentScreen(void)
{
    return currentScreen;
}

static void legato_hideCurrentScreen(void)
{
    switch(currentScreen)
    {
        case screenID_DetailsScreen:
        {
            screenHide_DetailsScreen();
            currentScreen = 0;
            break;
        }
        case screenID_LastNameConfScreen:
        {
            screenHide_LastNameConfScreen();
            currentScreen = 0;
            break;
        }
        case screenID_PaymentScreen:
        {
            screenHide_PaymentScreen();
            currentScreen = 0;
            break;
        }
        case screenID_CompleteScreen:
        {
            screenHide_CompleteScreen();
            currentScreen = 0;
            break;
        }
        case screenID_WelcomeScreen:
        {
            screenHide_WelcomeScreen();
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
            case screenID_DetailsScreen:
            {
                screenShow_DetailsScreen();
                break;
            }
            case screenID_LastNameConfScreen:
            {
                screenShow_LastNameConfScreen();
                break;
            }
            case screenID_PaymentScreen:
            {
                screenShow_PaymentScreen();
                break;
            }
            case screenID_CompleteScreen:
            {
                screenShow_CompleteScreen();
                break;
            }
            case screenID_WelcomeScreen:
            {
                screenShow_WelcomeScreen();
                break;
            }
        }

        currentScreen = changingToScreen;
        changingToScreen = -1;
    }

    switch(currentScreen)
    {
        case screenID_DetailsScreen:
        {
            screenUpdate_DetailsScreen();
            break;
        }
        case screenID_LastNameConfScreen:
        {
            screenUpdate_LastNameConfScreen();
            break;
        }
        case screenID_PaymentScreen:
        {
            screenUpdate_PaymentScreen();
            break;
        }
        case screenID_CompleteScreen:
        {
            screenUpdate_CompleteScreen();
            break;
        }
        case screenID_WelcomeScreen:
        {
            screenUpdate_WelcomeScreen();
            break;
        }
    }
}

leBool legato_isChangingScreens(void)
{
    return changingToScreen != -1;
}

