#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of elements in argv
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, result = 1;	

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);
			result *= x;
		}

		printf("%d\n", result);

		return (0);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
