/**
  * _palindrome_recursion - Checks if a given string is a palindrome
  * @s: The given string
  * @len: String character index from its end
  * @st: String character index from its start
  * Return: 1 if string is a palindrome or 0 if not
  */
int _palindrome_recursion(char *s, int len, int st)
{
	if (st >= len)
		return (1);
	if (*(s + len) != *(s + st))
		return (0);
	else
		return (_palin_recursion(s, len - 1, st + 1));
}
/**
  * _strlen - Computes the length of the given string
  * @s: The given string
  * Return: String length
  */
int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}
/**
  * is_palindrome - Assigns string and string index from its end to called
  * function
  * @str: The given string
  * Return: Return value of called function
  */
int is_palindrome(char *str)
{
	int length = _strlen(str) - 1, start = 0;

	return (_palin_recursion(str, length, start));
}
