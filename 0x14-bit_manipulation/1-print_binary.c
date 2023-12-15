#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int lsb;

	if (n > 1)
	{
		print_binary(n >> 1);
		lsb = n & 1;
		_putchar(lsb + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
