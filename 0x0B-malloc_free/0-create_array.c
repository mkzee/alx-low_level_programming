#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: items in the array
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	int a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}

	return (a);
}
