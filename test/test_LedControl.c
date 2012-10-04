#include "unity.h"
#include "LedControl.h"
#include "mock_Gpio.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_LedControl_TurnLedOn_should_turn_on_GPIO_pin_1_when_turning_on_the_red_LED()
{
    // Setup expected call chain
    GPIO_SetPin_Expect(1U);

    // Call the function under test
    LedControl_TurnLedOn(LED_RED);
} 

void test_LedControl_TurnLedOn_should_turn_on_GPIO_pin_2_when_turning_on_the_blue_LED()
{
    // Setup expected call chain
    GPIO_SetPin_Expect(2U);

    // Call the function under test
    LedControl_TurnLedOn(LED_BLUE);
}

void test_LedControl_TurnLedOff_should_turn_off_GPIO_pin_1_when_turning_off_the_red_LED()
{
    // Setup expected call chain
    GPIO_ClearPin_Expect(1U);

    // Call the function under test
    LedControl_TurnLedOff(LED_RED);
}

void test_LedControl_TurnLedOff_should_turn_off_GPIO_pin_2_when_turning_off_the_blue_LED()
{
    // Setup expected call chain
    GPIO_ClearPin_Expect(2U);

    // Call the function under test
    LedControl_TurnLedOff(LED_BLUE);
}