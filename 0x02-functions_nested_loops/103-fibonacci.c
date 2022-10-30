#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * Description - Program finds and prints the sum of the even-valued terms for fibonacci sequence  not more than 4000000.
  * Return: 0 (Success)
  */
int main(void)
{
	long int fs = 1, ss = 2, sum, sum_even = 0;
		
	while (fs <= 4000000)
	{
		sum = fs + ss;
		fs = ss;
		ss = sum;
		if (fs % 2 == 0)
		{
			sum_even += fs;
		}
	}
	printf("%ld\n", sum_even);
	return (0);
}
