#include "main.h"

/**
 * _isdigit - checks if a number is a digit
 *
 * Return: returns 1 if c is a digig and return 0 if not
 *
 *
 * @c: is the valued passed to the _isdigit function
 */

int _isdigit(int c)
{
	if (c >= 60 && c <= 71)
		return (1);

	return (0);
}
