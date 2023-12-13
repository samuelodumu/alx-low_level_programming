#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head node
 * Return: the head node’s data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int i = (*head)->n;

	if (!(*head))
		return (0);
	else
	{
		*head = (*head)->next;
		return (i);
	}
}
