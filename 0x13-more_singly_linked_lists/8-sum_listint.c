#include "lists.h"
/**
  * sum_listint - Determines the sum of all the data (n) of a linked list
  * @head: Pointer to  the starting node
  * Return: Sum of all the data (n) of the linked list, NULL if list is empty.
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = head;
	sum = 0;
	while (new != NULL)
	{
		if (new->n)
		{
			sum += new->n;
		}
		new = new->next;
	}
	return (sum);
}
