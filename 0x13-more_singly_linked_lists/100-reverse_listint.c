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

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	new = *head;
	temp = new->next;
	*head = temp->next;

	new->next = NULL;

	while ((*head)->next != NULL)
	{
		temp->next = new;
		new = temp;
		temp = (*head);
		*head = (*head)->next;
	}
	(*head)->next = temp;
	temp->next = new;
	return (temp);
}
