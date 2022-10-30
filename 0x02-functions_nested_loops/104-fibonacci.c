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
	int n;
	unsigned long int fs = 1, ss = 2, sum;

	for (n = 0; n < 98; n++)
	{
		printf("%lu", fs);
		sum = fs + ss;

		fs = ss;

		ss = sum;
		if (!(n == 97))
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
