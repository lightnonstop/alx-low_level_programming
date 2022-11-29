#include "lists.h"
/**
  * pop_listint - Deletes the head node of a linked list
  * @head: Pointer to starting node
  * Return: Head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int num;
	if (head)
	{
		if (*head)
		{
			num = (*head)->n;
			new = (*head)->next;
			free(*head);
			*head = new;
		}
	}
		return (num);
}
