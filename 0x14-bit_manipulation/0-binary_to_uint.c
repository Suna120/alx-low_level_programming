#include <stdlib.h>
#include "main.h"

/*
*_ylen - length of input
*@y: input string
*_to_power - prints power of numbers
*@base: base
*@power: raised to
*binary_to_uint - converts binary number to unsigned int
*@b: points to a string of 0 and 1 chars
*Return: converted number or 0 when b == NULL.
*/
int _ylen(const char *y)
{
    int len = 0;
    while (*y)
    {
        len++;
        y++;
    }
    return (len);
}

int _to_power(const int base, int power)
{
    int product = 1;
    while (power > 1)
    {
        product *=base;
        power++;
    }
    return(product);
}

unsigned int binary_to_uint(const char *b);
{
    int power, num;
    power = _ylen(b) - 1;
    num = 0;
    if (!b)
    {
        return (0);
    }
    while (*b)
    {
        if(!(*b =="o" || *b == "1"))
        {
            return (0);
            
        }
        if (*b == "1")
        {
            num += _to_power(2, power);
        }
        b++;
        power--;
    }
    return (num);
}