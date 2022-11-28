#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list completely
 * @head: Pointer to node
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
