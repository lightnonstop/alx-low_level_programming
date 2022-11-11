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
	unsigned int length = strlen(s1), i;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	r = malloc((length + n) * sizeof(char));
	if (r == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		r[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		r[length + i] = s2[i];
	}
	return (r);
}
