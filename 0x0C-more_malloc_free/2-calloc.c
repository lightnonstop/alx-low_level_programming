#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * _calloc - Allocates memory for an array
  * @nmemb: Number of elements of array to allocate memory to
  * @size: Size of each element in bytes
  * Return: Pointer to newly allocated memory, NULL if malloc fails,
  * NULL if number of elements or size of each element is zero
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
