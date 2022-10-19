#include <stdio.h>
int main(void)
{
	int n = -767, a;
	if (n < 0)
	{
		a = n*-1;
	}
	else if (n > 0)
	{
		a = n;
	}
	printf("%d",a);
	return (0);
}
