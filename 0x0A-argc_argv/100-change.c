#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <limits.h>
/**
  * change - Prints the minimum number of coins to make
  * change for an amount of money.
  * @coin: Array of coin denomination
  * @m: Size of array of coin denomination
  * @Cents: Amount of cents (money)
  * Description: Calculates the minimum amount of
  * coins to be returned as change for some cents
  *
  * Return:  Minimum number of coins to sum amount of cents
 */
int change(int coin[], int m, int Cents)
{
	int res, i;

	if (Cents == 0)
		return (0);
	res = INT_MAX;
	for (i = 0; i < m; i++)
	{
		if (coin[i] <= Cents)
		{
			int sub_res = change(coin, m, Cents - coin[i]);

			if (sub_res != INT_MAX && sub_res + 1 < res)
				res = sub_res + 1;
		}
	}
	return (res);

}
/**
  * main - Starting point
  * @argc: Number of arguments in array
  * @argv: Array of command line arguments
  * Description: Calls function that calculate the minimum amount of
  * coins to be returned as change
  * Return: 0 (Success);
  */
int main(int argc, char *argv[])
{
	int coin[] = {1, 2, 5, 10, 25};
	int m = sizeof(coin) / sizeof(coin[0]), i, min, Cents;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		for (i = 0; i < argc; i++)
		{
			if (atoi(argv[i]) < 0)
			{
				printf("0\n");
				return (0);
			}
			Cents = atoi(argv[1]);
			min = change(coin, m, Cents);
		}
	}
	printf("%d\n", min);
	return (0);
}
