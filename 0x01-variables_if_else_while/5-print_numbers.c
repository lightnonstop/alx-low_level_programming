#include <stdio.h>
/**
 * main - starting point function
 * Description: program that prints all single digit numbers.
 * target is base 10 starting from 0
 * Return: 0 (Success)
*/
int main(void)
{
int digit;
while (digit < 10)
{
printf("%d", digit);
digit++;
}
printf("\n");
return (0);
}
