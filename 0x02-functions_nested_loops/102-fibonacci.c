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
	long int n, fs = 1, ss = 2, sum;

	printf("%ld, %ld, ", fs, ss);
	for (n = 0; n < 48; n++)
	{
		sum = fs + ss;

		fs = ss;

		ss = sum;

		printf("%ld", sum);
		if (!(n == 47))
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
