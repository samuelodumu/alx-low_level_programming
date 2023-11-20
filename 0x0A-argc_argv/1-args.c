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

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
