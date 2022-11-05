#include <stdio.h>
#include <stdlib.h>
/**
  * main - Starting point function
  * @argc: Size of array (argv)
  * @argv: Array of command line arguments
  * Description: Adds up all given positive numbers
  *
  * Return: 0 (Success) or 1 if one of the numbers is not a digit
  */
int main(int argc, char **argv)
{
	int i, ret = 1, sum = 0;

	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
					if (i == argc - 1)
					{
						printf("%d\n", sum);
					}
			}
			else if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				ret = 1;
				break;
		}	}
	}
	return (ret);
}
