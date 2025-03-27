typedef enum
{
    APP_SCRN_INIT,
    APP_SCRN_IDLE,
    APP_SCRN_RUN,
    APP_SCRN_STOP,
} APP_SCRN_STATE_t;

typedef enum
{
    APP_SCRN_EVT_INPUT_ENABLE,
    APP_SCRN_EVT_INPUT_VOLUME,
    APP_SCRN_EVT_INPUT_MUTE,
    APP_SCRN_EVT_INPUT_SOLO,
    APP_SCRN_EVT_INPUT_CUE,

    APP_SCRN_EVT_OUTPUT_ENABLE,

    APP_SCRN_EVT_MAIN_VOLUME,
    APP_SCRN_EVT_MAIN_MUTE,
    
    APP_SCRN_EVT_RUN,

    APP_SCRN_EVT_RESET,
    
    /* number of events */
    APP_SCRN_EVT_MAX, 

    /* limit to 32 events, due to 32-bit event flag used */
    APP_SCRN_EVT_LIMIT = 31,
} APP_SCRN_EVENT_TYPE_t;

typedef struct
{
    unsigned char idx;
    unsigned char value;
} APP_SCRN_EVENT_PARM_t;

typedef struct
{
    uint32_t eventFlag;
    APP_SCRN_EVENT_PARM_t eventParm[APP_SCRN_EVT_MAX];
} APP_SCRN_EVENTS_t;