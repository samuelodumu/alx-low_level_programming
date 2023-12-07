#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(string);
	unsigned int i;
	char *current_arg;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		current_arg = va_arg(string, char *);

		if (current_arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_arg);
		}

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
