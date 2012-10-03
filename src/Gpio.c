#include "Gpio.h"
#include <assert.h>

// When compiling tests, include our dummy SFR definitions.
#ifdef TEST 
    #include "SfrDummy.h"
    extern uint8_t PortA;
#endif


void Gpio_SetPin(uint8_t pin_num)
{
    // Validate the input
    if(pin_num > 7) return;
    // Set the output 
    PortA |= (1 << pin_num);
}

void Gpio_ClearPin(uint8_t pin_num)
{
    // Validate the input
    if(pin_num > 7) return;
    // Set the output 
    PortA ^= (1 << pin_num);
}