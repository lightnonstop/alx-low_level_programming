#include <stdio.h>
int main(void)
{
	int n = 10, fst_num, sec_num, prod, comma = 0;

	if (n < 15 && n >= 0)
	{
		while (fst_num <= n)
		{
			while (sec_num <= n)
			{
				prod = fst_num * sec_num;
				printf("%d", prod);
				while (comma < n)
					putchar(',');
					printf("  ");
					if (prod >= 10)
						printf(" ");
					comma++;
				sec_num++;
			}
			fst_num++;
		}
	}
	return (0);
}

















































