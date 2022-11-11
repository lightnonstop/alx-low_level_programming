#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _realloc - Reallocates a memory block
  * @ptr: Pointer to the memory previously allocated
  * @old_size: Original size, in bytes, of the allocated space for pointer
  * @new_size: New size, in bytes of the new memory block
  * Return: Newly allocated memory block, NULL
  * if new size of memory block is zero,
  * Pointer to old memory if pointer is NULL, NULL if newly
  * allocated size of memory is equal old size of memory block.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if ((new_size > old_size) && ptr)
	{
		newptr = malloc(new_size);
		if (newptr)
		{
			memcpy(newptr, ptr, old_size);
			free(ptr);
		}
	}
	return (newptr);
}
