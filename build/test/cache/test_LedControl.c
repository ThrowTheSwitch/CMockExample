#include "unity.h"
#include "mock_Gpio.h"
#include "LedControl.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_LedControl_TurnLedOn_should_turn_on_GPIO_pin_1_when_turning_on_the_red_LED()

{



    Gpio_SetPin_CMockExpect(16, 1U);





    LedControl_TurnLedOn(LED_RED);

}



void test_LedControl_TurnLedOn_should_turn_on_GPIO_pin_2_when_turning_on_the_blue_LED()

{



    Gpio_SetPin_CMockExpect(25, 2U);





    LedControl_TurnLedOn(LED_BLUE);

}



void test_LedControl_TurnLedOff_should_turn_off_GPIO_pin_1_when_turning_off_the_red_LED()

{



    Gpio_ClearPin_CMockExpect(34, 1U);





    LedControl_TurnLedOff(LED_RED);

}



void test_LedControl_TurnLedOff_should_turn_off_GPIO_pin_2_when_turning_off_the_blue_LED()

{



    Gpio_ClearPin_CMockExpect(43, 2U);





    LedControl_TurnLedOff(LED_BLUE);

}
