#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a newline
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
