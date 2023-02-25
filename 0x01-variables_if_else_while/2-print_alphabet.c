#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: returns zero
 */

int main(void)
{
	int count = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (count = 0; count < 28; count++)
	{
		if (alpha[count] == 0)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(alpha[count]);
		}
	}
	return (0);
}
