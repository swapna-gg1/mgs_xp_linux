#ifndef SYSTEM_LINUX_INPUT_LIBINPUT_BACKEND_H
#define SYSTEM_LINUX_INPUT_LIBINPUT_BACKEND_H

#include <stdint.h>

#include "gfx/driver/gfx_driver.h"

#define DRIVER_DISPLAY_WIDTH 1280
#define DRIVER_DISPLAY_HEIGHT 800

int32_t LibInput_Initialize(void);

void LibInput_Update(void);

void LibInput_DeInitialize(void);

#endif //SYSTEM_LINUX_INPUT_LIBINPUT_BACKEND_H
