#include <stdio.h>

/**
 * main - check for multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1024, j, sum = 0;

	for (j = 0; j < i; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			sum = sum + j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
