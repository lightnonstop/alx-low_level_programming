#include "lists.h"
/**
  * print_listint - Prints all the elements of a listint_t list
  * @h: Pointer a starting node
  * Return: Number of nodes
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count_node;
	listint_t *new;

	count_node = 0;
	if (h)
	{
		count_node++;
		printf("%d\n", h->n);
		new = h->next;
		while (new != NULL)
		{
			if (new)
			{
				count_node++;
				printf("%d\n", new->n);
			}
			new = new->next;
		}
	}
	return (count_node);
}
