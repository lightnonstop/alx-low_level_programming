#include <stdio.h>
int main(void)
{
	int sign, n = -145, ret;

	if (n > 0)
	{
		sign = '+';
		ret = 1;
	}
	else if (n == 0)
	{
		sign = '0';
		ret = 0;
	}
	else
	{
		sign = '-';
		ret = -1;
	}
	putchar(sign);
	return (ret);
}
