#include <sys/time.h>
#include <unistd.h>

#include "sim_time.h"

double delta;
size_t ticks;

struct timeval start;
struct timeval last;

void sim_TimeInit()
{
    delta = 0.0;
    ticks = 0;

    start.tv_sec = 0;
    start.tv_usec = 0;

    gettimeofday(&start, NULL);

    last = start;
}

void sim_TimeUpdate()
{
    struct timeval ts;

    gettimeofday(&ts, NULL);

    delta = (ts.tv_sec - last.tv_sec) * 1000;
    delta += (ts.tv_usec - last.tv_usec) / 1000;

    delta = delta * 0.001; /* convert to seconds */

    last = ts;
}

uint32_t sim_TimeTotal()
{
    size_t tm;

    tm = (last.tv_sec - start.tv_sec) * 1000;
    tm += (last.tv_usec - start.tv_usec) / 1000;

    return tm;
}

void sim_TimeSleep(uint32_t u)
{
    usleep(u);
}

double sim_TimeDelta()
{
    return delta;
}

