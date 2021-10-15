#include "main.h"

/**
*set_bit - a function that sets the value of a bit to 1 at a given index
*@index: the index, starting from 0 of the bit you want to set
*@n
*Returns: 1 if it worked, or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
  return ( *n| (1 << index));
}
int main()
{
 unsigned int *n = 0x00;
  unsigned int index =0;
  puts("*n = 0x%x\n\n",*n);
  puts("Enter set position");
  scanf("%u", &index);
  *n = set_bit(N, index);
  return 0;
}

