#include "main.h"
/**
  * _isalpha - checks if a value is lowercase or uppercase
  * @c: First Operand
  * Description: Program uses int and char data types
  * and breaks if the value is lowercase or uppercase
  * Return: 1 (Success) or 0 (Failure)
  */
int _isalpha(int c)
{
	int ret;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	_putchar(ret);
	_putchar('\n');
	return (0);
}
