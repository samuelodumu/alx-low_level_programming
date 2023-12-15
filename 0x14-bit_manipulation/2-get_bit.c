#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit of
 * @index: index of bit
 * Return: the value of the bit at index 'index' or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (0);

	n >>= index;
	n &= 1;
	return (n);
}
