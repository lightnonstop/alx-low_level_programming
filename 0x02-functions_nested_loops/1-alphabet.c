#include <stdio.h>
#include "main.h"
/**
 * main - Starting point function
 * Description: Invokes a function print_alphabet
 * Return: 0 (Success)
 * print_alphabet -dbdndnnddjjdd
 * Description: hsjsjdjdjdjj
 */
void _putchar(char x)
{
	putchar(x);
}

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x < 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
