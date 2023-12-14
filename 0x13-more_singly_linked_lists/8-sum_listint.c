#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first list node
 * Return: the sum of all the data (n) of the list or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i = 0;
	listint_t *current = head;

	if (!head)
	{
		return (0);
	}

	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
