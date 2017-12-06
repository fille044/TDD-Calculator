
/* -------------------------------------------*/
/*
    Test och verifiering - Mölk Utbildning

    Description: Test cases for calculations made in Calculator.c
*/
/* -------------------------------------------*/

#include "../unity/src/unity.h"
#include "Calculator.h"
#include <stdio.h>
#include <math.h> // pow

// Compile commands     gcc TestDumbExample.c DumbExample.c unity/src/unity.c -o TestDumbExample

void test_SetLed(void)
{
    uint16_t VirtualLed = 0;
    TEST_ASSERT_EQUAL(OFF, SetLed(0, &VirtualLed));
    TEST_ASSERT_EQUAL(ON, SetLed(1, &VirtualLed));
    TEST_ASSERT_EQUAL(ON, SetLed(16, &VirtualLed));
    TEST_ASSERT_EQUAL(OFF, SetLed(17, &VirtualLed));
}

void test_GetLed(void)
{
    uint16_t VirtualLed = 1 << 3;
    TEST_ASSERT_EQUAL(ERROR, GetLed(0, &VirtualLed));
    TEST_ASSERT_EQUAL(OFF, GetLed(12, &VirtualLed));
    VirtualLed = 0b0000000110000000;
    TEST_ASSERT_EQUAL(ON, GetLed(9, &VirtualLed));
    TEST_ASSERT_EQUAL(OFF, GetLed(7, &VirtualLed));
    TEST_ASSERT_EQUAL(ON, GetLed(8, &VirtualLed));
    TEST_ASSERT_EQUAL(ERROR, GetLed(17, &VirtualLed));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_SetLed);
    RUN_TEST(test_GetLed);

    return UNITY_END();
}
