#include "main.h"

/**
 * _puts_recursion - functions that prints a string
 *@s: input
 * Return: print a string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
