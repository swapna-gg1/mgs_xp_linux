
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include <libinput.h>
#include <libudev.h>

#include "libinput_backend.h"
#include "gfx/legato/common/legato_color.h"
#include "gfx/legato/common/legato_pixelbuffer.h"
#include "gfx/legato/generated/le_gen_init.h"

static struct libinput *li = NULL;

static int32_t open_restricted(const char *path, int32_t flags, void *user_data)
{
    int32_t fd = open(path, flags);
    return fd < 0 ? -1 : fd;
}

static void close_restricted(int32_t fd, void *user_data)
{
    close(fd);
}

const static struct libinput_interface interface = {
    .open_restricted = open_restricted,
    .close_restricted = close_restricted,
};

int32_t LibInput_Initialize()
{
    struct udev *udev = udev_new();
    if (!udev) {
        fprintf(stderr, "Failed to initialize udev");
        return -1;
    }

    li = libinput_udev_create_context(&interface, NULL, udev);

    if (libinput_udev_assign_seat(li,  "seat0")) {
        fprintf(stderr, "failed to set seat");
        libinput_unref(li);
        udev_unref(udev);
        return -1;
    }

    udev_unref(udev);
    return 0;
}

static void handle_event_touch(struct libinput_event *ev)
{
    static int32_t x;
    static int32_t y;

    struct libinput_event_touch *t = libinput_event_get_touch_event(ev);

    switch (libinput_event_get_type(ev)) {
        case LIBINPUT_EVENT_TOUCH_UP: {
            leInput_InjectTouchUp(0, x, y);
            break;
        }
        case LIBINPUT_EVENT_TOUCH_DOWN: {
            x = libinput_event_touch_get_x_transformed(t, DRIVER_DISPLAY_WIDTH);
            y = libinput_event_touch_get_y_transformed(t, DRIVER_DISPLAY_HEIGHT);

            leInput_InjectTouchDown(0, x, y);
            break;
        }
        case LIBINPUT_EVENT_TOUCH_MOTION: {
            x = libinput_event_touch_get_x_transformed(t, DRIVER_DISPLAY_WIDTH);
            y = libinput_event_touch_get_y_transformed(t, DRIVER_DISPLAY_HEIGHT);

            leInput_InjectTouchMoved(0, x, y);
            break;
        }
        default:
            break;
    }
}


void LibInput_Update(void)
{
    struct libinput_event *event;
    if (li) {
        libinput_dispatch(li);

        event = libinput_get_event(li);
        if (event) {
            switch (libinput_event_get_type(event)) {
                case LIBINPUT_EVENT_TOUCH_DOWN:
                case LIBINPUT_EVENT_TOUCH_MOTION:
                case LIBINPUT_EVENT_TOUCH_UP:
                    handle_event_touch(event);
                    break;
            }
            libinput_event_destroy(event);
        }
    }
    return;
}

void LibInput_DeInitialize(void)
{
    if (li) {
        libinput_unref(li);
    }
}

