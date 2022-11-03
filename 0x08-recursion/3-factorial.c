#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: an integer
 * Return: returns the factorial of n or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
