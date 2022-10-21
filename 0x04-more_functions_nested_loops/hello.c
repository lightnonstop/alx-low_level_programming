#include "stdio.h"
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
int main(void)
{
	int x = 0, loop = 1;

		while (loop <= 10)
		{
			for (x = 0; x <= 14; x++)
			{
				if (x >= 10)
				{
					putchar((x / 10) + '0');
				}
				putchar((x % 10) + '0');
			}
			putchar('\n');
			loop++;
		}
		return (0);
}
