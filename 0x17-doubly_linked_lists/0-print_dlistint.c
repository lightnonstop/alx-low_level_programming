#include "lists.h"
/**
  * print_dlistint - prints all the elements of a double linked list
  * @h: Points to the beginning of the linked list
  * Return: Number of nodes or 0 if it fails
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
