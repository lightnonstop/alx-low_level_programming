#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * Description: Checks for all numbers that are multiples of 3 or 5 and are
  * below 1024 and finds their sum.
  * Return: 0 (Success)
  */
int main(void)
{
	int n = 1024, mult, sum = 0;

	for (mult = 0; mult < n; mult++)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			sum += mult;
		}
	}
	printf("%d\n", sum);
	return (0);
}
