#include <stdio.h>

typedef enum
{
    TCUT12, 
    TCUT6,
    MCUT8,
    MCUT3,
    BCUT12, 
    BCUT6, 
    ZERO,
    BBOOST6,
    BBOOST12, 
    MBOOST3,
    MBOOST8,
    TBOOST6,
    TBOOST12,
} EQ_FILTER_VALUE;

typedef enum
{
    MONO_MIX,
    MONO_SAT,
    MONO_LEFT,
    MONO_RIGHT,
} MONO_TYPE;

int set_equalizer(EQ_FILTER_VALUE);
int enable_deemphasis_filter(void);
int disable_deemphasis_filter(void);
int set_volume(int);
int enable_mono_mode(void);
int disable_mono_mode(void); 
int set_mono_mode_type(MONO_TYPE);
int enable_swap_mode(void);
int disable_swap_mode(void);
int play_sound_file(char * filename);
int stop_sound_file(void); 
int resume_sound_file(void); 
int pause_sound_file(void); 
