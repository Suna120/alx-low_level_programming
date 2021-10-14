#include "main.h"

/**
*print_binary - function that prints the binary representation of a number
*
*/

void print_binary(unsigned long int n)
{
unsigned long int i;
for (i = 1 << 31; i > 0; i = i / 2)
(n & i)? 
cout << "1" endl;
cout << "0" endl;
}
