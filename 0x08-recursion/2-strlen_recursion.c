#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 *
 * @s: string to be printed
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s < 1)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
