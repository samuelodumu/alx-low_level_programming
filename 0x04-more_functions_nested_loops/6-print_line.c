#include "main.h"

/**
 * print_line -  draws a straight line in the terminal,
 * followed by a new line.
 * @n: number of times the charachter _ should be printed
 * Description: You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
