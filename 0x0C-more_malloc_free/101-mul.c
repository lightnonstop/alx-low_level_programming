#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * mult - Multiplies only two positive numbers
  *
  * @sumargc1: Number of digits in first command line argument
  * @sumargc2: Number of digits in second command line argument
  * @argv1: First Operand (command line argument)
  * @argv2: Second Operand (command line argument)
  */
void mult(int sumargc1, int sumargc2, char *argv1, char *argv2)
{
	int *fs;
	int *sec;
	int *ans;
	int l1, l2, i, j, tmp;

	l1 = strlen(argv1);
	l2 = strlen(argv2);
	fs = malloc(sumargc1 * sizeof(int));
	sec = malloc(sumargc2 * sizeof(int));
	ans = malloc((sumargc1 + sumargc2) * sizeof(int));
	ans[0] = 0;
	for (i = sumargc1 - 1, j = 0; i >= 0; i--, j++)
		fs[j] = argv1[i] - '0';
	for (i = sumargc2 - 1, j = 0; i >= 0; i--, j++)
		sec[j] = argv2[i] - '0';
	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
			ans[i + j] += sec[i] * fs[j];
	}
	for (i = 0; i < l1 + l2; i++)
	{
		tmp = ans[i] / 10;
		ans[i] = ans[i] % 10;
		ans[i + 1] = ans[i + 1] + tmp;
	}
	for (i = l1 + l2; i >= 0; i--)
	{
		if (ans[i] > 0)
			break;
	}
	for (; i >= 0; i--)
		_putchar(ans[i] + '0');
	_putchar('\n');
}
/**
  * print - Prints error string
  */
void print(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
/**
  * main - Start here
  * @argc: Number of command line arguments
  * @argv: Array of command line arguments
  * Return: 0 if successful
  */
int main(int argc, char **argv)
{
	int i, j, x, y, sumfsarg = 0, sumsecarg = 0, len1, len2;

	if (argc != 3)
	{
		print();
		exit(98);
	}
	for (i = 1; i < argc - 1 ; i++)
	{
		len1 =  strlen(argv[i]);
		for (j = 0; j < len1; j++)
		{
			if (!((argv[i][j]) >= 48 && (argv[i][j]) <= 57) || atoi(argv[i]) == 0)
			{
				print();
				exit(98);
			}
			sumfsarg++;
		}
	}
	for (x = 2; x < argc; x++)
	{
		len2 =  strlen(argv[x]);
		for (y = 0; y < len2; y++)
		{
			if (!((argv[x][y]) >= 48 && (argv[x][y]) <= 57) || atoi(argv[x]) == 0)
			{
				print();
				_putchar('\n');
				exit(98);
			}
			sumsecarg++;
		}
	}
	mult(sumfsarg, sumsecarg, argv[1], argv[2]);
	return (0);
}
