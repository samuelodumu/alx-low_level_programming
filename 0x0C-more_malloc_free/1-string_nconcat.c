#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates the first n bytes of s2 to s1,
 * and null terminates the new string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to newly allocated memory for concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n > strlen(s2))
	{
		n = strlen(s2);
	}

	i = strlen(s1) + n + 1;
	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; k < n; k++, j++)
	{
		ptr[j] = s2[k];
	}
	ptr[j] = '\0';
	return (ptr);
}
