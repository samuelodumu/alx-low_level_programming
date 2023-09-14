#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase,
 * Returns 0 otherwise, using only _putchar
 * @c: alphabet to check
 * Return: 0 or 1
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
