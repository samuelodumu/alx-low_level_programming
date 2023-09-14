#include "main.h"

/**
 * print_last_digit - prints the last digit of a number, using only _putchar
 * @num: the number to be checked
 *
 * Return: The last digit of a number
 */

int print_last_digit(int num)
{
	int result;

	if (num < 0)
	{
		_putchar((-1 * result) + '0');
		return (result);
	}
	else
	{
		_putchar(result + '0');
		return (result);
	}
}
