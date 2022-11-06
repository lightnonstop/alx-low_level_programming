#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Starting point function
  * @argc: Size of the array
  * @argv: Array of command line arguments
  * Description: Adds up all given positive numbers
  *
  * Return: 0 (Success) or 1 if one of the numbers is not a digit
  */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (strlen(argv[i])); j++)
		{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
