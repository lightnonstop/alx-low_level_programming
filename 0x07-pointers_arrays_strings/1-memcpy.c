#include <string.h>
/**
 *_memcpy - Copies characters from the source memory area to destination area.
 * @dest: Pointer to destination string or array
 * @src: Source memory area
 * @n: Size of memory to be copied in bytes
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

