#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	if (h != NULL)
	{
		while (current != NULL || current != 0)
		{
			printf("%d\n", current->n);
			current = current->next;
			i++;
		}
		return (i);
	}
	return (0);
}
