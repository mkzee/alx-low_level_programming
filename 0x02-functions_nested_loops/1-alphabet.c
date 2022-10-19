#include "main.h"

/**
 * print_alphabet - prints letters of alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		_putchar('\n');
		ch++;
	}
}
