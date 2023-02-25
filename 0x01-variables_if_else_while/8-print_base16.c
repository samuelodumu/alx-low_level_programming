#include <stdio.h>

/**
 * main - prints all single digit numbers starting from zero
 *
 * Return: returns zero
 */
int main(void)
{
	int num;
	char hex[] = "0123456789abcdef";

	for (num = 0; num < 16; num++)
	{
		putchar(hex[num]);
	}
	putchar('\n');
	return (0);
}
