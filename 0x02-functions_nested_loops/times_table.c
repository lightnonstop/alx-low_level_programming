#include <stdio.h>
#include <stdlib.h>
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
int main(void)
{
	int n = 3, fs, ss, prod;

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
				else if (prod >= 10)
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
	return (0);
}
