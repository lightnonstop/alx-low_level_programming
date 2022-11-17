#include <stdlib.h>
#include "function_pointers.h"
/**
  * int_index - Searches for an integer
  * @array: Array of integers
  * @size: Number of elements to search in the given array
  * @cmp: Pointer to function(s)
  * Return: -1 if number of elements to search for
  * is less than or equal to zero or if no matching elements was found,
  * index of first matching element of array for which the function does
  * not return 0 when called by the function pointer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp(array[i]) != 0))
			{
				ret = i;
				break;
			}
			else
				ret = -1;
		}
		return (ret);
	}
	return (-1);
}
