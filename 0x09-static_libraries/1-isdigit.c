#include "main.h"
/**
  * _isdigit - Checks for a digit from 0 through 9
  * @c: First Operand
  * Description: It accepts an integer checks whether it
  * is a value between 0 and 9
  * Return: 1 (Success) or 0 (Failure)
  */
int _isdigit(int c)
{
	int digit = 48, ret;

	while (digit <= 57)
	{
		if (c == digit)
		{
			ret = 1;
			break;
		}
		else
		{
			ret = 0;
		}
		digit++;
	}
	return (ret);
}
