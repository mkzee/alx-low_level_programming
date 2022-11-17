#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds numbers passed as arguments
 * @n: is the number of optional arguments
 * Return: returns the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	unsigned int i;
	int sum = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
