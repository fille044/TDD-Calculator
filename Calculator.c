/* -------------------------------------------*/
/*
    Filip Lindström & Johan Kämpe
    Last changed :  2017 - 11- 15
    Created:        2017 - 11 - 15

    Test och verifiering - Mölk Utbildning

    Description: All calculations required for a simple calculator.
*/
/* -------------------------------------------*/

#include "Calculator.h"
#include <stdbool.h>

int Subtraction(int a, int b)
{
    return a - b;
}

int Addition(int a, int b)
{
    return a + b;
}

int Multiplication(int a, int b)
{
    return a * b;
}

float Division(int a, int b)
{
    return (float)a / b;
}

float PowerOf(int a, int b)
{
    if(!b) // x^0 is 1
    {
        return (float)1;
    }

    /* if b is negative, divide a, else multiply a */
    bool multiply = b > 0 ? true : false;
    float retval = 1.0f;

    /* Loop b times, inverse b if negative */
    for (int i = 0; i < (multiply ? b : b * -1); i++)
    {
        /* Divide or multiply, depending on b is neg/pos */
        retval = (multiply ? retval * a : retval / a);
    }

    return retval;
}
