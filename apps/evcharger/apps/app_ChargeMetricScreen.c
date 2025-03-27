#include <stdio.h>

#include "gfx/legato/generated/le_gen_init.h"
#include "app_screen.h"

#define ANIM_PERIOD_MS 200
#define DEFAULT_START_CHARGE_PCT 10
#define VALUE_STR_SIZE 8
#define BATT_IMG_FULL_WIDTH 300
#define BATT_FULL_DELAY 1000
#define MAX_GRAPH_ITEMS 16

#define MAX_OUTPUT_POWER_KW 600
#define MAX_ELAPSED_TIME_MINS 1440
#define MAX_REMAINING_TIME_MINS 1440
#define MAX_DELIVERED_ENERGY_KWH 200

#define DEFAULT_REM_TIME_MINS (100 - DEFAULT_START_CHARGE_PCT)

typedef enum
{
    APP_DASH_SCREEN_INIT,
    APP_DASH_SCREEN_CHARGING,
    APP_DASH_SCREEN_COMPLETE,
} APP_DASH_SCREEN_STATE;

static volatile unsigned int tickCount = 0;
static volatile unsigned int animTickCount = 0;
static unsigned int animTickCountLast = 0;
static APP_DASH_SCREEN_STATE appChargeScreenState;

//static SYS_TIME_HANDLE timer = SYS_TIME_HANDLE_INVALID;

static leFixedString chargeValueStr;
static leChar chargeValueStrBuff[VALUE_STR_SIZE] = {0};

static leFixedString outputPowerValueStr;
static leChar outputPowerValueStrBuff[VALUE_STR_SIZE] = {0};

static leFixedString outputPowerValueStr1;
static leChar outputPowerValueStrBuff1[VALUE_STR_SIZE] = {0};

static leFixedString elapsedTimeStr;
static leChar elapsedTimeStrBuff[VALUE_STR_SIZE] = {0};

static leFixedString elapsedTimeStr1;
static leChar elapsedTimeStrBuff1[VALUE_STR_SIZE] = {0};

static leFixedString remainingTimeStr;
static leChar remainingTimeStrBuff[VALUE_STR_SIZE] = {0};

static leFixedString remainingTimeStr1;
static leChar remainingTimeStrBuff1[VALUE_STR_SIZE] = {0};

static leFixedString DeliveredEnergyStr;
static leChar DeliveredEnergyStrBuff[VALUE_STR_SIZE] = {0};

static leFixedString DeliveredEnergyStr1;
static leChar DeliveredEnergyStrBuff1[VALUE_STR_SIZE] = {0};

static unsigned int chargePct = 0;
static unsigned int kwGraphIndex = 0;
static unsigned int deliveredEnergykwh = 0;

static unsigned int remTimeMins = DEFAULT_REM_TIME_MINS;
static unsigned int elapsedTimeMins = 0;

static uint32_t kWGraphDatax5[MAX_GRAPH_ITEMS] = 
{
    6, 7, 7, 8, 5, 6, 7, 9, 8, 5, 6, 7, 8, 9, 10, 8,
};

void APP_UpdateChargeValueGUI(unsigned int value)
{
    char valueCStr[VALUE_STR_SIZE] = {0};
    
    value = (value <= 100) ?  value : 100;

    snprintf(valueCStr, VALUE_STR_SIZE, "%u %%", value);
        
    chargeValueStr.fn->setFromCStr(&chargeValueStr, valueCStr);
    ChargeDashMetric_labelBatPct->fn->setString(ChargeDashMetric_labelBatPct, (leString *) &chargeValueStr);    
    
    APP_LE_SETWIDTH(ChargeDashMetric_imgBattFull, (value * BATT_IMG_FULL_WIDTH) / 100);
    
}

void APP_UpdateOutputPower(unsigned int kw)
{
    char valueCStr[VALUE_STR_SIZE] = {0};
    
    kw = (kw <= MAX_OUTPUT_POWER_KW) ?  kw : MAX_OUTPUT_POWER_KW;

    snprintf(valueCStr, VALUE_STR_SIZE, "%u kW", kw);
        
    outputPowerValueStr.fn->setFromCStr(&outputPowerValueStr, valueCStr);
    ChargeDashMetric_labelOutputPowValue->fn->setString(ChargeDashMetric_labelOutputPowValue, (leString *) &outputPowerValueStr);   
    
    outputPowerValueStr1.fn->setFromCStr(&outputPowerValueStr1, valueCStr);
    ChargeDashMetric_labelOutputPowValue1->fn->setString(ChargeDashMetric_labelOutputPowValue1, (leString *) &outputPowerValueStr1);   
}

void APP_UpdateElapsedTime(unsigned int mins)
{
    char valueCStr[VALUE_STR_SIZE] = {0};
    
    mins = (mins <= MAX_ELAPSED_TIME_MINS) ?  mins : MAX_ELAPSED_TIME_MINS;

    snprintf(valueCStr, VALUE_STR_SIZE, "%02u:%02u", mins / 60, mins % 60);
        
    elapsedTimeStr.fn->setFromCStr(&elapsedTimeStr, valueCStr);
    ChargeDashMetric_labelElapsedTime->fn->setString(ChargeDashMetric_labelElapsedTime, (leString *) &elapsedTimeStr);   

    elapsedTimeStr1.fn->setFromCStr(&elapsedTimeStr1, valueCStr);
    ChargeDashMetric_labelElapsedTime1->fn->setString(ChargeDashMetric_labelElapsedTime1, (leString *) &elapsedTimeStr1);   
}

void APP_UpdateRemainingTime(unsigned int mins)
{
    char valueCStr[VALUE_STR_SIZE] = {0};
    
    mins = (mins <= MAX_REMAINING_TIME_MINS) ?  mins : MAX_REMAINING_TIME_MINS;

    snprintf(valueCStr, VALUE_STR_SIZE, "%02u:%02u", mins / 60, mins % 60);
        
    remainingTimeStr.fn->setFromCStr(&remainingTimeStr, valueCStr);
    ChargeDashMetric_labelRemTimeValue->fn->setString(ChargeDashMetric_labelRemTimeValue, (leString *) &remainingTimeStr);   
    
    remainingTimeStr1.fn->setFromCStr(&remainingTimeStr1, valueCStr);
    ChargeDashMetric_labelRemTimeValue1->fn->setString(ChargeDashMetric_labelRemTimeValue1, (leString *) &remainingTimeStr1);   
}

void APP_UpdateDeliveredEnergy(unsigned int kwh)
{
    char valueCStr[VALUE_STR_SIZE] = {0};
    
    kwh = (kwh <= MAX_REMAINING_TIME_MINS) ?  kwh : MAX_REMAINING_TIME_MINS;

    snprintf(valueCStr, VALUE_STR_SIZE, "%u kWh", kwh);
        
    DeliveredEnergyStr.fn->setFromCStr(&DeliveredEnergyStr, valueCStr);
    ChargeDashMetric_labelDelEnergyValue->fn->setString(ChargeDashMetric_labelDelEnergyValue, (leString *) &DeliveredEnergyStr);   
    
    DeliveredEnergyStr1.fn->setFromCStr(&DeliveredEnergyStr1, valueCStr);
    ChargeDashMetric_labelDelEnergyValue1->fn->setString(ChargeDashMetric_labelDelEnergyValue1, (leString *) &DeliveredEnergyStr1);   
}

//static void APP_UI_Timer_Callback ( uintptr_t context)
//{
//    animTickCount++;
//}

void event_ChargeDashMetric_buttonGraphView_OnReleased(leButtonWidget* btn)
{
    APP_LE_SETVISIBLE(ChargeDashMetric_GraphPanel, LE_TRUE);
    APP_LE_SETVISIBLE(ChargeDashMetric_GraphPanelStatic, LE_TRUE);
    APP_LE_SETVISIBLE(ChargeDashMetric_MetricPanel, LE_FALSE);
}

void event_ChargeDashMetric_buttonMetricView_OnReleased(leButtonWidget* btn)
{
    APP_LE_SETVISIBLE(ChargeDashMetric_GraphPanel, LE_FALSE);
    APP_LE_SETVISIBLE(ChargeDashMetric_GraphPanelStatic, LE_FALSE);
    APP_LE_SETVISIBLE(ChargeDashMetric_MetricPanel, LE_TRUE);
}

void event_ChargeDashMetric_ExitButton_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_PaymentScreen);
}

void ChargeDashMetric_OnShow(void)
{
    unsigned int i = 0;
    
    appChargeScreenState = APP_DASH_SCREEN_INIT;
    
    chargePct = DEFAULT_START_CHARGE_PCT;
    remTimeMins = DEFAULT_REM_TIME_MINS;
    elapsedTimeMins = 0;
    
    tickCount = 0;
    animTickCount = 0;
    kwGraphIndex = 0;
    deliveredEnergykwh = 0;

//    timer = SYS_TIME_CallbackRegisterMS(APP_UI_Timer_Callback, 
//                                        1,
//                                        ANIM_PERIOD_MS,
//                                        SYS_TIME_PERIODIC);
//    SYS_TIME_TimerStart(timer);
    
    APP_LE_SETVISIBLE(ChargeDashMetric_GraphPanel, LE_TRUE);
    APP_LE_SETVISIBLE(ChargeDashMetric_GraphPanelStatic, LE_TRUE);
    APP_LE_SETVISIBLE(ChargeDashMetric_MetricPanel, LE_FALSE);
    ChargeDashMetric_GraphGridPanel->fn->setCornerRadius(ChargeDashMetric_GraphGridPanel, 10);
    
    leFixedString_Constructor(&chargeValueStr, chargeValueStrBuff, VALUE_STR_SIZE);
    chargeValueStr.fn->setFont(&chargeValueStr, (const leFont* ) &InterBlock25); 
    
    leFixedString_Constructor(&outputPowerValueStr, outputPowerValueStrBuff, VALUE_STR_SIZE);
    outputPowerValueStr.fn->setFont(&outputPowerValueStr, (const leFont* ) &InterBlock25); 
    
    leFixedString_Constructor(&elapsedTimeStr, elapsedTimeStrBuff, VALUE_STR_SIZE);
    elapsedTimeStr.fn->setFont(&elapsedTimeStr, (const leFont* ) &InterBlock25); 
    
    leFixedString_Constructor(&remainingTimeStr, remainingTimeStrBuff, VALUE_STR_SIZE);
    remainingTimeStr.fn->setFont(&remainingTimeStr, (const leFont* ) &InterBlock25);
    
    leFixedString_Constructor(&outputPowerValueStr1, outputPowerValueStrBuff1, VALUE_STR_SIZE);
    outputPowerValueStr1.fn->setFont(&outputPowerValueStr1, (const leFont* ) &InterBlock25); 
    
    leFixedString_Constructor(&elapsedTimeStr1, elapsedTimeStrBuff1, VALUE_STR_SIZE);
    elapsedTimeStr1.fn->setFont(&elapsedTimeStr1, (const leFont* ) &InterBlock25); 
    
    leFixedString_Constructor(&remainingTimeStr1, remainingTimeStrBuff1, VALUE_STR_SIZE);
    remainingTimeStr1.fn->setFont(&remainingTimeStr1, (const leFont* ) &InterBlock25);
    
    leFixedString_Constructor(&DeliveredEnergyStr, DeliveredEnergyStrBuff, VALUE_STR_SIZE);
    DeliveredEnergyStr.fn->setFont(&DeliveredEnergyStr, (const leFont* ) &InterBlock25);       
    
    leFixedString_Constructor(&DeliveredEnergyStr1, DeliveredEnergyStrBuff1, VALUE_STR_SIZE);
    DeliveredEnergyStr1.fn->setFont(&DeliveredEnergyStr1, (const leFont* ) &InterBlock25);     

    for (i = 0; i < MAX_GRAPH_ITEMS; i++)
    {
        ChargeDashMetric_LineGraphWidget_0->fn->setDataInSeries(ChargeDashMetric_LineGraphWidget_0, 0, i, 0);
    }
}

void ChargeDashMetric_OnHide(void)
{
//    SYS_TIME_TimerStop(timer); 
//    SYS_TIME_TimerDestroy(timer);
}

void ChargeDashMetric_OnUpdate(void)
{
    animTickCount++;
    
    switch(appChargeScreenState)
    {
        case APP_DASH_SCREEN_INIT:
        {
            appChargeScreenState = APP_DASH_SCREEN_CHARGING;
            break;
        }
        case APP_DASH_SCREEN_CHARGING:
        {
            if (animTickCountLast != animTickCount)
            {
                unsigned int i, j;
                
                
                animTickCountLast = animTickCount;
                
                chargePct = (chargePct < 100) ? chargePct + 1 : 100;
                
                APP_UpdateChargeValueGUI(chargePct);
                
                ChargeDashMetric_imgChargingIcon->fn->setVisible(ChargeDashMetric_imgChargingIcon, (chargePct / 5) & 0x1);
                
                APP_UpdateOutputPower(kWGraphDatax5[kwGraphIndex % MAX_GRAPH_ITEMS] * 50);
                
                for (i = 0; i < MAX_GRAPH_ITEMS; i++)
                {
                    if (i < kwGraphIndex)
                    {
                        j = ((kwGraphIndex - i) % MAX_GRAPH_ITEMS);
                        ChargeDashMetric_LineGraphWidget_0->fn->setDataInSeries(
                                    ChargeDashMetric_LineGraphWidget_0,
                                    0,
                                    i,
                                    kWGraphDatax5[j]);
                    }
                }
                
                elapsedTimeMins += 1;
                remTimeMins -= 1;
                kwGraphIndex += 1;
                deliveredEnergykwh += 1;
                
                APP_UpdateElapsedTime(elapsedTimeMins);
                APP_UpdateRemainingTime(remTimeMins);
                APP_UpdateDeliveredEnergy(deliveredEnergykwh);
                
                
                if (chargePct == 100)
                {
                    appChargeScreenState = APP_DASH_SCREEN_COMPLETE;
                    
                    ChargeDashMetric_imgChargingIcon->fn->setVisible(ChargeDashMetric_imgChargingIcon, LE_TRUE);
                    
//                    SYS_TIME_TimerStop(timer);
//                    SYS_TIME_DelayMS(BATT_FULL_DELAY, &timer);
                }
            }
            
            break;
        }
        case APP_DASH_SCREEN_COMPLETE:
        {
//            if (SYS_TIME_DelayIsComplete(timer))
            {
//                SYS_TIME_TimerStop(timer);
//                SYS_TIME_TimerDestroy(timer); 
                
                legato_showScreen(screenID_BatteryFull);
            }
            
            break;
        }
        default:
            break;
    }
}


