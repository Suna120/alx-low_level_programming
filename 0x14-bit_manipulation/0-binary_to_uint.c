#include "main.h"
#include <stdlib.h>

/*
*_strlen - length of input strings
*@str: input string
*Return: len of string
*/
int _strlen(const char *str)
{
    int len = 0;
    while (*str)
    {
        len++;
        y++;
    }
    return (len);
}

/*
*_to_power - prints power of numbers
*@base: base
*@power: raised to
*Return: product of two numbers
*/
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


/*
*binary_to_uint - converts binary number to unsigned int
*@b: points to a string of 0 and 1 chars
*Return: converted number or 0 when b == NULL.
*/

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
