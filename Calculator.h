/* -------------------------------------------*/
/*
    Test och verifiering - Mölk Utbildning

    Description: Library for Calculator.c
*/
/* -------------------------------------------*/

#include <stdint.h>

uint8_t SetLed(uint8_t Led, uint16_t *VirtualLed);
uint8_t GetLed(uint8_t Led, uint16_t *VirtualLed);

enum status{
    OFF = 0,
    ON = 1,
    ERROR = 255,
};
