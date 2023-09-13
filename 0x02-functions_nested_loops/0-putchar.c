#include "main.h"

/**
 * main - print '_putchar' followed by a new line to stout
 *
 * Return: 0 on success
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
