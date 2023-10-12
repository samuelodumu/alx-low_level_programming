#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string whose length is to be returned
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (len);
}
