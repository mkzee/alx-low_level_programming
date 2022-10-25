#include "main.h"

/**
 * more_numbers - print numbers 0 through 14 then new line 10 times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}

			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
