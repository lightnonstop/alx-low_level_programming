/**
  * _actual_prime_recursion - Checks if an input integer is a prime number
  * @x: Given number to be checked
  * @y: Divisor of the number
  * Return: 1 (Success) if number is prime or 0 (Failure) if number is not
  */
int _actual_prime_recursion(int x, int y)
{
	if (y == x && x != 1)
		return (1);
	else if (x % y == 0 && y != 1)
		return (0);
	else if (x == 1 && y == 1)
		return (0);
	else if (x < 0)
		return (0);
	return (_actual_prime_recursion(x, y + 1));
}
/**
  * is_prime_number - Calls fucntion to determine if given numebr is prime
  * @n: Number to be checked
  * Return: Result of called function
  */
int is_prime_number(int n)
{
	int result = _actual_prime_recursion(n, 1);

	return (result);
}
