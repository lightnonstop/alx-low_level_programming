#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node - Adds a new node at the beginning of a list_t list
  * @head: Pointer to the node
  * @str: String to be copied
  * Return: Address of the new element (string) from the node,
  * NULL if it fails
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		(*head)->str = s;
		(*head)->len = strlen(s);
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head) = new;
		(*head)->str = s;
		(*head)->len = strlen(s);
	}
	if (*head == NULL)
		return (NULL);
	return (*head);
}
