#include <stdbool.h>
#include "printInterface.h"
#include "gfx/legato/generated/le_gen_init.h"

void LandingPage_OnShow(void)
{

}

void LandingPage_OnHide(void)
{

}

void LandingPage_OnUpdate(void)
{

}

void event_LandingPage_btnAdmin_OnReleased(leButtonWidget* btn)
{
    print_message_in_cpp("Event from LandingPage btnAdmin OnReleased");

    /* Temporarily go to home screen for now */
    legato_showScreen(screenID_HomeScreen);
}

void event_LandingPage_btnOperator_OnReleased(leButtonWidget* btn)
{
    print_message_in_cpp("Event from LandingPage btnOperator OnReleased");

    /* Temporarily go to home screen for now */
    legato_showScreen(screenID_HomeScreen);
}
