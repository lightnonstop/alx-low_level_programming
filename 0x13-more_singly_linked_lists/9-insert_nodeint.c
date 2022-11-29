#include "lists.h"
/**
  * insert_nodeint_at_index - Inserts a new node in a given
  * position in a linked list
  *
  * @head: Pointer to starting node
  * @idx: Node position to be inserted starting from index zero (0)
  * @n: Third Operand
  *
  * Return: Address of the new node inserted, NULL if the node does not exist.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nth;
	listint_t *new, *temp;

	if (head == NULL && *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	nth = 0;

	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		(*head)->n = n;
		return (*head);
	}
	while (temp)
	{
		if (nth == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			new->n = n;
		}
		temp = temp->next;
		nth++;
	}
	if (idx > nth)
		return (NULL);
	return (new);
}
