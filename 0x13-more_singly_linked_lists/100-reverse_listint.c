#include "lists.h"

/**
  * reverse_listint - Reverses a linked list
  * @head: Pointer to starting node
  * Return: Pointer to the first node of the reversed list, NULL if
  * Pointer to starting node is NULL
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *new;

	if (!head || !(*head))
		return (NULL);
	if (!(*head)->next)
		return (*head);
	temp = *head;
	new = NULL;
	while (1)
	{	if (!new)
		{
			new = *head;
			temp = temp->next;
			new->next = NULL;
			*head = new;
		}
		else
		{
			new = temp;
			temp = temp->next;
			new->next = *head;
			if (!temp)
			{
				temp = new;
				break;
			}
			*head = new;
		}
	}
	*head = temp;
	return (*head);
}
