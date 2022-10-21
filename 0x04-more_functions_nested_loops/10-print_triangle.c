#include "main.h"
/**
  * print_triangle - Prints a triangle
  * @size - Integer argument
  * Description - First loop prints pattern from the second loop as many
  * times as the given integer argument.
  * The pattern is reduced by 1 on every iteration.
  * Does same with the third loop but this time increases pattern by 1
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			for (k = i; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
