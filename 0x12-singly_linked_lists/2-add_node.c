#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: the new node
 * @str: the element of the new node
 *
 * Return: pointer to new node on success, NULL on file
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp != NULL)
	{
		temp->str = strdup(str);
		temp->next = temp;
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (NULL);
}
