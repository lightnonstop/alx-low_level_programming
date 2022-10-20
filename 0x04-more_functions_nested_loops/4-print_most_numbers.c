#include "main.h"
/**
  * print_most_numbers - Outputs numbers from 0 to 9 skips 2 and 4
  * Description: Skips 2 and 4 values when loop reaches these points
  */
void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if (num == 50 || num == 52)
		{
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
