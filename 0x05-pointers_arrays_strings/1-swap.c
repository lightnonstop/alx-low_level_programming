#include "main.h"
/**
  * swap_int - Swaps the values of two integers.
  * @a: First Operand
  * @b: Second Operand
  */
void swap_int(int *a, int *b)
{
	int temp_variable = *a;
	*a = *b;
	*b = temp_variable;
}
