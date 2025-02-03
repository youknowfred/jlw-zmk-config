#pragma once

#include <zmk/event_manager.h>

struct activity_state_changed {
    bool active;
    uint32_t position;
};

ZMK_EVENT_DECLARE(activity_state_changed);
