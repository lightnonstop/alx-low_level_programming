#include <string.h>
/**
 *_memset - Fills memory with a constant byte.
 * @s: Pointer to memory area
 * @b: Constant byte to used in filling
 * @n: Size of memory to be filled in bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

