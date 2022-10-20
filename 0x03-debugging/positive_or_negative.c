#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - starting point function
 * Description: program checks if n is greater than 0, equals to zero
 * or less than zero
 * Return: 0
*/
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
