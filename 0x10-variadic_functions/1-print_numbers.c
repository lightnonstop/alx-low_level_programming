#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_numbers - Prints numbers
  * @separator: Comma and space separator
  * @n: Number of variable arguments passed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	if (!separator)
		separator = "";
	if (n == 0)
		exit(0);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(arg, int), separator);
		else
			printf("%d\n", va_arg(arg, int));
	}
	va_end(arg);
}
