#include "main.h"
/**
  * print_last_digit - prints the last digit of an integer
  * @n: First Operand
  * Description: iDivides integer argument by base ten
  * Remainder of the division is the last digit of the integer
  * Return: 0 (Success)
  */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	_putchar(a);
	return (0);
}
