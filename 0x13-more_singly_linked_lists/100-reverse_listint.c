#include "lists.h"
/**
  * reverse_listint - Reverses a linked list
  * @head: Pointer to starting node
  * Return: Pointer to the first node of the reversed list, NULL if
  * Pointer to starting node is NULL
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *temp;

	if (!*head && !head)
		return (NULL);
	temp = *head;
	new = *head;
	temp = temp->next;
	(*head)->next = NULL;
	while (temp)
	{
		new = temp;
		temp = temp->next;
		new->next = (*head);
		*head = new;
	}
	return (temp);
}
