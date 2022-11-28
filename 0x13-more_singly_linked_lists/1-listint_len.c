#include "lists.h"
/**
  * listint_len - Determines the number of elements in a linked list
  * @h: Pointer to starting node
  * Return: Number of elements in the list
  */
size_t listint_len(const listint_t *h)
{
	unsigned int count_elem;
	listint_t *new;

	count_elem = 0;
	if (h)
	{
		if (h->n)
		{
			count_elem++;
		}
		new = h->next;
		while (new != NULL)
		{
			if (new->n)
			{
				count_elem++;
				new = new->next;
			}
		}
	}
	return (count_elem);
}

