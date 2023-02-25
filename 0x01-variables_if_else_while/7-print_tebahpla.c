#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: returns zero
 */

int main(void)
{
	int count;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (count = 25; count > -1 ; count--)
	{
		{
			putchar(alpha[count]);
		}
	}
	putchar ('\n');
	return (0);
}
