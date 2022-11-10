#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * free_grid - Frees a 2 dimensional grid previously created by me.
  * @grid: Array of arrays
  * @height: Number of rows of array
  * Description: Deallocates dynamic memory of array of 1D arrays of integers.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
