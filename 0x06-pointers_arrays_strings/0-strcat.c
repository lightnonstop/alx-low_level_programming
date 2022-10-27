#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * _strcat - Concatenates two strings
  * @dest: First Operand
  * @src:  Second Operand
  * Description: It will append a copy of the source string
  * in the destination string.
  * Return: Destination string
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
