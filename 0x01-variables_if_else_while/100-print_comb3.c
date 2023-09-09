#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two digits numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * The two digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * You can only use `putchar` up to five times.
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
		
			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
