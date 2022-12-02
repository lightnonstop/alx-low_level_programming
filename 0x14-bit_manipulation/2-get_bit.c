#include "main.h"
/**
  * get_bit - Determines the value of a bit at a given index
  *
  * @n: Given number
  * @index: Bit position from the right to left of increasing bits 1, 2 ,4...
  *
  * Return: Value of the bit at this position is successful or
  * -1 if an error occured.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}
