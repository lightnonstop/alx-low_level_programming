#include <string.h>
/**
 *_strspn - Gets the length of a prefix substring.
 * @s: Pointer to string to be checked
 * @accept: Pointer to string of characters to be matched
 * Return: Number of characters in the initial segment of string checked
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = strspn(s, accept);

	return (len);
}
