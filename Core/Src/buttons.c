//
// Created by nh on 10/14/26.
//
#include "buttons.h"
#include "main.h"
#include "stdbool.h"
#include "stdint.h"

static bool is_pressed(GPIO_TypeDef *port, uint16_t pin) {
    return HAL_GPIO_ReadPin(port, pin) == GPIO_PIN_SET;
}

void buttons_init(void) {

}
button_event_t buttons(void) {
    bool start = is_pressed(START_GPIO_Port, START_Pin);
    bool pause = is_pressed(PAUSE_GPIO_Port, PAUSE_Pin);
    bool reset = is_pressed(RESET_GPIO_Port, RESET_Pin);

    button_event_t event = BTN_NONE;

    if (start) event = BTN_START;
    else if (pause) event = BTN_PAUSE;
    else if (reset) event = BTN_RESET;

    return event;

}

