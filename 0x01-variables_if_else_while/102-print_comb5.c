#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of three digits.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * The three digits must be different.
 * 012, 120, 102, 021 and 210 are considered the same
 * combination of the three digits 0, 1 and 2
 * You can only use `putchar` up to six times.
 * All code should be in the main funcion.
 *
 * Return: 0 on success
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (!(num1 == 0 && num2 == 1) && !(num1 == 1 && num2 == 0))
			{
				if (num1 < 10)
				{
					putchar('0');
				}
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);

				putchar(' ');
				if (num2 < 10)
				{
					putchar('0');
				}
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);

		if (num1 != 99 || num2 != 99)
		{
			putchar(',');
			putchar(' ');
		}
			}
		}
	}
	return (0);
}
