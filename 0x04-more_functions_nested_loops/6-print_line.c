#include "main.h"
/**
  * print_line - Program draws a straight line in the terminal.
  * @n: Integer argument
  */
void print_line(int n)
{
	int times = 0;

	while (times < n)
	{
		_putchar('_');
		times++;
	}
}
