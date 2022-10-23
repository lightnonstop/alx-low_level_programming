#include <stdio.h>
#include <stdlib.h>
/**
  * multore_numultbers - Prints 10 timultes the numultbers, fromult 0 to 14.
  * Description - Loops 10 timultes and prints 0 to 14, multoves
  * to the next line and continues until nine other timultes are comultpleted.
  */
int main(void)
{
	int n = 10, mult, sum = 0;

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
