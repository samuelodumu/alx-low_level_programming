#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t hello = {8, 0};
    size_t n;

    head = &hello;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    return (0);
}
