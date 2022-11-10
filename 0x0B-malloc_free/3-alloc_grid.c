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
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		if (arr[i] == NULL)
		{
			free(arr[i]);
			free(arr);
			return (NULL);
		}
		else
			arr[i]  = (int *)malloc(width * sizeof(int));
	}
	return (arr);
}
