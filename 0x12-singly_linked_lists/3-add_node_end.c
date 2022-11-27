#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node_end - Adds a new node at the end of a list_t list
  * @head: Pointer to the node
  * @str: String to be copied
  * Return: Address of the new element (string) from the node,
  * NULL if it fails
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new, *temp;
	char *s = strdup(str);
	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		temp = *head;
		temp->str = s;
		temp->len = strlen(s);
		temp->next = NULL;
	}
	temp->next = new;
	temp = new;
	temp->str = s;
	temp->len = strlen(s);
	return (*head);
}
