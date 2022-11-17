#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - Returns the sum of all its parameters
  * @n: Number of variable arguments to be entered
  * Return: Sum of arguments successfully else 0 if it fails
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
