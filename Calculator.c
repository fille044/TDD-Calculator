/* -------------------------------------------*/
/*
    Test och verifiering - Mölk Utbildning

    Description: All calculations required for a simple calculator.
*/
/* -------------------------------------------*/

#include "Calculator.h"
#include <stdbool.h>
#include <stdio.h>

uint8_t SetLed(uint8_t Led, uint16_t *VirtualLed)
{
    if (Led < 1 || Led > 16) {
        return OFF;
    }
    else {
        *VirtualLed |= (1 << (Led - 1));
        return ON;
    }
}

uint8_t GetLed(uint8_t Led, uint16_t *VirtualLed)
{
    if (Led < 1 || Led > 16) {
        return ERROR;
    }
    else {
        if (((*VirtualLed & (1 << (Led - 1))) >> (Led - 1)) == 1) {
            return ON;
        }
        else if (((*VirtualLed & (1 << (Led - 1))) >> (Led - 1)) == 0) {
            return OFF;
        }
        else {
            return ERROR;
        }
    }
}
