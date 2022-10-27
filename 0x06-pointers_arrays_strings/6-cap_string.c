#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * cap_string - Changes all lowercase letters of a string to uppercase.
  * @s: First Operand
  * Description: Checks if each character in the string
  * is between a to z lowercase the subtracts 32 from their ascii character
  * value to obtain the uppercase of the character.
  * Return: Pointer string
  */
char *cap_string(char *s)
{
	int i, length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			continue;
		}
		if (s[i] == '.' || s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
			else if (s[i] == '.' || s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
			{
				++i;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
					continue;
				}
			}
		}
	}
	return (s);
}
