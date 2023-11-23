#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns pointer to a new string which is a copy
 * of the string given as a parameter
 *
 * @str: original string
 *
 * Return: pointer to the array
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	j = strlen(str);

	ptr = malloc(sizeof(char) * j);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

