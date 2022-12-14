#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * create_array - Creates an array of chars, and
  * initializes it with a specific char.
  * @size: Number of memory to be allocated
  * @c: Character to be initialized
  * Return: Pointer to array, NULL if memory size or malloc is NULL
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size <= 0)
		return (NULL);
	A = (char *)malloc(size * sizeof(char));

	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
