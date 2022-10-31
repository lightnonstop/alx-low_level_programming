#include <string.h>
/**
 *_strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to string to be checked
 * @accept: Character to be searched in s
 * Return: Pointer to the bytes in s that matches or NULL if not found
 * first occurrence of any bytes in the accept.
 */
char *_strpbrk(char *s, char *accept)
{
	char chr = strpbrk(s, accept);

	return (chr);
}
