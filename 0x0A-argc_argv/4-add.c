#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * @argc: Size of the array
  * @argv: Array of command line arguments
  * Description: Adds up all given positive numbers
  *
  * Return: 0 (Success) or 1 if one of the numbers is not a digit
  */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
		sum = 0;
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
