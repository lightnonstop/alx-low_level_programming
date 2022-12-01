#include "main.h"
/**
  * binary_to_uint - Converts a binary number to a positive integer
  *
  * @b: Pointer to string of binary number characters
  *
  * Return: Converted number if successful, 0 if the string is NULL
  * or if there is one or more characters in the string that is not 0 or 1
  */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int dec = 0, bit = 1, base = 2;

	if (!b)
		return (0);
	len = 0;
	while (b[len] && b[len] != '\0')
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (b[i] - '0' == 0 || b[i] - '0' == 1)
		{
			if (b[i] - '0' == 1)
			{
				dec += bit;
			}
		}
		else
			return (0);
		bit *= base;
		i--;
	}
	return (dec);
}
