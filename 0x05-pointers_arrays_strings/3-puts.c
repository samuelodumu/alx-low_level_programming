#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	if (*str > 0)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
