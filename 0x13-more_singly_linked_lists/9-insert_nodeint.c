#include "lists.h"
/**
  * insert_nodeint_at_index - Inserts a new node in a given
  * position in a linked list
  *
  * @head: Pointer to starting node
  * @idx: Node position to be inserted starting from index zero (0)
  * @n: Third Operand
  *
  * Return: Address of the new node inserted, NULL if the node does not exist.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nth;
	listint_t *new, *temp;

	nth = 0;
	if (*head && idx > 0)
	{
		temp = *head;
		while (temp)
		{
			if (nth == idx - 1 || nth == idx)
			{
				new = malloc(sizeof(listint_t));
				new->next = temp->next;
				temp->next = new;
				new->n = n;
				return (new);
			}
			temp = temp->next;
			nth++;
		}
	}
	return (NULL);
}