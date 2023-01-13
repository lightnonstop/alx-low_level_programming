#include "lists.h"
/**
  * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
  * @head: Points to the beginning of a list
  * @n: First Operand
  * Return: Address of new element added or NULL if it fails
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
