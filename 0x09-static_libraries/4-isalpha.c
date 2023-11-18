#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter, lower or upper case
 * Returns 0 otherwise
 * @c: alphabet to check
 * Return: 0 or 1
 *
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
