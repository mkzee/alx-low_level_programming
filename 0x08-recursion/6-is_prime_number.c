#include "main.h"

/**
 * is_prime_number - checks if a n is a prime number
 * @n: is number to check
 * Return: 1 if n is prime and 0 if not
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}


/**
 * prime - checks if n is a prime number
 * @n: is number to check
 * @x: values to test
 * Return: recursively until base cases are met
 */

int prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (!(n % x) && n == x)
		return (1);

	if (!(n % x))
		return (0);

	return (prime(n, x + 1));
}
