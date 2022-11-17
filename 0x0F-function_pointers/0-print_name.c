#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: is name passed to function
 * @f: callback function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
