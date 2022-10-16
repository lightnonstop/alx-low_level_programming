#include <stdio.h>
/**
 * main - starting point function
 * Description: prints all hexadecimal digits
 * starting from 0 to 9 and then lowercase a to f
 * Return: 0 (Success)
*/
int main(void)
{
int num;
char alpha;
for (num = 48; num <= 57; num++)
{
putchar(num);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
