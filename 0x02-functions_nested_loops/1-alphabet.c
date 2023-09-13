#include "main.h"

/**
 * main - prints the alphabet in lowercase, by a new line to stout
 *
 * Return: 0 on success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
