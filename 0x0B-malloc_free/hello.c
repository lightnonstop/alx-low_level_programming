#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * alloc_grid - Creates a 2 dimensional array of integers.
  * @width:  Number of columns of array
  * @height: Number of rows of array
  * Description: Allocates dynamic memory to array of 1D arrays of integers.
  *
  * Return: Pointer to 2D array, NULL if malloc is NULL, NULL if row or
  * column of array is negative or zero.
  */
char *argstostr(int ac, char **av)
{
	int i = 0;

	av = malloc(ac * sizeof(char *));
	while (i < ac)
	{
		
	}
	
}
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
