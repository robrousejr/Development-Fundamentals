#pragma once
#include <iostream>

// Return number of digits in a number
template <class T>
int numDigits(T num)
{
    int digits = 0;
    if(num < 0) digits = 1;
    while(num)
    {
        num /= 10;
        digits++;
    }

    return digits;
}