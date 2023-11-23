#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters and
 * initializes it with a specific char
 *
 * @size: the size of the array
 * @c: used to initialize the elements of the array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

