#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

void print_alphabet(void)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		_putchar(ch);
		_putchar('\n');
		ch ++;
	}

	return (0);
}
