#include "lists.h"
/**
* free_listint2 - a prototype that frees a linked-list
* @head: a pointer to the listint_t to be fred
* Description: a function that frees a listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
