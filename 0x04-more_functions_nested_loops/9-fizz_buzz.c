#include "stdio.h"
#include <stdlib.h>
#include "main.h"
/**
  * fizz_buzz - Prints numbers from 1 t0 100
  * Description -  For multiples of three print Fizz
  * instead of the number and for the multiples of five print Buzz.
  * For numbers which are multiples of both three and five print FizzBuzz.
  */
void fizz_buzz(void)
{
	int num;

	num = 1;

	while (num <= 100)
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
}
