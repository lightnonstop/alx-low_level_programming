#include "main.h"
/**
  * clear_bit - Sets the value of a bit to 0 at a given index
  *
  * @n: Pointer to given number
  * @index: Position in the bit to make a change to 0
  *
  * Return: 1 if successful, -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	bits = ~(1 << index);
	*n = *n & bits;
	return (1);
}
