#include <stdio.h>
/**
 * main - starting point function
 * Description: a program that prints all single digit numbers of
 * base 10 starting from 0.
 * putchar accepts char and works as an integer.
 * Return: 0
*/
int main(void)
{
char digit;
for (digit = 0; digit < 10; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
