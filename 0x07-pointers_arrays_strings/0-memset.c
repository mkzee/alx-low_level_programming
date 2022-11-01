#include "main.h"


/**
 *_memset - fills n bytes of memory pointed to by s with
 * constant byte b
 * Return: s
 * @s: the memory address to fill
 * @b: constant character
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);

}
