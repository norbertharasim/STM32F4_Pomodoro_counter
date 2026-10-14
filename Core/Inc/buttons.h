//
// Created by Admin on 10/11/2026.
//

#ifndef POMODORO_BUTTONS_H
#define POMODORO_BUTTONS_H
#include "main.h"

typedef enum {
    BTN_NONE = 0,
    BTN_START,
    BTN_PAUSE,
    BTN_RESET
}button_event_t;

void buttons_init(void);
button_event_t buttons(void);
#endif //POMODORO_BUTTONS_H
