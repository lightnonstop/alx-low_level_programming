#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * rot13 - Encodes a string into 1337 (Leet Speak)
  * @str: First Operand
  * Description: Replaces characters of specific alphabets in a string with
  * leet characters (A for 4, E for 3, O for 0, T for 7, L for 1)
  * Return: Pointer to string
  */
char *rot13(char *str)
{
	int i, j, length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'm')
			{
				str[i] = str[i] + 13;
			}
			else
			{
				str[i] = str[i] - 13;
			}
		}
	}
	return (str);
}
