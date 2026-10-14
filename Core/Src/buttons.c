//
// Created by nh on 10/14/26.
//
#include "buttons.h"
#include "main.h"
#include "stdbool.h"
static bool is_pressed(GPIO_TypeDef *port, uint16_t pin) {
    return HAL_GPIO_ReadPin(port, pin) == GPIO_PIN_RESET;
}

void buttons_init(void) {

}


