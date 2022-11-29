#include "lists.h"
/**
  * pop_listint - Deletes the head node of a linked list
  * @head: Pointer to starting node
  * Return: Head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *new;

	if (head)
	{
		if (*head)
		{
			new = (*head);
			(*head) = new->next;
		}
	}
	return (new->n);
}
