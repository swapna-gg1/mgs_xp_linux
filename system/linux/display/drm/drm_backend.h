#ifndef GFX_BACKEND_H
#define GFX_BACKEND_H

#include <stdint.h>

#include "drm_device.h"
#include "plane.h"
#include "gfx/driver/gfx_driver.h"

//#define DRIVER_DISPLAY_WIDTH 1280
//#define DRIVER_DISPLAY_HEIGHT 800

struct GfxDevice {
    uint32_t *v_bufptr;
    uint32_t width, height;
    uint32_t format;
    struct plane_data **planes;
    struct kms_screen *screen;
    struct kms_device *device;
	struct kms_framebuffer **fbs;
	uint32_t fbs_count;
    uint32_t active_layer_id;
    uint32_t max_buffers;
    gfxDisplayDriver gfxDriverInterface;
};


struct GfxDevice *GFX_Initialize(void);

void GFX_Update(void);

//int32_t GFX_Initialize_touch(void);

void GFX_DeInitalize(void);

#endif // GFX_BACKEND_H
