#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * Return: 0 if false and 1 if true
 * @c: is a parameter passed to the function
 */


int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
