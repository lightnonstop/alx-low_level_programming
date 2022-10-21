#include "main.h"
/**
  * print_square - Prints a square
  * @size: Integer argument
  * Description: First loop applies what the second loop is doing
  * for (size) number of times.
  */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
