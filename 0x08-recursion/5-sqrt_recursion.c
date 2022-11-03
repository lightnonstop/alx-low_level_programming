#include <math.h>
#include <stdio.h>
#include "main.h"
/**
  * _actual_sqrt_recursion - Calculates the square root of a number
  * @x: Guessed root
  * @y: Given number of which its root is to be determined
  * Return: The square root of the number (x) if it actually is (Success) or -1
  * if the number has no natural root (Failure)
  */
int _actual_sqrt_recursion(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (_actual_sqrt_recursion(x + 1, y));
}
/**
  * _sqrt_recursion - Calls a function to compute the square root of a number
  * @n: Given number of which its root is to be determined.
  * Return: Result of passing the given number to the called function (Success)
  */
int _sqrt_recursion(int n)
{
	int result = _actual_sqrt_recursion(1, n);

	return (result);
}
