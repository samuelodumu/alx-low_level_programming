#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of operations
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);
	}

	if (((int)strcmp(argv[2], "/") == 0 || (int)strcmp(argv[2], "%") == 0)
			&& j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[argc - 2])(i, j));
	return (0);
}
