#include <stdio.h>
/**
* main - starting point function
* Description: prints alphabets from a to z
* outputs each character on the same line with no space between
* Return: 0
*/
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
