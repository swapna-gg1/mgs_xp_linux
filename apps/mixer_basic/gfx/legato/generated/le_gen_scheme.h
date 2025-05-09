#ifndef LEGATO_INIT_SCHEME_H
#define LEGATO_INIT_SCHEME_H

#include "gfx/legato/legato.h"

extern const leScheme defaultScheme;
extern const leScheme BaseScheme;
extern const leScheme PanelScheme;
extern const leScheme BarScheme;
extern const leScheme RedScheme;
extern const leScheme WhiteTextScheme;
extern const leScheme GrayScheme;
extern const leScheme GreenScheme;

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

void legato_initialize_schemes(void);

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LEGATO_INIT_SCHEME_H
