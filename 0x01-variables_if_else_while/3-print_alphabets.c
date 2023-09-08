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
	char alpha;
	char ltr;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ltr = 'A'; ltr <= 'Z'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');

	return (0);
}
