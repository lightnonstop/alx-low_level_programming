#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * @argc: Size of array (argv)
  * @argv: Array of command line arguments
  * Description: Multiples two numbers
  *
  * Return: 0 (Success)
  */
int main(__attribute__ ((unused)) int argc, char **argv)
{
	if (argv[1] && argv[2])
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		 printf("Error\n");
	return (0);
}
