#include "main.h"

/**
 * _strcat - concatenates strings passed in the function
 * by apppending src to dest
 * Return: returns dest
 * @dest: is a string and value to be updated
 * @src: is a string and the value to be appended
 */



char *_strcat(char *dest, char *src)
{
	int i;
	int j = 6;

	for (i = 0; src[i]; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (*dest);
}
