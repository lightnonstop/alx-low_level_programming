#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * string_nconcat - Concatenates two strings
  * @s1: Destination string of concatenation
  * @s2: Source string that will be cut
  * @n: Number of characters from source string to concatenate
  * with destination string.
  * Return: Pointer to newly allocated memory, NULL if function fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int length, i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1);
	size = ((length + n) * sizeof(*r));
	r = malloc(size + 1);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < size && s1[i] != '\0'; i++)
	{
		r[i] = s1[i];
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		r[i] = s2[j];
		i++;
		j++;
	}
	r[i] = '\0';
	return (r);
}

