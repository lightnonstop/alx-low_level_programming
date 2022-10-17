#include <stdio.h>
#include <stdlib.h>
/**
  * main - starting point function
  * Description: program prints different two digit integers
  * digits 01 and 10  are all same and it uses the smallest combination here.
  * Return: 0 (Success)
  */
int main(void)
{
	int n;
	int m;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (m == n || n - m <= 0)
			{
				continue;
			}
			putchar(m);
			putchar(n);
			if (n <= 57 && m < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

