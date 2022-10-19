#include <stdio.h>
int main(void)
{
	int upp, low, c = '7';
	char ret;

	for (low = 97; low <= 122; low++)
	{
		for (upp = 65; upp <= 90; upp++)
		{
			if (c == low || c == upp)
			{
				ret = 'Y';
			}
			else
			{
				ret = 'N';
				break;
			}
		}
	}
	putchar(ret);
	return (0);
}
