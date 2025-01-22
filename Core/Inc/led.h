#ifndef _LED_H
#define _LED_H

#include "gpio.h"

#define LED uint16_t

void LED_On(LED led);
void LED_Off(LED led);

void LED_Toggle(LED led);

void LED_OnAll(LED leds[], uint8_t size);
void LED_OffAll(LED leds[], uint8_t size);

#endif
