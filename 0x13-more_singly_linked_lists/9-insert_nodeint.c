#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node
 * @idx: the index of the list where the new node should be added
 * @n: new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL || newnode == NULL)
		return (NULL);

	if (current == NULL && idx > 0)
		return (NULL);

	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (!current)
		return (NULL);

	if (idx > i + 1)
		return (NULL);

	if (newnode)
	{
		newnode->n = n;
		newnode->next = current->next;
		current->next = newnode;
		return (newnode);
	}
	return (NULL);
}
