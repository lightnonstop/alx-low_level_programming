#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * _strncpy - Copies a string
  * @dest: First Operand
  * @src: Second Operand
  * @n: Third Operand
  * Description: Copies atmost a given number of  characters from the
 *  source string to the  destination string.
 *  In a case where the length of the source string is less than
 * that of the given number of characters, the remainder of destination string
*  will be padded with null bytes.
* Return: Destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
