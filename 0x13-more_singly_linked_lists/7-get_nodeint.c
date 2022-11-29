#include "lists.h"
/**
  * get_nodeint_at_index - Determines the nth node of a linked list
  * @head: Pointer to starting node
  * @index: Node position starting from zero (0)
  * Return: The nth node of a linked list, NULL if the node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	nth = 0;
	while (head != NULL)
	{
		if (nth == index)
		{
			return (head);
		}
		head = head->next;
		nth++;
	}
	return (NULL);
}
