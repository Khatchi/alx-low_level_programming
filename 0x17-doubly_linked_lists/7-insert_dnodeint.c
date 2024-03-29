#include "lists.h"

/**
 * insert_dnodeint_at_index - a func. that inserts a new node at a specified
 *	index in a doubly linked list.
 * @h: a *ptr to a doubly linked list of type dlistint_t.
 * @idx: specified index where the new node will be inserted
 *	in the doubly linked list.
 * @n: int value to be stored in the doubly linked list.
 * Return: a *ptr to the new node of type dlistint_t.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new_node = NULL;
	unsigned int index = 0;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		while (node != NULL)
		{
			if (idx - 1 == index)
			{
				/* adds the new node to the end of the linked list */
				if (node->next == NULL)
					return (add_dnodeint_end(h, n));
				/* creates a new node */
				new_node = malloc(sizeof(dlistint_t));
				if (new_node == NULL)
					return (NULL);
				new_node->n = n;
				/* attaches the new node to the linked list */
				new_node->prev = node;
				new_node->next = node->next;
				node->next->prev = new_node;
				node->next = new_node;
				/* returns the newly created node */
				return (new_node);
			}
			/* move to the next node */
			index++;
			node = node->next;
		}
	}
	return (new_node);
}
