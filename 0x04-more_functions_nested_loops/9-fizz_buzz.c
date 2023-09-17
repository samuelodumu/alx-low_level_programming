#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz test
 *
 * Description - prints the numbers from 1 to 100, followed by a new line
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	return (0);
}
