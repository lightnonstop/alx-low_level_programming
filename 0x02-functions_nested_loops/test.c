#include <stdio.h>
/**
  * print_last_digit - prints the last digit of an integer
  * @n: First Operand
  * Description: iDivides integer argument by base ten
  * Remainder of the division is the last digit of the integer
  * Return: 0 (Success)
  */
int main(void)
{
	int mult, fst, sec;
	for (fst = 0; fst < 10; fst++)
	{
		for (sec = 0; sec < 10; sec++)
		{
			mult = fst * sec;
			if (mult >= 10)
			{
				putchar((mult / 10) + '0');
				putchar((mult % 10) + '0');
			}
			else
			{
				putchar(mult + '0');
			}
			if (!(fst >= 0 && sec == 9))
			{
				putchar(',');
			}
			else
			{
				putchar('\n');
			}
			if (mult < 10 && sec < 9 && fst < 5)
			{
				putchar(' ');
				putchar(' ');
			}
			else if (mult >= 10 && sec < 9)
			{
				putchar(' ');
			}
		}
	}
}
