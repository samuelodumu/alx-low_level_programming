#include "main.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: number whose factorial is to be returned
 *
 * Return: factorial of the number
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
