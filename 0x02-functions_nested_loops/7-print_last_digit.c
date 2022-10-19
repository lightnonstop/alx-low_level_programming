#include "main.h"
/**
  * print_last_digit - prints the last digit of an integer
  * @n: First Operand
  * Description: Divides integer argument by base ten
  * Remainder of the division is added to character 0 for 
  * integer to character conversion
  * Return: The last digit of an integer
  */
int print_last_digit(int n)
{
	int lstdigit;
	if (n > 0)
	{
		lstdigit = _putchar(n%10 + '0');
	}
	else
	{
		lstdigit = _putchar(-n%10 + '0');
	}
	return (lstdigit);
}
