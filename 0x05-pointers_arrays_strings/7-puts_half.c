#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * puts_half - prints half of a string
  * @str: First Operand
  * Description: Checks the length of string, starts to print
  * from the first character of the second half of the string till the last
  * character.
  */
void puts_half(char *str)
{
	int i, length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = ((length / 2) + 1); i < length; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
