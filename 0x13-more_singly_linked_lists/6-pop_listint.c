#include "lists.h"
/**
* pop_listint - a prototype that deletes head node of a l-list
* @head: a pointer to the first element in th l-list
* Description: a function that deletes the head node of a listint_t linked list
* Return: the head node’s data (n), or 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
	{
		return (0);
	}
	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);

	*head = temp;
	
	return (numb);
}
