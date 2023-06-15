#include "lists.h"

/**
 * get_dnodeint_at_index - a func. that gets the node of a doubly linked
 *	list at the index argument.
 * @head: a *ptr to the head of a doubly linked list.
 * @index: index of the node to get.
 * Return: node at position index if it exists, else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (node != NULL && i <= index)
	{
		if (i++ == index)
			return (node);
		node = node->next;
	}

	return (NULL);
}
