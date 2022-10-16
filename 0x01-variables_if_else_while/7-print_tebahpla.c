#include <stdio.h>
/** 
 * main - starting point function
 * Description: prints characters from z to a (backwards) with a newline
 * putchar function accepts a one character argument
 * Return: 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
