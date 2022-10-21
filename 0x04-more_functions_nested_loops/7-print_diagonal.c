#include "main.h"
/**
  * print_diagonal - Draws a diagonal line on the terminal.
  * @n: Integer argument
  * Description: First loop iterates vertically then the second loop
  * iterates horizontally with the new line put in consideration.
  * i.e As the first loop picks up a value that is
  * less than n - 1, the second loop iterates on that value (Prints output
  * for the number(s) of times).
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		_putchar(92);
		_putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
