#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to the last node of the list
 * @str: string to be put in the last node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode = malloc(sizeof(list_t));

	if (lastnode != NULL)
	{
		lastnode->str = strdup(str);
		lastnode->len = strlen(str);
		lastnode->next = NULL;

		if (*head == NULL)
		{
			(*head) = lastnode;
		}
		else
		{
			list_t *current = *head;

			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = lastnode;
		}
		return (lastnode);
	}
	return (NULL);
}
