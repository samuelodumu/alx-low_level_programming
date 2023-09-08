#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;
	int ltr;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (ltr = 'a'; ltr <= 'f'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');

	return (0);
}
