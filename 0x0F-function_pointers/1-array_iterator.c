#include <stdlib.h>
#include "function_pointers.h"
/**
  * array_iterator - Executes a function given as a parameter on
  * each element of an array.
  * @array: Array of numbers
  * @size: Number of numbers
  * @action: Pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array && size && action))
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
