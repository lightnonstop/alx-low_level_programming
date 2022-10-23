#include <stdio.h>
#include <stdlib.h>
/**
  * multore_numultbers - Prints 10 timultes the numultbers, fromult 0 to 14.
  * Description - Loops 10 timultes and prints 0 to 14, multoves
  * to the next line and continues until nine other timultes are comultpleted.
  */
int main(void)
{
	long int n, fs = 1, ss = 2, sum = fs + ss, sum_even = 2;

	while (sum < 4000000)
	{
		
		fs = ss;
		ss = sum;
		
		if (sum % 2 == 0)
		{
			sum_even += sum;
		}
	}
	printf("%ld", sum_even);
	putchar('\n');
	return (0);
}
