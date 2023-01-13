#include "lists.h"
/**
  * insert_dnodeint_at_index - Inserts a new node at a given position
  * @h: Points to the beginning of the list
  * @idx: Index or position to insert node
  * @n: Data
  * Return: Address of new node or NULL if it fails
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t nth = 0;
	dlistint_t *new, *temp;

	if (!*h && !h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	temp = *h;
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (*h);
	}
	while (temp)
	{
		if (nth == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
		}
		temp = temp->next;
		nth++;
	}
	if (idx > nth)
		return (NULL);
	return (new);
}
