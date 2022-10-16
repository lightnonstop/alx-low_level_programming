#include <stdio.h>
/**
 * main - starting point function
 * Description: prints numbers 0 to 9
 * Use comma and space after each number output
 * Return: 0 (Success)
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
