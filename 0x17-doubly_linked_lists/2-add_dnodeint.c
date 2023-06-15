#include "lists.h"

/**
 * add_dnodeint - a func. that adds a node at the begn of doubly linked list
 * @head:  pointer to a doubly linked list.
 * @n:  int item stored by the new node to add.
 * Return: the new node added to the doubly linked list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *node = *head;

	if (head == NULL)
		return (new_node);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Cant malloc\n");
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head)
	{
		node->prev = new_node;
		new_node->next = node;
	}
	*head = new_node;
	return (*head);
}
