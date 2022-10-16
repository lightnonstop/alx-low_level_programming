#include <stdio.h>
/**
 * main - starting point function
 * Description: a program that prints all single digit numbers of
 * base 10 starting from 0.
 * putchar accepts character set.
 * Return: 0
*/
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
