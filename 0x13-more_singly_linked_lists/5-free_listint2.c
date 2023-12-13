#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to the first node of listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (current != NULL || head == NULL)
	{
		while (current->next != NULL)
		{
			free(current);
			current = current->next;
		}
		free(current);
		(*head) = NULL;
	}
}
