/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  * Description: uses putchar function from header file
  */
void print_alphabet_x10(void)
{
	int ten;
	char x;

	for (ten = 0; ten <= 10; ten++)
	{
		for (x = 'a'; x < 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
