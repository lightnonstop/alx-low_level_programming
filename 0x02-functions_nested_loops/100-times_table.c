#include "main.h"
#include <stdio.h>
/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: First Operand
  * Description: If n is greater than 15 or less than 0
  * the function should not print anything. Two numbers are multiplied together
  * as the loops are implemented. The products are stored and given proper
  * display patterns.
  */
void print_times_table(int n)
{
	int fs, ss, prod;

	if (n < 15 && n > 0)
	{
		for (fs = 0; fs <= n; fs++)
		{
			for (ss = 0; ss <= n; ss++)
			{
				prod = fs * ss;

				printf("%d", prod);
				if (!(ss == n))
				{
					putchar(',');
					if (prod < 10)
					{
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					else if (prod >= 100)
					{
						putchar(' ');
					}
					else if (prod >= 10 && prod < 100)
					{
						putchar(' ');
						putchar(' ');
					}
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}
}
