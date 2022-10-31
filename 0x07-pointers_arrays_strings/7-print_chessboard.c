#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - Prints the chessboard
  * @a: First Operand
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
			if (j == 7 && i < 7)
			{
				putchar('\n');
			}
		}
	}
	putchar('\n');
}

