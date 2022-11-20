#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - Prints anything
 * @format: Constant format string
 */
void print_all(const char * const format, ...)
{
	int i = 0, len = 0;

	va_list ap;

	if (!format)
	{
		printf("Invalid\n");
		exit(0);
	}
	while (format[len] != '\0')
	{
		len++;
	}
	va_start(ap, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'f':
				printf("%f ", va_arg(ap, double));
				break;
			case 'c':
				printf("%c ", va_arg(ap, int));
				break;
			case 'i':
				printf("%d ", va_arg(ap, int));
				break;
			case 's':
				printf("%s ", va_arg(ap, char*));
				break;
		}
		i++;
	}
	putchar('\n');
}
