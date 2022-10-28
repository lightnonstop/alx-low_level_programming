#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * leet - Encodes a string into 1337 (Leet Speak)
  * @s: First Operand
  * Description: Replaces characters of specific alphabets in a string with
  * leet characters (A for 4, E for 3, O for 0, T for 7, L for 1)
  * Return: Final pointer to string
  */
char *leet(char *s)
{
	char c[] = "AEOTL";
	char d[] = "43071";

	int i, j, len1 = strlen(s), len2 = strlen(c);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if ((s[i] == c[j]) || (s[i] - c[j] == 32))
			{
				s[i] = d[j];
			}
		}
	}
	return (s);

}
