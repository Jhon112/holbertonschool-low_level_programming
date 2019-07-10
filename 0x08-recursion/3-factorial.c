/**
 * factorial - returns the factorial of a given number
 * @n: number to be evaluated
 *
 * Return: factorial of n number
 * -1 if error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	n = n * factorial(n - 1);
	return (n);
}
