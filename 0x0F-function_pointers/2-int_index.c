#include "function_pointers.h"

/**
 * int_index - searches an array
 * @size: size of the array
 * @array: array passed to the function
 * @cmp: callback function
 * Return: Returns an integer depending on outcome
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == 0 || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
