#include <stdio.h>
#include <stdlib.h>
/**
  * main - starting point function
  * Description: program prints different three digits integers.
  * digits 001, 010, 100 are all the same. It uses the smallest combination.
  * Return: 0 (Success)
  */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				if ((x == y && y == z) || (z - y <= 0 || y - x <= 0))
				{
					continue;
				}
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < 55 && y <= 56 && z <= 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
