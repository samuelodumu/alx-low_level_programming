#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip to get from
 * one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bit, num, count = 0;

	num = n ^ m;

	if (n == 0 && n == 0)
		return (0);
	if (n == ULONG_MAX && m == 0)
		return (sizeof(num) * 8);

	for (i = 0; i < (sizeof(num) * 8); i++)
	{
		bit = num & 1;
		if (bit == 1)
			count++;
		num >>= 1;
	}
	return (count);
}
