#include "main.h"
/**
  * count_bit - Counts the number of bits of a number in binary
  * @num: The number
  * Return: Number of bits counted
  */
unsigned int count_bit(unsigned int num)
{
	unsigned int count;

	count = 0;
	while (num != 0)
	{
		num /= 2;
		count++;
	}
	return (count);
}
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
	int *new;
	unsigned int bits, i = 0;

	bits = count_bit(n);
	new = malloc(sizeof(int) * bits);
	bits--;
	while (n != 0 && i <= bits)
	{
		new[i] = n & 1;
		if (i == index)
			return (new[i]);
		n = n >> 1;
		i++;
	}
	return (0);
}
