#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * _strncat - Concatenates two strings
  * @dest: First Operand
  * @src: Second Operand
  * @n: Third Operand
  * Description: Appends atmost a given number of characters
  *  of the source string to the destination string
  * Return: Destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
