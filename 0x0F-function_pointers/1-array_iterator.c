#include "function_pointers.h"

/**
 * array_iterator - perform a paticular action on each
 * value of an array
 * @array: is array passed to the function
 * @size: is size of array
 * @action: is callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
