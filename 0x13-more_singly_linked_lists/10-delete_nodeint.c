#include "lists.h"
/**
  * delete_nodeint_at_index - Deletes the node at index of a list
  *
  * @head: Pointer to starting node
  * @index: Node position to be deleted starting from index zero (0)
  *
  * Return: 1 if it is successful, -1 if it fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nth;
	listint_t *new, *temp;

	nth = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	else
	{
		while (nth < (index - 1))
		{
			new = new->next;
			if (new == NULL)
				return (-1);
			nth++;
		}
		temp = new;
		temp = temp->next;
		new->next = temp->next;
		free(temp);
	}
	return (1);
}
