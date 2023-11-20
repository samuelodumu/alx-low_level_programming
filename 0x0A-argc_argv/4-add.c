#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, x, result = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			x = strtol(argv[i], NULL, 10);
			result += x;
		}
		printf("%d\n", result);
		return (0);
	}
}
