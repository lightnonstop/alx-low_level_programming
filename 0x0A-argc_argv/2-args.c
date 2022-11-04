#include <stdio.h>
/**
  * main - Starting point function
  * @argc: The size of the array
  * @argv: The array of command line argument
  * Description: Prints all arguments it receives per line.
  *
  * Return: 0 for success
  */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
