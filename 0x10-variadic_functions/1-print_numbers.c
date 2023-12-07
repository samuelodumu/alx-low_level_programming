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
	if (n == 0)
	{
		exit(1);
	}

	for (i = 1; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
