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
	char *nstr, *empt;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	len = strlen(s1);
	size = (len + n) * sizeof(char);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
