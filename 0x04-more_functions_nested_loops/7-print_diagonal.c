#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Description: You can only use _putchar function to print
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
