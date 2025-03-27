#include <stdio.h>
#include <stdint.h>

#include "app_ScreenMain.h"
#include "app_audioIntf.h"

int App_AudioIntf_InputEnable(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: enable input, set retVal to APP_AUDIO_INTF_FAILED if failed */

    printf("Input %d %s \r\n", input, (en == 1) ? "enabled" : "disabled");

    return retVal;
}

int App_AudioIntf_InputMute(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: mute input, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Input %d %s \r\n", input, (en == 1) ? "muted" : "unmuted");

    return retVal;
}

int App_AudioIntf_InputCue(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: cue input, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Input %d cue %s \r\n", input, (en == 1) ? "enabled" : "disabled");

    return retVal;
}

int App_AudioIntf_InputSolo(APP_AUDIO_IDX_t input, APP_AUDIO_ENABLE_t en)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: solo input, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Input %d solo %s \r\n", input, (en == 1) ? "enabled" : "disabled");

    return retVal;
}

int App_AudioIntf_InputSetVol(APP_AUDIO_IDX_t input, unsigned int vol)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    if (vol > 100)
        return APP_AUDIO_INTF_FAILED;

    /* TODO: solo input, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Input %d volume %d \r\n", input, vol);

    return retVal;
}

int App_AudioIntf_OutputEnable(APP_AUDIO_IDX_t output, APP_AUDIO_ENABLE_t en)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: enable output, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Output %d solo %s \r\n", output, (en == 1) ? "enabled" : "disabled");

    return retVal;
}

int App_AudioIntf_MainSetVol(unsigned int vol)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    if (vol > 100)
        return APP_AUDIO_INTF_FAILED;    

    /* TODO: Set output volume, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Main volume %d \r\n", vol);

    return retVal;
}

int App_AudioIntf_MainMute(APP_AUDIO_ENABLE_t en)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: Mute main, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Main mute %s \r\n", (en == 1) ? "enabled" : "disabled");

    return retVal;
}

int App_AudioIntf_MixerRun(void)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: Run mixer settings, set retVal to APP_AUDIO_INTF_FAILED if failed */

    printf("Mixer RUN \r\n");

    return retVal;
}

int App_AudioIntf_MixerStop(void)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: Stop Mixer/Playback, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Mixer STOP \r\n");

    return retVal; 
}

void App_AudioIntf_Reset(void)
{
    int retVal = APP_AUDIO_INTF_SUCCESS;

    /* TODO: Reset Audio backend, set retVal to APP_AUDIO_INTF_FAILED if failed */
    printf("Mixer Reset \r\n");

    return retVal; 
}
