#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, using only _putchar
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
