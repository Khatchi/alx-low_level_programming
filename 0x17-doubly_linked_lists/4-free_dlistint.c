#include "lists.h"

/**
 * free_dlistint - a func. that frees up the dynamic memory of the
 *	nodes of a doubly linked list.
 * @head: a *ptr to a node of a doubly linked list.
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
