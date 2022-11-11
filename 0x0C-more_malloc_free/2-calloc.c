#include <stdlib.h>
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
	unsigned int i, array_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array_size = nmemb * size;
	arr = malloc(array_size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
