#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * _strdup - Returns a pointer to a newly allocated space in memory
  * @str: Pointer string
  * Description: Which contains a copy of the given string
  *
  * Return: Pointer to new string, NULL
  * if string or malloc return value is NULL
  */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	char *copy;
	int length = strlen(str), i;

	copy = (char *)malloc(sizeof(char) * length);

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		*(copy + i) = *(str + i);
	}
	return (copy);
}
