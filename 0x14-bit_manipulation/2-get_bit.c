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
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (0);
	return (-1);
}
