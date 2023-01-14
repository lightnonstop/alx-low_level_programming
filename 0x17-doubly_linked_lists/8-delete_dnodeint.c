#include "lists.h"
/**
  * delete_dnodeint_at_index - Deletes the node at index index of a linked list
  * @head: Points to the beginning of a linked list
  * @index: Position of node to delete
  * Return: 1 if successful or -1 if it fails
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t nth;
	dlistint_t *temp;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{

		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	for (nth = 1; nth <= index && temp; nth++)
	{
		temp = temp->next;
	}
	if (temp)
	{
		if (temp->next)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
		}
		else
		{
			temp->prev->next = NULL;
		}
		free(temp);
		return (1);
	}
	return (-1);
}
