#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Return: void
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count < 10)
	{
		for (ch = 'a'; ch < 'z'; ch++)
		{
			_putchar(ch);
		}
		count++;
		_putchar('\n');
	}
}
