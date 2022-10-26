#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * _strcpy - Copies a string to another variable using the strcpy function.
  * @dest: Destination Operand of copied string
  * @src: Operand where string is copied
  * Return: Destination variable
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
