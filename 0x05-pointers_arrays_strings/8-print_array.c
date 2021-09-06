#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* followed by a new line.
* @a: input array
* @n: input n elements
* return: no return
*/
void print_array(int *a, int n)
{
int b = 0;

for (; b < n; b++)
{
printf("%d", *(a + b));
if (b != (n - 1))
printf(", ");
}
printf("\n");
}
