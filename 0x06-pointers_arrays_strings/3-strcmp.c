#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * _strcmp - Compares two strings
  * @s1: First Operand
  * @s2: Second Operand
  * Return: 0 if both strings are equal | >0
  * if the first not matching character in first string has the greater 
  * ASCII value than the corresponding character in the second string | <0
  * if the first not matching character in first string has the lesser
  * ASCII value than the corresponding character in the second string
  */
int _strcmp(char *s1, char *s2)
{
	int res;
	res = strcmp(s1, s2);
	return (res);
}
