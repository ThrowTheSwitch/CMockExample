#ifndef LedControl_H
#define LedControl_H

// Correlate led to gpio pins
#define RED_LED_PIN    1
#define BLUE_LED_PIN   2

// The available leds...
typedef enum {
    LED_RED,
    LED_BLUE
} LED_T;

void LedControl_TurnLedOn(LED_T led);
void LedControl_TurnLedOff(LED_T led);

#endif // LedControl_H
