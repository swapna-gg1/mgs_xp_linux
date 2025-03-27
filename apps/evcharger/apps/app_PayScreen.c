#include "gfx/legato/generated/le_gen_init.h"
#include "app_screen.h"

void event_PaymentScreen_buttonPayBrowser_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PlugScreen);
}

void event_PaymentScreen_buttonPayCredit_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PlugScreen);
}

void event_PaymentScreen_buttonPayRFID_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PlugScreen);
}

void PaymentScreen_OnShow(void)
{

}

void PaymentScreen_OnHide(void)
{
    
}
