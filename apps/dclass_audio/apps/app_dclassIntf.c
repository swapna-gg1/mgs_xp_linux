#include "app_dclassIntf.h"

int set_equalizer(EQ_FILTER_VALUE value)
{
    printf("%s: %d \r\n", __FUNCTION__, value);
}

int enable_deemphasis_filter(void)
{
    printf("%s \r\n", __FUNCTION__);
}

int disable_deemphasis_filter(void)
{
    printf("%s \r\n", __FUNCTION__);
}

int set_volume(int value)
{
    printf("%s : %d \r\n", __FUNCTION__, value);
}

int enable_mono_mode(void)
{
    printf("%s \r\n", __FUNCTION__);
}

int disable_mono_mode(void)
{
    printf("%s \r\n", __FUNCTION__);
}
 
int set_mono_mode_type(MONO_TYPE type)
{
    printf("%s: %d \r\n", __FUNCTION__, type);
}

int enable_swap_mode(void)
{
    printf("%s \r\n", __FUNCTION__);
}

int disable_swap_mode(void)
{
    printf("%s \r\n", __FUNCTION__);
}

int play_sound_file(char * filename)
{
    printf("%s: %s \r\n", __FUNCTION__, filename);
}

int stop_sound_file(void)
{
    printf("%s \r\n", __FUNCTION__);
}
 
int resume_sound_file(void)
{
    printf("%s \r\n", __FUNCTION__);
}
 
int pause_sound_file(void)
{
    printf("%s \r\n", __FUNCTION__);
}
 