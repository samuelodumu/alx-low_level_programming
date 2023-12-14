#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head: pointer to the pointer to the first node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *prev;

	if (head == NULL || temp == NULL)
	{
		return (-1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev->next = temp->next;

	free(temp);
	free(prev);

	return (1);
}
