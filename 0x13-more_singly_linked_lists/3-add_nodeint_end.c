#include "lists.h"
/**
  * add_nodeint_end - Adds a new node at the end of a list
  * @head: Pointer to starting node
  * @n: Second Operand
  * Return: Pointer to new element of node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		temp = new;
		(*head)->n = n;
		(*head)->next = NULL;
	}

	temp->next = new;
	temp = new;
	new->n = n;
	return (new);
}
