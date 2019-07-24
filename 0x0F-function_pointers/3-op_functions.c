#include <stdlib.h>
/**
 * op_add: returns the sum of a and b.
 * @a: first int
 * @b: second int
 *
 * Return: sum of both ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub: returns the difference of a and b
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_Mul: returns the product of a and b
 * @a: first int
 * @b: second int
 *
 * Return: product of both ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div: returns the division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: result of the division of both ints
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of a by b
 * @a: first int
 * @b: second int
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
