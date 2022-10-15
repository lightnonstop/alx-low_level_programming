#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point function
 * Description: program checks if n is greater than 0, equals to zero
 * or less than zero
 * Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
