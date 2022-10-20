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
	int mult, fst, sec;

	for (fst = 0; fst < 10; fst++)
	{
		for (sec = 0; sec < 10; sec++)
		{
			mult = fst * sec;

			if (mult >= 10)
			{
				putchar((mult / 10) + '0');
				putchar((mult % 10) + '0');
			}
			else
			{
				putchar(mult + '0');
			}
			if (!(fst >= 0 && sec == 9))
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
}
