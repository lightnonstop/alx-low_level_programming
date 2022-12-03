#include "main.h"
/**
  * flip_bits - Determines the number of bits needed to be flipped
  * to get from one number to another.
  *
  * @n: First Operand
  * @m: Second Operand
  *
  * Description: To get the second number from the first number,
  * some bit values have to be interchanged (i.e for consecutive bits which are
  * binary opposite in value, maybe for one, 1 bit and the other 0 bit)
  * until the second number in binary is derived successfully.
  * The number of interchanges is done with the help
  * of a bit manipulation operator (^) and loop for the counting each flip
  *
  * Return: Number of bits needed to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int new, count;

	new = n ^ m;
	count = 0;
	while (new != 0)
	{
		count = count + (new & 1);
		new = new >> 1;
	}
	return (count);
}
