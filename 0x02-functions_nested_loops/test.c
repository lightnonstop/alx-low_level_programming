#include <stdio.h>
int main(void)
{
	char upp, low;
        int c = 65;
	char ret;

	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			if (c != upp || c != low)
			{
				ret = 'N';
			}
			else
			{
				ret = 'Y';
			}
		}
	}
	putchar(ret);
	putchar('\n');
	return (0);
}
