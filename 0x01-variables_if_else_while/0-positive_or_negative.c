#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - checks weather a number is positive or negative
 *
 * Return: It returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n != 0)
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
	}
	else
	{
		printf("%d is zero\n", n);
	}
	printf("\n");
	return (0);
}
