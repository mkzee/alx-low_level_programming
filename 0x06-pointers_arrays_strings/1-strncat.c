#include "main.h"

/**
 * _strncat - concatenates two strings with at most n bytes
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;


	for (i = 0; dest[i] != '\0';)
		i++;


	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
