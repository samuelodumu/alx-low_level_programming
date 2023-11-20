#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - makes sure the number of arguments passed to it is 1,
 * then calls the checks() function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int checks(char *a);
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					return (1);
				}
			}
			checks(argv[i]);
		}
	}
	return (0);
}

/**
 * checks - prints the minimum number of coins to make change
 * for an amount of money
 *
 * Description: Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative,
 * print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @a: the initial amount as a char
 *
 * Return: cents
 */

int checks(char *a)
{
	int amount, cents;

	amount = atoi(a);
	while (amount >= 25)
	{
		cents = amount / 25;
		amount -= (cents * 25);
		if (amount == 0)
		{
			printf("%d\n", cents);
			return (cents);
		}
	}
	while (amount >= 10 && amount < 25)
	{
		int tmp = amount / 10;

		cents += amount / 10;
		amount -= (tmp * 10);
		if (amount == 0)
		{
			printf("%d\n", cents);
			return (cents);
		}
	}
	while (amount >= 5 && amount < 10)
	{
		int tmp = amount / 5;

		cents += amount / 5;
		amount -= (tmp * 5);
		if (amount == 0)
		{
			printf("%d\n", cents);
			return (cents);
		}
	}
	while (amount >= 2 && amount < 5)
	{
		int tmp = amount / 2;

		cents += amount / 2;
		amount -= (tmp * 2);
		if (amount == 0)
		{
			printf("%d\n", cents);
			return (cents);
		}
	}
	if (amount == 1)
	{
		cents += 1;
		printf("%d\n", cents);
		return (cents);
	}
	return (0);
}
