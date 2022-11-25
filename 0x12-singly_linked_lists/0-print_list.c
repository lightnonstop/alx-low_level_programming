#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	unsigned int count = 0, l;
	list_t *new;
	char *s;
	if (h)
	{
		count++;
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
			count++;	
		}
	}
	return (count);
}
/*
#include <string>
int main(void)
{
    list_t *head;
    list_t *new; 
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
*/
