#include "main.h"

/**
 * print_sign - prints a sign base on different conditions
 *
 * @n: n represent an integer passed into the print_sign function
 *
 * Return: returns 1, 0 or -1
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
