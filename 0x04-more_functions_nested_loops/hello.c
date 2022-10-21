#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
int main(void)
{
	long long n = 119;
	
	long long maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
	for (int i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
		maxPrime = n;
	printf("%lld\n",maxPrime);
	return (0);
}
