#include "lists.h"
/**
 * free_listint - Frees a list completely
 * @head: Pointer to a starting node
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
