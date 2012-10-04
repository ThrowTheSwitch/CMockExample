#include "LedControl.h"
#include "Gpio.h"
#include <assert.h>

void LedControl_TurnLedOn(LED_T led)
{
    if(LED_RED == led)
    {
        GPIO_SetPin(RED_LED_PIN);
    }
    else if (LED_BLUE == led)
    {
        GPIO_SetPin(BLUE_LED_PIN);
    }
    else assert(0);
}

void LedControl_TurnLedOff(LED_T led)
{
    if(LED_RED == led)
    {
        GPIO_ClearPin(RED_LED_PIN);
    }
    else if (LED_BLUE == led)
    {
        GPIO_ClearPin(BLUE_LED_PIN);
    }
    else assert(0);
}