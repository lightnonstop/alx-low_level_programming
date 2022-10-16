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
int space;
int comma;
comma = 44;
space = 32;
for (num = 48; num <= 57; num++)
{
if (num == 57)
{
space;
comma = '\n';
}
putchar(num);
putchar(comma);
putchar(space);
}
return (0);
}
