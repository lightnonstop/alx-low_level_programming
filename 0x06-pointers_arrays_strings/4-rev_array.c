#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * reverse_array - Reverses the content of an array of integers
  * @a: First Operand
  * @n: Second Operand
  * Description: Swaps two integers simultaneously at both ends
  * for reversing.
  */
void reverse_array(int *a, int n)
{
	int i, hold_int;

	for (i = 0; i < (n / 2); i++)
	{
		hold = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = hold;
	}
}
