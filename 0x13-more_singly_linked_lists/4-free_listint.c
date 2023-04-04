#include "lists.h"
/**
* free_listint - frees a linked-list
* @head: the listint_t to be fred
* Description: a function that frees a listint_t list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
