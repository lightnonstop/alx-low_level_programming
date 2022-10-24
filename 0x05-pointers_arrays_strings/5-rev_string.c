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

	for (i = length; i >= 0; i--)
	{
		*s[i] = s[i];
	}
}
