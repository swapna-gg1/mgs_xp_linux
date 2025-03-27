#ifndef APP_GUI_H
#define APP_GUI_H

#include "gfx/legato/generated/le_gen_init.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

typedef enum
{
    PA0,
    PA1,
    PA2,
    PA3,
    PA4,
    PA_MAX,
    PA_ALL = PA_MAX,
} PA_TYPE_t;

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // APP_GUI_H