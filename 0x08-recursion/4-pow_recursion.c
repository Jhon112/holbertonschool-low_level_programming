/**
 * _pow_recursion - returns the value of x raised y
 * @x: int to be multiplied
 * @y: number of times that a multiplication is needed
 *
 * Return: x raised to the power of y
 * -1 if y lowert than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	x = x * _pow_recursion(x, --y);
	return (x);
}
