#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the first node
 * @index: node index to return
 *
 * Return: the nth node of the list or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	return (current);
}
