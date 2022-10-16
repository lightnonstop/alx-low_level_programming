#include <stdio.h>
/**
 * main - starting point function
 * Description: prints numbers 0 to 9
 * Use comma and space after each number output
 * Return: 0 (Success)
*/
int main(void)
{
int num, ch = 32;
for (num = 48; num <= 57; num++)
{
putchar(num);
putchar(44);
putchar(ch);
}
return (0);
}
