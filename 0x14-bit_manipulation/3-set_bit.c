#include "main.h"

unsigned long int powX(int b, int p)
{
	unsigned long int ans = 1;

	while (p)
	{
		ans *= b;
		p--;
	}
	return (ans);
}


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int test;

	if (index > sizeof(n) * BIT_SIZE - 1)
		return (-1);


	test = powX(2, index);
	*n = *n | test;
	return (1);

}
