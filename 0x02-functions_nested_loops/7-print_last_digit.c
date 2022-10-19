#include <stdio.h>
/**
  * print_last_digit - prints the last digit of an integer
  * @n: First Operand
  * Description: Divides integer argument by base ten
  * Remainder of the division is added to character 0 for 
  * integer to character conversion
  * Return: 0 (Success)
  */
int print_last_digit(int n)
{
	if (n > 0)
	{
		putchar(n%10 + '0');
	}
	else
	{
		putchar(-n%10 + '0');
	}
	return (0);
}
