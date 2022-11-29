#include "lists.h"
/**
  * get_nodeint_at_index - Determines the nth node of a linked list
  * @head: Pointer to starting node
  * @index: Node position starting from zero (0)
  * Return: The nth node of a linked list, NULL if the node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int times;
	listint_t *new, *temp;

	times = 1;
	if (head == NULL)
		return (NULL);
	else
	{
		new = head;
		while (times < index + 2)
		{
			temp = new;
			new = new->next;
			times++;
		}
	}
	return (temp);
}
