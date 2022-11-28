#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_this - Executes before main
  */
void print_this(void) __attribute__((constructor));
void print_this(void)
{
	char *s = "You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n";

	list_t *head = NULL;
	list_t *new;

	new = malloc(sizeof(list_t));

	head = new;
	head->str = strdup(s);
	head->len = strlen(s);

	printf("%s", head->str);
}
