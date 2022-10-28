#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * print_number - Prints an integer
  * @n: First Operand
  * Description: Implements for both negative and positive numbers
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if ((n / 10 > 0))
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
