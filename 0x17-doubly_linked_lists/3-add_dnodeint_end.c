#include "lists.h"
/**
  * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
  * @head: Points to the beginning of a list
  * @n: First Operand
  * Return: Address of new element added or NULL if it fails
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (*head);
}
