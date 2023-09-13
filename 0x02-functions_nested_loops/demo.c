#include <stdio.h>

/**
 * main - entry point
 *
 * Returns: 0 on success
 */

int main(void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;
	printf("a - b = %i\n", result);

	result = a + b * c;
	printf("a + b * c = %i\n", result);

	printf("++b + c = %i\n", ++b + c);

	return (0);

}
