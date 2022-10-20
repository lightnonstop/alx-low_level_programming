#include "main.h"
/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14.
  * Description - Loops 10 times and prints 0 to 14, moves
  * to the next line and continues until nine other times are completed.
  */
void more_numbers(void)
{
	int x = 0, loop = 1;

	while (loop <= 10)
	{
		while (x <= 14)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			x++;
		}
		_putchar('\n');
		loop++;
	}
}
