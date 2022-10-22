#include <stdio.h>
#include <stdlib.h>
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
int main(void)
{
	void print_number(int n)
	{
		if (n < 0)
		{
			putchar('-');
			n = -n;
		}
		if (n / 10)
		{
			print_number(n / 10);
		}
		putchar((n % 10) + '0');
	}
	int a = -24534;
	print_number(a);
	putchar('\n');
	return (0);
}
