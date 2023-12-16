#include "main.h"

/**
 * clear_bit - sets the bit at a given index of a given integer to 1
 * @n: pointer to the integer
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= (~(1 << index));
	return (0);
}
