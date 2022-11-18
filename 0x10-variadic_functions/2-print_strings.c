#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - Prints given strings
  * @separator: Separator to be used after string
  * @n: Number of variable string arguments passed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);

	if (!separator)
		separator = "";
	if (n == 0)
		exit(0);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char*);
		if (i < n - 1)
		{
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, separator);
		}
		else
		{
			if (s == NULL)
				s = "(nil)";
			printf("%s\n", s);
		}
	}
	va_end(arg);
}
