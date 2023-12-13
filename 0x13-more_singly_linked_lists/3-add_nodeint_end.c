#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to the first node
 * @n: node integer value
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;

		if ((*head) == NULL)
		{
			(*head) = newnode;
		}
		else
		{
			listint_t *current = *head;

			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newnode;
		}
		return (newnode);
	}
	return (NULL);
}
