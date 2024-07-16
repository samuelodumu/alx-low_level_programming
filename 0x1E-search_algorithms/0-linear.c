#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function
 * @array: pointer to the first element of the array
 * @size: number of elements in `array`
 * @value: the value to search for
 *
 * Return: the first index where `value` is located,
 * or 0 if `value is not found`
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
