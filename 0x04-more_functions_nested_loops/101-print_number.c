#include "main.h"
/**
  * print_number - Prints an integer.
  * @n: First Operand
  * Description - Checks whether an integer is negative,
  * then print - and ending
  * digits which are made positive to be added to the sign.
  * If integer is positive, recur the function. Finally output integer.
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
