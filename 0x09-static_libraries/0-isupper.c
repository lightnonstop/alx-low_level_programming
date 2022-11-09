#include "main.h"
/**
  * _isupper - Checks for uppercase character
  * @c: First Operand
  * Description: Loops through the given integers of character
  * set for uppercase characters.
  * Return: 1 (Success) or 0 (Failure)
  */
int _isupper(int c)
{
	int upcs, ret;

	for (upcs = 65; upcs <= 90; upcs++)
	{
		if (c == upcs)
		{
			ret = 1;
			break;
		}
		else
			ret = 0;
	}
	return (ret);
}
