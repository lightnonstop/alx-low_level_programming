#include <string.h>
/**
  * _strstr - Locates a substring
  * @haystack: Pointer to string
  * @needle: Pointer to substring
  * Description: Finds the first occurrence of the substring in the string.
  * Return: Pointer to the beginning of the located string or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	chr = strstr(haystack, needle);

	return (chr);
}
