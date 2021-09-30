#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Sums the value of all its parameters.
 *@n: last number to be summed.
 *Return: The sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list tm;
unsigned int i, sum;
va_start(tm, n);

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(tm, int);

va_end(tm);
if (n == 0)
return (0);

return (sum);
}
