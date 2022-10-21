#include "stdio.h"
#include <stdlib.h>
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
int main(void)
{
	int size = 1, i , j, k;
	for (i = size; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			putchar('.');
		}
		for (k = i; k <= size; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	return (0);
}
