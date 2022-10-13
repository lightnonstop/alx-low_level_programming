#include <stdio.h>
/**
 * main - accepts no arguments but prints byte values
 * Description: integer values have been declared
 * and bytes size values assigned for output process
 * Return: 0
 *
 */
int main(void)
{
int size_of_char = sizeof(char);
int size_of_int = sizeof(int);
int size_of_long_int = sizeof(long int);
int size_of_long_long_int = sizeof(long long int);
int size_of_float = sizeof(float);
printf("Size of a char: %d byte(s)\n", size_of_char);
printf("Size of an int: %d byte(s)\n", size_of_int);
printf("Size of a long int: %d byte(s)\n", size_of_long_int);
printf("Size of a long long int: %d byte(s)\n", size_of_long_long_int);
printf("Size of a float: %d byte(s)\n", size_of_float);
return (0);
}
