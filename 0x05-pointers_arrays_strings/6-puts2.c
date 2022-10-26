#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * puts2 -  prints every other character of a string,
  * starting with the first character
  * @str: First Operand
  * Description: Checks the length of string, prints the first character
  * and other characters but jumps over the odd charcters in loop.
  */
void puts2(char *str)
{
	int i, length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
