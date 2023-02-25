#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then uppercase.
 *
 * Return: returns zero
 */

int main(void)
{
	int count = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (count = 0; count < 26; count++)
	{
		putchar(alpha[count]);
	}
	for (count = 0; count < 27; count++)
	{
		if (ALPHA[count] == 0)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(ALPHA[count]);
		}
	}
	return (0);
}
