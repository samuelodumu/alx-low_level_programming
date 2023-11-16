#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line, to stdout
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s < 1)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
