#include <stdio.h>
#include <stdlib.h>
void _putchar(char x)
{
	putchar(x);
}
void print_alphabet(void)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
}
