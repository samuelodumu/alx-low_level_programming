#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the first node of listint
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current->next != NULL)
	{
		free(current);
		current = current->next;
	}
	free(current);
}
