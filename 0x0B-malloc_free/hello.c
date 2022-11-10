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
void free_grid(int **grid, int height)
{
	int i;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
}

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
		arr[i]  = (int *)malloc(width * sizeof(int));
	}
		return (arr);
}
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}   
}

int main(void)
{
	int **grid;
	
	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;	
	print_grid(grid, 6, 4);
	free_grid(grid, 4);
	return (0);
}
