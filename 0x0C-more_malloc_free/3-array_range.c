#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * array_range - Allocates memory for an array of integers
  * @min: First Operand
  * @max: Second Operand
  * Return: Pointer to newly created array, NULL if first operand
  * is greater than second operand
  */
int *array_range(int min, int max)
{
	int *array;
	int i, diff;
	unsigned int arr_size;

	if (min > max)
		return (NULL);
	diff =  max - min;
	arr_size = (diff + 1) * sizeof(int);
	array = malloc(arr_size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= diff; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
