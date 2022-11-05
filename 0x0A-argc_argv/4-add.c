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
	int i, j, ret = 1;
	long long int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoll(argv[i]) > 0)
			{
				sum += atoll(argv[i]);
					if (i == argc - 1)
					{
						printf("%lld\n", sum);
					}
			}
			else if (atoll(argv[i]) == 0)
			{
				printf("Error\n");
				ret = 1;
				break;
		}	}
	}
	return (ret);
}
