#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * rev_string - Reverses a string
  * @s: Charater argument
  */
void rev_string(char *s)
{
	int i, length = strlen(s);

	for (i = 0; i < length - 1; i++)
	{
		strncat(*s, s[i], length);
	}
}
