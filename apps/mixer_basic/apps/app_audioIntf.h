#include <stdio.h>

#define APP_AUDIO_INTF_SUCCESS 0
#define APP_AUDIO_INTF_FAILED -1

#define VOLUME_DEFAULT_PCT 50

typedef enum
{
    APP_AUDIO_DISABLE,
    APP_AUDIO_ENABLE,
} APP_AUDIO_ENABLE_t;

typedef enum
{
    APP_AUDIO_IDX1,
    APP_AUDIO_IDX2,
    APP_AUDIO_IDX3,
    APP_AUDIO_IDX4,
    APP_AUDIO_IDX_MAX,
} APP_AUDIO_IDX_t;

int App_AudioIntf_InputEnable(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en);
int App_AudioIntf_InputMute(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en);
int App_AudioIntf_InputCue(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en);
int App_AudioIntf_InputSolo(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en);
int App_AudioIntf_InputSetVol(APP_AUDIO_IDX_t input, unsigned int vol);

int App_AudioIntf_OutputEnable(APP_AUDIO_IDX_t output, APP_AUDIO_ENABLE_t en);

int App_AudioIntf_MainSetVol(unsigned int vol);
int App_AudioIntf_MixerRun(void);
int App_AudioIntf_MixerStop(void);
int App_AudioIntf_MainMute(APP_AUDIO_ENABLE_t en);

void App_AudioIntf_Reset(void);
