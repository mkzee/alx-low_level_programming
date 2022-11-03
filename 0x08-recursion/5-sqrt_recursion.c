#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number n
 * @n: is an integer
 * Return: returns the square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}


/**
 * sqr - finds the square root of n through recursive testing
 * @n: is an integer
 * @x: x is value to be test, x is incremented and tested until
 * it satisfies the if statement
 * Return: returns  the square root of n
 */

int sqr(int n, int x)
{
	/* exception */
	if (n <= 0)
		return (-1);
	/* exception */
	if (n < x * x)
		return (-1);

	/* base case */
	if (n == x * x)
		return (x);

	return (sqr(n, x + 1));
}
