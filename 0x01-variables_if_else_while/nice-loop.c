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
	int num, i;
	char arr[2] = ", ";

	for (num = 48; num < 57; num++)
	{
		putchar(num);
		for (i = 0; i <=2; i++)
			putchar(arr[i]);
	}
	putchar(num);
	putchar('\n');
	return (0);
}
