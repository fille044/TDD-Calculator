/* -------------------------------------------*/
/*
    Filip Lindstr�m & Johan K�mpe
    Last changed :  2017 - 11- 15
    Created:        2017 - 11 - 15

    Test och verifiering - M�lk Utbildning

    Description: Test cases for calculations made in Calculator.c
*/
/* -------------------------------------------*/

#include "../unity/src/unity.h"
#include "Calculator.h"
#include <stdio.h>
#include <math.h> // pow

// Compile commands     gcc TestDumbExample.c DumbExample.c unity/src/unity.c -o TestDumbExample

/* Tests addition in three steps */
void test_Addition(void)
{
    TEST_ASSERT_EQUAL(36, Addition(20, 16));
    TEST_ASSERT_EQUAL(8, Addition(-20, 28));
    TEST_ASSERT_EQUAL(1256, Addition(750, 506));
}

/* Tests subtraction in three steps */
void test_Subtraction(void)
{
    TEST_ASSERT_EQUAL(12, Subtraction(20, 8));
    TEST_ASSERT_EQUAL(2, Subtraction(4, 2));
    TEST_ASSERT_EQUAL(30, Subtraction(20, -10));
}

/* Tests multiplication in three steps */
void test_Multiplication(void)
{
    TEST_ASSERT_EQUAL(18, Multiplication(3, 6));
    TEST_ASSERT_EQUAL(81, Multiplication(9, 9));
    TEST_ASSERT_EQUAL(81096, Multiplication(124, 654));
}

/* Tests division in three steps */
void test_Division(void)
{
    // To test more complex division
    int a = 10, b = 3;
    float sum = (float)a / b;

    TEST_ASSERT_EQUAL_FLOAT(2, Division(4, 2));
    TEST_ASSERT_EQUAL_FLOAT(9, Division(81, 9));
    TEST_ASSERT_EQUAL_FLOAT(sum, Division(a, b));
}

/* Tests power of */
void test_PowerOf(void)
{
    TEST_ASSERT_EQUAL(4, PowerOf(2, 2));
    TEST_ASSERT_EQUAL(729, PowerOf(3, 6));
    TEST_ASSERT_EQUAL(1, PowerOf(-3, 0));
    TEST_ASSERT_EQUAL_FLOAT(pow(5,-3), PowerOf(5, -3));
    TEST_ASSERT_EQUAL_FLOAT(pow(65,-32), PowerOf(65, -32));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Addition);
    RUN_TEST(test_Subtraction);
    RUN_TEST(test_Multiplication);
    RUN_TEST(test_Division);
    RUN_TEST(test_PowerOf);
    return UNITY_END();
}
