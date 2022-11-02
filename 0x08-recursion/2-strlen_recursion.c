#include <string.h>
#include <stdio.h>
/**
  * _strlen_recursion - Calculates the length of a string
  * @s: Pointer to string
  * Return: Length of string if string has characters, else (0) if string
  * has no character
  */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
