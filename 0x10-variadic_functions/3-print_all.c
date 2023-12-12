#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list ap;
	va_start(ap, format);

	int i = 0;
	while(format[i] != '\0')
	{
		if (format[i] == 'c') {
			print_char(va_arg(ap, int));
		}
		else if (format[i] == 'i') {
			print_integer(va_arg(ap, int));
		}
		else if (format[i] == 'f') {
			print_float(va_arg(ap, double));
		}
		else if (format[i] == 's') {
			print_string(va_arg(ap, char *));
		}
		printf("\n");
	}
}

void print_char(char c)
{
	printf("%c", c);
}

void print_str(char *c)
{
	printf("%s", c);
}

void print_integer(int d)
{
	printf("%d", d);
}

void print_float(double d)
{
	printf("%f", d);
}
