#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tells if the last digit of a number is positive, negative or zero
 *
 * Return: it returns 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n % 10 != 0)
	{
		if (m > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		}
		else if (m < 6 && n != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
