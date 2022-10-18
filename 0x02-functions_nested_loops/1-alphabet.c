#include <stdio.h>
/**
 * main - Starting point function
 * Description: Invokes a function print_alphabet
 * Return: 0 (Success)
 * print_alphabet -dbdndnnddjjdd
 * Description: hsjsjdjdjdjj
 */
int main(void)
{
	void print_alphabet(void)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
	}
	print_alphabet();
	return (0);
}
