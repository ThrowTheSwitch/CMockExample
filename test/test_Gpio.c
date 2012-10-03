#include "unity.h"
#include "Gpio.h"
#include "SfrDummy.h"

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

    TEST_ASSERT_EQUAL(0x01, PortA);
}

void test_Gpio_SetPin_should_set_the_correct_bit_in_PortA_for_pin_1(void)
{
    PortA = 0x00;

    Gpio_SetPin(1U);

    TEST_ASSERT_EQUAL(0x02, PortA);
}

void test_Gpio_SetPin_should_set_the_correct_bit_in_PortA_for_pin_7(void)
{
    PortA = 0x00;

    Gpio_SetPin(7U);

    TEST_ASSERT_EQUAL(0x80, PortA);
}

void test_Gpio_SetPin_should_do_nothing_if_pin_number_is_greater_than_7()
{
    PortA = 0x00;
    Gpio_SetPin(8U);
    TEST_ASSERT_EQUAL(0x00, PortA);
}

void test_Gpio_ClearPin_should_clear_the_correct_bit_in_PortA_for_pin_0(void)
{
    PortA = 0xFF;

    Gpio_ClearPin(0U);

    TEST_ASSERT_EQUAL(0xFE, PortA);
}

void test_Gpio_ClearPin_should_clear_the_correct_bit_in_PortA_for_pin_1(void)
{
    PortA = 0xFF;

    Gpio_ClearPin(1U);

    TEST_ASSERT_EQUAL(0xFD, PortA);
}

void test_Gpio_ClearPin_should_clear_the_correct_bit_in_PortA_for_pin_7(void)
{
    PortA = 0xFF;

    Gpio_ClearPin(7U);

    TEST_ASSERT_EQUAL(0x7F, PortA);
}

void test_Gpio_ClearPin_should_do_nothing_if_pin_number_is_greater_than_7()
{
    PortA = 0xFF;
    Gpio_ClearPin(8U);
    TEST_ASSERT_EQUAL(0xFF, PortA);
}


