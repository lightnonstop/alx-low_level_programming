#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * Description - program that prints the first 98
  * Fibonacci numbers, starting with 1 and 2.
  * Sets first and second number as 1 and 2. Loops through
  * numbers from 0 to 98 and computes sum of first and second numbers.
  * Updates first and second numbers every moment.
  * Return: 0 (Success)
  */
int main(void)
{
	unsigned int n, fs = 1, ss = 2, sum;

	printf("%u, %u, ", fs, ss);
	for (n = 0; n < 95; n++)
	{
		sum = fs + ss;

		fs = ss;

		ss = sum;

		printf("%u", sum);
		if (!(n == 94))
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
