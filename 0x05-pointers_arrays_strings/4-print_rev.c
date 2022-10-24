#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * print_rev - prints a string, in reverse.
  * @s: Character argument
  */
void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
