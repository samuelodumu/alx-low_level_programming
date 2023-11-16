#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int prime_number(int rem, int n);

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (prime_number(2, n) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * prime_number - helper function, determines if n is prime
 *
 * @i: a divider number
 * @n: number given
 *
 * Return: 1 if n is prime, 0 if not
 */

int prime_number(int i, int n)
{
	int rem = n % i;

	if (i < n / 2)
	{
		if (rem != 0)
		{
			i++;
			return (prime_number(i, n));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (rem);
	}
}
