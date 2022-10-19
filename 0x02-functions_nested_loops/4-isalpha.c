#include "main.h"
/**
  * _isalpha - checks if a value is uppercase or lowercase
  * @c: First Operand
  * Description: porgram uses int data types
  * and breaks if the value is lowercase
  * Return: 1 (Success) or 0 (Failure)
  */
int _isalpha(int c)
{
	int ret, low, upp;
	
	for (upp = 65; upp <= 90; upp++)
	{
		for (low = 97; low <= 122; low++)
		{
			if (c != low || c != upp)
			{
				ret = 0;
			}
			else if (c == low || c == upp)
			{
				ret = 1;
				break;
			}
		}
	}
	return (ret);
}	

