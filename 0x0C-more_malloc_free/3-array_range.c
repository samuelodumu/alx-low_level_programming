#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * Description: If min > max, return NULL
 * If malloc fails, return NULL
 *
 * @min: first integer
 * @max: secont integer
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i, n;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
