#include "main.h"

/**
 * factorial - prints the factorial of a number
 *
 * @n: number whose factorial will will be printed
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
