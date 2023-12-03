#include "3-calc.h"

/**
 * op_add - sums a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds a % b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
