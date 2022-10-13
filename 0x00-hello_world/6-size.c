#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli
	float f;

	printf("Size of a char: %d bytes(s)", sizeof(c));
	printf("Size of a int: %d bytes(s)", sizeof(i));
	printf("Size of a long int: %d bytes(s)", sizeof(li));
	printf("Size of a long long int: %d bytes(s)", sizeof(lli));
	printf("Size of a float: %d bytes(s)", sizeof(f));

	return (0);
}
