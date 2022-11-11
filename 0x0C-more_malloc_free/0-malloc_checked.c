#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - Allocates memory
  * @b: Size of memory to be allocated in bytes
  * Return: Void pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
