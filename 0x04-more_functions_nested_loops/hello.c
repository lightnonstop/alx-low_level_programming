#include "stdio.h"
#include <stdlib.h>
#include "main.h"
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
int main(void)
{
	int num;
	num = 1;

	while(num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (!(num == 100))
		{
			_putchar(' ');
		}
		num++;
	}
	_putchar('\n');
	return (0);
}
