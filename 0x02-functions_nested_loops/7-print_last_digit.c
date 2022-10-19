#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * Return: returns the last digit of an integer
 *
 * @n: is the parameter passed into the function
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * (-1);
		_putchar(n + '0');
		return (n);
	}

	_putchar(n + '0');
	_putchar('\n');

	return (n);
}
