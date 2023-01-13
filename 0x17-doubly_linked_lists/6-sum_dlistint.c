#include "lists.h"
/**
  * sum_dlistint - sums of all the data (n) of a linked list
  * @head: Points to the beginning of the linked list
  * Return: The sum of all data (n) or 0 if list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
