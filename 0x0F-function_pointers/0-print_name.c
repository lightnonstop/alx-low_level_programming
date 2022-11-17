#include <stdlib.h>
#include "function_pointers.h"
/**
  * print_name - Prints a given name
  * @name: Given name
  * @f: Pointer to function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
