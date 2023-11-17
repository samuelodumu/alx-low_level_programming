#include "main.h"

/**
 * _sqrt_recursion - prints the the natural square root of n
 *
 * @n: integer to print the square root of
 *
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	int find_square_root(int n, int guess);

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return ((find_square_root(n, 1)));
	}

}

/**
 * find_square_root - finds the natural square root of n
 *
 * @n: the integer to find the square root of
 * @guess: starting guess
 *
 * Return: the root of n if n has a natural sqare root,
 * otherwise -1
 */

int find_square_root(int n, int guess)
{
	int _pow_recursion(int x, int y);
	int newguess = _pow_recursion(guess, 2);

	if (newguess == n)
	{
		return (guess);
	}
	else
	{
		if (guess <= n / 2)
		{
			guess++;
			return (find_square_root(n, guess));
		}
		else
		{
			return (-1);
		}
	}
}

/**
 * _pow_recursion - prints the the value of x raised to the power of y
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
