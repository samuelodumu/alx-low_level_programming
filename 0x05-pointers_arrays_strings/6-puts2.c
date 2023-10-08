#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to be printed
 */

void puts2(char *str)
{
	if (*str > 0)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str += 2;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
