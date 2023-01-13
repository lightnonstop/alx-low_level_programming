#include "lists.h"
/**
  * free_dlistint - Frees a list
  * @head: Points to the beginning of a list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
