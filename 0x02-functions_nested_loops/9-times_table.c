#include "main.h"
/**
  * times_table - prints the 9 times table, starting with 0
  * Description: Loops through the first number and second numbers
  * Multiplies both integers to make a result
  * if a number is less than 10, prints the only digit
  * else if the number is equals to or greater than ten,
  * the result of its float division becomes the first digit
  * and the result of the remainder division becomes the second digit.
  */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}

}
