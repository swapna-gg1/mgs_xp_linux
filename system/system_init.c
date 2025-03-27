
#include <stdio.h>
#include <string.h>
#include <time.h>   /* Needed for struct timespec */

#include "gfx/legato/generated/le_gen_init.h"
#include "gfx/legato/legato.h"
#include "system_init.h"
#include "linux/sim_time.h"

#ifdef USE_DRM_KMS
#include "linux/display/drm/drm_backend.h"
#endif

#include "linux/display/fbdev/fbdev_backend.h"

#ifdef USE_SDL2
#include "linux/display/sdl2/gfx_sdl2.h"
#endif

#ifdef USE_CANVAS
#include "gfx/canvas/gfx_canvas_api.h"
extern gfxDisplayDriver gfxCanvasDriverInterface;
#endif

#include "linux/input/libinput_backend.h"

static uint32_t ticks;

int mssleep(long miliseconds)
{
   struct timespec rem;
   struct timespec req= {
       (int)(miliseconds / 1000),     /* secs (Must be Non-Negative) */ 
       (miliseconds % 1000) * 1000000 /* nano (Must be in range of 0 to 999999999) */ 
   };

   return nanosleep(&req , &rem);
}

void SYS_Initialize(__attribute__((unused)) void* data)
{
	sim_TimeInit();

	ticks = sim_TimeTotal();

	LibInput_Initialize();

#ifdef USE_DRM_KMS
	struct GfxDevice* gd = NULL;
	gd = GFX_Initialize();
	if(gd != NULL)
    {
		printf("initialize DRM/KM Backend Success\n");
#ifdef USE_CANVAS
		GFX_CANVAS_Initialize(&gd->gfxDriverInterface);

    	if (leInitialize(&gfxCanvasDriverInterface, NULL) == LE_FAILURE) {
    	    //ToDo Add drm device deinitialize
			GFX_DeInitalize();
    	    return;
    	}

#else
    	// initialize hardware layer
    	if (leInitialize(&gd->gfxDriverInterface, NULL) == LE_FAILURE) {
    	    //ToDo Add drm device deinitialize
			GFX_DeInitalize();
    	    return;
    	}
#endif
    	legato_initializeScreenState();
		return;
	}
#endif
	struct FBDevDevice* fbdev = NULL;
	fbdev = (struct FBDevDevice*) FBDev_Initialize();
	if(fbdev != NULL)
	{
		printf("initialize FBDev Backend Success\n");
#ifdef USE_CANVAS
		GFX_CANVAS_Initialize(&fbdev->gfxDriverInterface);

    	if (leInitialize(&gfxCanvasDriverInterface, NULL) == LE_FAILURE) {
    	    //ToDo Add drm device deinitialize
			FBDev_DeInitalize();
    	    return;
    	}

#else
    	// initialize hardware layer
    	if (leInitialize(&fbdev->gfxDriverInterface, NULL) == LE_FAILURE) {
    	    //ToDo Add drm device deinitialize
			FBDev_DeInitalize();
    	    return;
    	}
#endif
    	legato_initializeScreenState();
		return;
	}

#ifdef USE_SDL2
	if(GFX_SDL2_Initialize())
	{
		printf("initialize SDL2 Backend Success\n");
		return;
	}
#endif
		
	printf("initializing Display Backend Failed\n");
	exit(1);
}

void SYS_Tasks(void)
{
	uint32_t currentTicks = sim_TimeTotal() - ticks;
	
	sim_TimeUpdate();
	
#ifdef USE_DRM_KMS
	GFX_Update();
#endif

#if USE_SDL2
	GFX_SDL2_Update();
#endif

#ifdef USE_CANVAS
	GFX_CANVAS_Task();	
#endif

	LibInput_Update();

	if(currentTicks > 0)
	{
		ticks = sim_TimeTotal();
		leUpdate(currentTicks);
		legato_updateScreenState();
		mssleep(10);
	}
}

