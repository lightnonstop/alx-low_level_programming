#include "lists.h"
/**
  * dlistint_len - Determines the number of elements in a double linked list
  * @h: Points to the beginning of the linked list
  * Return: Number of elements of the list or 0 if it fails
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
