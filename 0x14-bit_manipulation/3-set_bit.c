#include "main.h"
/**
  * find_bit - Determines the decimal representation of a given number of bits
  * @bit: Given number of bits to be converted
  * Return: Decimal representation of a given number of bits
  */
int find_bit(int bit)
{
	if (bit == 0)
		return (1);
	else
		return (2 * find_bit(bit - 1));
}
/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: Pointer to number
  * @index: Position of the bit to change
  * Return: 1 if successful, -1 if an error has occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	int dec;

	if (index >= sizeof(*n) * 8)
		return (-1);
	dec = find_bit(index);
	*n = *n + dec;
	return (1);
}
