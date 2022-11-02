/**
  * factorial - Calculates the factorial of a given number
  * @n: Given number
  * Description: Passes number recursively to determine its factorial
  * Return: -1 if given number is less than 0 or 1 if number is (0 or 1)
  * else the factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
