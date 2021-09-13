#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: constant byte
* @n: byte filled
*
* Return: pointer to dest
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + 1) = b;
return (s);
}