#include "gfx/legato/generated/le_gen_init.h"
#include "app_screen.h"

void event_BatteryFull_buttonHome_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PaymentScreen);
}

void event_BatteryFull_ExitButton_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PaymentScreen);
}
