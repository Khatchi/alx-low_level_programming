#include "lists.h"
/**
* get_nodeint_at_index - returns node at a certain index in a l-list
* @head: first node in the l-list
* @index: index of the node to return
* Description: a function that returns the nth node of a listint_t
* Return: pointer to the node or NULL if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *current = head;

	while (current && a < index)
	{
		current = current->next;
		a++;
	}
	return (current ? current : NULL);
}
