#include "main.h"

/**
 * _puts_recursion - print characters of a string
 * @s: is string characters
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
}