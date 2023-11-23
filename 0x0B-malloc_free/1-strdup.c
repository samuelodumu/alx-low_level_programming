#include <stdlib.h>
#include "main.h"

/**
 * strdup - returns pointer to a new string which is a copy
 * of the string given as a parameter
 *
 * @str: original string
 *
 * Return: pointer to the array
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sizeof(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

