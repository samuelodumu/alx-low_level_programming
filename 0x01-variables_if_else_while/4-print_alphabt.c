#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except q and e
 *
 * Return: it returns zero
 */

int main(void)
{
	int count = 0;
	char alfa[] = "abcdfghijklmnoprstuvwxyz";

	for (count = 0; count < 26; count++)
	{
		if (count == 25)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(alfa[count]);
		}
	}
	return (0);
}
