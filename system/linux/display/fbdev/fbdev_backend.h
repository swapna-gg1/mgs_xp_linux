#ifndef GFX_FBDEV_BACKEND_H
#define GFX_FBDEV_BACKEND_H

#include <stdint.h>
#include <linux/fb.h>
#include "gfx/driver/gfx_driver.h"

struct FBDevDevice
{
    int fbfd;
    long int screensize;
    uint32_t width, height;
    uint32_t format;
	uint32_t max_buffers;
	uint32_t current_index;
    gfxDisplayDriver gfxDriverInterface;
    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;
    void* fbptr;
	uint8_t **fbs;
	void (*update)(void);
};

struct FBDevDevice *FBDev_Initialize(void);

void FBDev_DeInitalize(void);

#endif // GFX_BACKEND_H
