#include "main.h"

/**
 * _pow_recursion - raise x to the power of y
 * Return: integer x raised to the power of y
 * @x: is an integer
 * @y: is the power to which we raise y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
