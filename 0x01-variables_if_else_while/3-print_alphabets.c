#include <stdio.h>
/**
 * main - starting point function
 * Description: print lowercase and uppercase aphabets on same line.
 * no space between alphabetic characters
 * Return: 0 (success)
*/
int main(void)
{
char alphabet, ALPHABET;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
{
putchar(ALPHABET);
}
putchar('\n');
return (0);
}
