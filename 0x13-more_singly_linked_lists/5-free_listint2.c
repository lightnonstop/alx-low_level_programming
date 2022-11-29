#include "lists.h"
/**
  * free_listint2 - Frees a list completely
  * @head: Pointer to a starting node
  */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (*head == NULL)
		return;
	while (*head)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
	*head = NULL;
}
