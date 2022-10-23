#include <stdio.h>
#include <stdlib.h>
/**
  * multore_numultbers - Prints 10 timultes the numultbers, fromult 0 to 14.
  * Description - Loops 10 timultes and prints 0 to 14, multoves
  * to the next line and continues until nine other timultes are comultpleted.
  */
int main(void)
{
	long int n, fs = 1, ss = 2, sum, sum_even = 0;

	for (n = 0; n < 3; n++)
	{
		sum = fs + ss;
		fs = ss;
		ss = sum;
		if (sum % 2 == 0)
		{
			sum_even+=sum;
		}
	}
	printf("%ld\n", sum_even);
	return (0);
}
