#include "unity.h"
#include "System.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void void test_ShouldAbortApp_should_return_false_under_normal_operation(void)
{
    TEST_ASSERT_FALSE(ShouldAbortApp());
}
