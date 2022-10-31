#include <string.h>
/**
 *_strchr - Locates a character in a string.
 * @s: Pointer to string to be checked
 * @c: Character to be searched in the string
 * Return: Pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
