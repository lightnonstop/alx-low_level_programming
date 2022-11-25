#include <stdlib.h>
#include "lists.h"
/**
  * list_len - Checks the number of elements in a linked list
  * @h: Pointer to node
  * Return: Number of elements in the list
  */
size_t list_len(const list_t *h)
{
	unsigned int count_element = 0;
	list_t *new;

	if (h->str)
	{
		count_element++;
	}
	new = h->next;
	while (new != NULL)
	{
		if (new->str)
		{
			count_element++;
			new = new->next;
		}
	}
	return (count_element);
}
