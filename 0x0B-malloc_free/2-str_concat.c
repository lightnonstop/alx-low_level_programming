#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - Concatenates two strings
 * @s1: First Operand
 * @s2: Second Operand
 * Description: Allocates memory for the new string
 * Return: Pointer to array, NULL if malloc, one or both strings is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *copy;
	int len1, len2, i = 0, j = 0, total;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL && s2 != NULL)
		s1 = "";
	else if (s2 == NULL && s1 != NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2;
	copy = (char *)malloc(sizeof(char) * total + 1);

	if (copy == NULL)
		return (NULL);
	while (i < len1 && *s1 != '\0')
	{
		*(copy + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(copy + len1 + j) = *(s2 + j);
		j++;
	}
	return (copy);
}
