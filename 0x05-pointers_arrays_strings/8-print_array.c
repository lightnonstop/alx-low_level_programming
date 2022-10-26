#include <stdio.h>
#include <stdlib.h>
/**
  * print_array -  prints n elements of an array of integers.
  * @a: First Operand
  * @n: Second Operand
  * Description: Takes specific number of integers to print from array.
  * Separates integers with comma and space.
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (!(i == n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
