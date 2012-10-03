#include "unity.h"
#include "SfrDummy.h"
#include "Gpio.h"


extern uint8_t PortA;



void setUp(void)

{

}



void tearDown(void)

{

}



void test_Gpio_SetPin_should_set_the_correct_bit_in_PortA_for_pin_0(void)

{

    PortA = 0x00;



    Gpio_SetPin(0U);



    UnityAssertEqualNumber((_U_SINT)((0x01)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_SetPin_should_set_the_correct_bit_in_PortA_for_pin_1(void)

{

    PortA = 0x00;



    Gpio_SetPin(1U);



    UnityAssertEqualNumber((_U_SINT)((0x02)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_SetPin_should_set_the_correct_bit_in_PortA_for_pin_7(void)

{

    PortA = 0x00;



    Gpio_SetPin(7U);



    UnityAssertEqualNumber((_U_SINT)((0x80)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_SetPin_should_do_nothing_if_pin_number_is_greater_than_7()

{

    PortA = 0x00;

    Gpio_SetPin(8U);

    UnityAssertEqualNumber((_U_SINT)((0x00)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_ClearPin_should_clear_the_correct_bit_in_PortA_for_pin_0(void)

{

    PortA = 0xFF;



    Gpio_ClearPin(0U);



    UnityAssertEqualNumber((_U_SINT)((0xFE)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_ClearPin_should_clear_the_correct_bit_in_PortA_for_pin_1(void)

{

    PortA = 0xFF;



    Gpio_ClearPin(1U);



    UnityAssertEqualNumber((_U_SINT)((0xFD)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_ClearPin_should_clear_the_correct_bit_in_PortA_for_pin_7(void)

{

    PortA = 0xFF;



    Gpio_ClearPin(7U);



    UnityAssertEqualNumber((_U_SINT)((0x7F)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

}



void test_Gpio_ClearPin_should_do_nothing_if_pin_number_is_greater_than_7()

{

    PortA = 0xFF;

    Gpio_ClearPin(8U);

    UnityAssertEqualNumber((_U_SINT)((0xFF)), (_U_SINT)((PortA)), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

}
