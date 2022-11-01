#include <stdio.h>
#include "main.h"
/**
  * print_diagsums - Prints the sum of the two diagonals
  * of a square matrix of integers.
  * @a: Pointer to integer array
  * @size: Size of integer array
  * Description: Adds the terms in left diagonal and right diagonal
  * of the square array of terms.
  */
void print_diagsums(int *a, int size)
{
	int i = 0, left_diag_index = 0, right_diag_index = size - 1;

	int left_diag_step = size + 1, right_diag_step = size - 1;
	int left_diag_sum = 0, right_diag_sum = 0;

	while (i < size)
	{
		left_diag_sum += a[left_diag_index];
		left_diag_index += left_diag_step;
		right_diag_sum += a[right_diag_index];
		right_diag_index += right_diag_step;

		i++;
	}

	printf("%d, %d\n", left_diag_sum, right_diag_sum);
}
