#include "main.h"
/**
  * print_sign - prints sign of the function's argument
  * Description - Checks are done with respect to zero
  * If argument is greater than, less than zero or equal to zero,
  * it is positive, negative or zero respectively.
  * Return: 0 (Zero) or -1 (Negative) or 1 (Positive) Successfully
  */
int print_sign(int n)
{
	int sign;
	int ret;

	if (n > 0)
	{
		sign = '+';
		ret = 1;
	}
	else if (n == 0)
	{
		sign = '0';
		ret = 0;
	}
	else
	{
		sign = '-';
		ret = -1;
	}
	_putchar(sign);
	return (ret);
}
