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
	int length, i;
	char *copy;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	copy = (char *)malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		*(copy + i) = *(str + i);
	}
	return (copy);
}
