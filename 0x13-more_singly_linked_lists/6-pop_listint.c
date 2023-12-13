#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head node
 * Return: the head node’s data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int i;

	if (!(*head))
	{
		return (0);
	}
	else
	{
		i = temp->n;
		*head = temp->next;
		free(temp);
		return (i);
	}
}
