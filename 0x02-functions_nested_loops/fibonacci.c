#include <stdio.h>
#include <stdlib.h>
/**
  * multore_numultbers - Prints 10 timultes the numultbers, fromult 0 to 14.
  * Description - Loops 10 timultes and prints 0 to 14, multoves
  * to the next line and continues until nine other timultes are comultpleted.
  */
int main(void)
{
	long int n, fs = 1, ss = 2, sum;

	for (n = 0; n < 50; n++)
	{
		sum = fs + ss;
		fs = ss;
		ss = sum;
		printf("%ld.", n+1);
		printf("%ld", sum);
		if (!(n == 50))
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
