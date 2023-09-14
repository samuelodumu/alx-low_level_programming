#include "main.h"

/**
 * print_sign - Returns 1 and prints '+' if n is greater than 0,
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints '-' if n is less than zero
 * @n: number to check
 *
 * Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
