#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * rev_string - Reverses a given string
  * @s: Charater pointer argument
  * Description: Loop swaps two string characters simultaneously end to end.
  * Until mo more possible swaping.
  */
void rev_string(char *s)
{
	int length = strlen(s), i;
	char hold;
	for (i = 0; i < (length / 2); i++)
	{
		hold = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = hold;
	}
}
