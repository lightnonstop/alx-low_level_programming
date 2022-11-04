#include <stdio.h>
/**
  * main - Starting point function
  * @argc: Size of array (argv)
  * @argv: Array of command line arguments
  * Description: Prints a program's name
  *
  * Return: 0 (Success)
  */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
