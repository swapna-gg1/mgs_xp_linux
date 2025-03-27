#include "gfx/legato/generated/le_gen_init.h"
#include "app_screen.h"


void event_PlugScreen_buttonConnect_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_ChargeDashMetric);
}

void event_PlugScreen_ExitButton_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PaymentScreen);
}
