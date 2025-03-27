#ifndef LEGATO_INIT_H
#define LEGATO_INIT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

#include "gfx/legato/generated/screen/le_gen_screen_DetailsScreen.h"
#include "gfx/legato/generated/screen/le_gen_screen_LastNameConfScreen.h"
#include "gfx/legato/generated/screen/le_gen_screen_PaymentScreen.h"
#include "gfx/legato/generated/screen/le_gen_screen_CompleteScreen.h"
#include "gfx/legato/generated/screen/le_gen_screen_WelcomeScreen.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen IDs
#define screenID_DetailsScreen    0
#define screenID_LastNameConfScreen    1
#define screenID_PaymentScreen    2
#define screenID_CompleteScreen    3
#define screenID_WelcomeScreen    4

void legato_initializeScreenState(void);

// global screen control functions
uint32_t legato_getCurrentScreen(void);
void legato_showScreen(uint32_t id);
void legato_updateScreenState(void);

// do not do anything in the application if this returns true
leBool legato_isChangingScreens(void);


//DOM-IGNORE-BEGIN

#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LEGATO_INIT_H
