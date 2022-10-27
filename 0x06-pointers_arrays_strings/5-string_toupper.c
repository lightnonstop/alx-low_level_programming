#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * string_toupper - Changes all lowercase letters of a string to uppercase.
  * @str: First Operand
  * Description: Checks if each character in the string
  * is between a to z lowercase the subtracts 32 from their ascii character
  * value to obtain the uppercase of the character.
  * Return: Pointer string
  */
char *string_toupper(char *str)
{
	int i, length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
