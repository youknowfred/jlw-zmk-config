#include <zmk/event_manager.h>
#include "activity_state_changed.h"

struct position_state_changed {
    uint32_t position;
    bool state;
};

ZMK_EVENT_DECLARE(position_state_changed);

int activity_state_changed_trigger(bool active, uint32_t position) {
    struct activity_state_changed *event = new_activity_state_changed();
    event->active = active;
    event->position = position;
    return ZMK_EVENT_RAISE(activity_state_changed, event);
}
