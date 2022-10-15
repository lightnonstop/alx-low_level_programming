#include <stdio.h>
/**
 * main - starting point function
 * Description: program prints alphabetic characters from a to z
 * skips characters q and e
 * Return: 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q' || alphabet == 'e')
{
continue;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
