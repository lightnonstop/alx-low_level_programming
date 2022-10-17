#include <stdio.h>
#include <stdlib.h>
/**
  * main - starting point function
  * Description: program prints all possible combinations
  * of two two-digit numbers 00 01 and 01 00 are all the same
  * Return: 0 (Success)
  */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if ((10 * c + d) - (10 * a + b) <= 0)
					{
						continue;
					}
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (!(a == 57 && b == 56 && c == 57 && d == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
