#include "main.h"
/**
  * print_alphabet - prints the alphabet in lowercase
  * Description - uses _putchar function from main.h library
  */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
