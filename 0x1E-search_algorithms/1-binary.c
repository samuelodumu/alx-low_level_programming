#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints the array elements
 * @array: the array to print
 * @start: starting index
 * @end: last index
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - function
 * @array: pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: value to search for
 *
 * Return: index of `value` or -1 if not `value` is not found
 * or the array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);


	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		
		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
