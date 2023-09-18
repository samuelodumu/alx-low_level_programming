#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Description: You can only use _putchar function to print
 * If size is 0 or less, the function should only print a \n
 */

void print_triangle(int size)
{
	int i, j, k, tmp;

	tmp = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < tmp)
			{
				_putchar(' ');
				j++;
			}
			if (size > 0)
			{
				for (k = 0; k <= i; k++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			tmp--;
		}
	}
}
