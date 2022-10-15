#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - starting point function
 * Description: Using remainder to check and print whether a random
 * number is greater than 5, greater than 6 or equals to zero.
 * Return: 0
*/
int main(void)
{
int n;
int last_digit;
last_digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
}
return (0);
}
