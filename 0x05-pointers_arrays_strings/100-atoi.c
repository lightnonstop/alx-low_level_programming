#include <stdio.h>
#include <stdlib.h>
/**
  * _atoi - Changes a string into an integer
  * @s: Pointer to string
  * Return: Integer from given string
  */
int _atoi(char *s)
{
	int sign = 1, result = 0;
	unsigned int sum = 0;

	for (*s; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= 48 && *s <= 57)
			break;
	}
	while (*s >= 48 && *s <= 57)
	{
		sum *= 10;
		sum += *s - 48;
		s++;
	}
	if (sign == -1)
		result = -sum;
	else
		result = sum;
	return (result);
}
