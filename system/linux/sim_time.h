#ifndef SIM_TIME_H
#define SIM_TIME_H

#include "gfx/legato/legato.h"

void     sim_TimeInit(void);
void     sim_TimeUpdate(void);
uint32_t sim_TimeTotal(void);
void     sim_TimeSleep(uint32_t ms);
double   sim_TimeDelta(void);

#endif // SIM_TIME_H
