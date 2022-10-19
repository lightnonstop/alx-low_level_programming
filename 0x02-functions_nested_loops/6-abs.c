#include "main.h"
/**
  * _abs - computes the absolute value of an integer argument
  * @n: First Operand
  * Description: checks if integer is negtive or positive
  * then multiplies by minus one if negative for an absolute integer
  * Return: The absolute value of the parameter
  */
int _abs(int n)
{
	int absolute;
	if (n < 0)
	{
		absolute = n*-1;
	}
	else
	{
		absolute = n;
	}
	return (absolute);
}
