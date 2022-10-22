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
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
