#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of
 * a listint_t linked list
 * @head: a pointerto the the head of the listint list
 * @index: the index of the nodes to locate - indices start at 0
 *
 * Return: if the nodes does not exist  - NULL
 * otherwise - the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head  == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
