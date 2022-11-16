#include <stdio.h>
#include <stdlib.h>
#define LARGEST 10000000000
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
	int n;
	unsigned long long int fs = 0, ss = 1, sum;

	for (n = 1; n <= 98; n++)
	{
		sum = fs + ss;

		fs = ss;

		ss = sum;
		printf("%llu", ss);
		if (!(n == 97))
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
