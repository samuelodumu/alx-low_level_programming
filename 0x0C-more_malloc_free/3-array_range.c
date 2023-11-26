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
	unsigned int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(m
