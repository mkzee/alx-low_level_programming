#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers to stdout
 * @separator: character to print after each number
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		printf("%d", x);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
