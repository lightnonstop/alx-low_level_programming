#include <stdio.h>
int main(void)
{
	int c = ']';
	char ret;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		ret = 'Y';
	}
	else
	{
		ret = 'N';
	}
	putchar(ret);
	putchar('\n');
	return (0);
}
