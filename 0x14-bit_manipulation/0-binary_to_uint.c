#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')

			return (0);
	}

	for (j = 0; j < i; j++)
	{
		int bit = b[j] - '0';

		result += bit * pow(2, i - j - 1);
	}
	return (result);
}
