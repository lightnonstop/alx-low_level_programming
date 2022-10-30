#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * Description - program that prints the first 50
  * Fibonacci numbers, starting with 1 and 2.
  * Sets first and second number as 1 and 2. Loops through
  * numbers from 0 to 50 and computes sum of first and second numbers.
  * Updates first and second numbers every moment.
  * Return: 0 (Success)
  */
int main(void)
{
	unsigned long int n, fs = 1, ss = 2, sum;

	printf("%lu, %lu, ", fs, ss);
	for (n = 0; n < 96; n++)
	{
		sum = fs + ss;

		fs = ss;

		ss = sum;

		printf("%lu", sum);
		if (!(n == 95))
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
