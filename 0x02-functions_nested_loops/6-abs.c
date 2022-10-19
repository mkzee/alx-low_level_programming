#include "main.h"

/**
 * _abs - return the absolute value of an integer
 *
 * @n: is the parameter passed into the funcion
 *
 * Return: The absolute value of integers passed into the function
 */

int _abs(int n)
{
	int absolute_value;

	if (n < 0)
	{
		absolute_value = n * -1;
		return (absolute_value);
	}

	return (n);
}
