#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to the first node of listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
