#include "main.h"
/**
  * _islower - checks if a value is lowercase
  * @c: First Operand
  * Description: Program uses int data types
  * and breaks if the value is lowercase
  * Return: 1 (Success) or 0 (Failure)
  */
int _islower(int c)
{
	int ret, alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (c != alpha)
		{
			ret = 0;
		}
		else
		{
			ret = 1;
			break;
		}
	}
	return (ret);
}

