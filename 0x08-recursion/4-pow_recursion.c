/**
  * _pow_recursion - Calculates the power of a given number
  * @x: Given number
  * @y: Power
  * Return: -1 if the power is less than (0) or 1 if the power is equals to (0)
  * else the answer of the given number to its power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
