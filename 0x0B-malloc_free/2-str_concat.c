#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the first character of s1 on success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *space;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = strlen(s1) + strlen(s2) + 1;
	space = malloc(sizeof(char) * i);

	if (space == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		space[j] = s1[j];
	}

	for (k = 0; s2[k] != '\0'; j++, k++)
	{
		space[j] = s2[k];
	}
	space[i] = '\0';
	return (space);
}
