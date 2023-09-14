#include "main.h"

/**
 * _abs - Returns the absolute value of an integer
 * @n: the number to check
 *
 * Return: the absolute value of the number passed
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	_putchar('\n');
}
