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
	if (!head || !*head)
		return (-1);
	new = *head;
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (new)
	{
		if (nth == index - 1)
		{
			temp = temp->next;
			new->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		new = new->next;
		nth++;
	}
	free(temp);
	return (-1);
}
