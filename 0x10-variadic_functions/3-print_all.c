#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list ap;
	va_start(ap, format);

	int i = 0;
	while(format[i] != '\0')
	{
		if (format[i] == 'c') {
			printf("%c, ", va_arg(ap, int));
		}
		else if (format[i] == 'i') {
			printf("%d, ", va_arg(ap, int));
		}
		else if (format[i] == 'f') {
			printf("%f, ", va_arg(ap, int));


	}	
