#include "main.h"
/**
  * int _isalpha  - checks if a value is lowercase or uppercase
  * @c - First Operand
  * Description: program uses int data types
  * and breaks if the value is lowercase or uppercase
  * Return: 1 (Success) or 0 (Failure)
  */
int _isalpha(int c)
{
	int upp, low, ret;

	for (low = 97; low <= 122; low++)
	{
		for (upp = 65; upp <= 90; upp++)
		{
			if (c == low || c == upp)
			{
				ret = 1;
			}
			else
			{
				ret = 0;
				break;
			}
		}
	}
	return (ret);
}
