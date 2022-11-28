#Include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elemnts of a listint_t list
 * @h: A pointer to the head of all the list_t list
 *
 * Return: the number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
