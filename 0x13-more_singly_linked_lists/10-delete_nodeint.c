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

	if (!head || !*head)
		return (-1);
	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	for (nth = 0; nth < (index - 1); nth++)
	{
		new = new->next;
		if (new == NULL)
			return (-1);
	}
	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
