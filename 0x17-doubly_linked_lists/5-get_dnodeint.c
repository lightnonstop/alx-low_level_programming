#include "lists.h"
/**
  * get_dnodeint_at_index - gets the nth node of a linked list
  * @head: Points to the beginning of the linked list
  * @index: Position of the node in the list to get
  * Return: Node at index or NULL if it fails
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t nth;
	dlistint_t *temp;

	temp = head;
	for (nth = 0; nth < index; nth++)
	{
		if (!temp)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
