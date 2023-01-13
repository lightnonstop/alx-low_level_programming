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
	size_t nth;
	dlistint_t *new, *temp;

	if (!*h)
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
	}
	else
	{
		for (nth = 1; nth < idx; nth++)
		{
			if (!temp)
				return (NULL);
			temp = temp->next;
		}
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (*h);
}
