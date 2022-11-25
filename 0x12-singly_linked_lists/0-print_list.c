#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_list -  Prints all the elements of a list
  * @h: Pointer to node
  * Return: Number of nodes if successful
  */
size_t print_list(const list_t *h)
{
	unsigned int count_node = 0, l;
	list_t *new;
	char *s;
	if (h)
	{
		count_node++;
		if (h->str)
		{
			s = h->str;
			l = h->len;
		}
		else
		{
			s = "(nil)";
			l = 0; 
		}
		printf("[%d] %s\n", l, s);
		new = h->next;
		while (new != NULL)
		{
			s = new->str;
			l = new->len;
			printf("[%d] %s\n", l, s);
			new = new->next;
			count_node++;	
		}
	}
	return (count_node);
}
