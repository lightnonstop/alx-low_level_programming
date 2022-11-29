#include "lists.h"
/**
  * add_nodeint - Adds a new node at the beginning of a list
  * @head: Pointer that will start of a node
  * @n: Second Operand
  * Return: Address of the new element, or NULL if it fails.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		(*head)->n = n;
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
		(*head)->n = n;
	}
	return (*head);
}
