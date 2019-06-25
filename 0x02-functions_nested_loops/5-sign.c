#include "holberton.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: the value to be compared
 *
 * Return: 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
int a;
if (n > 0)
{
_putchar('+');
a = 1;
}
else if (n < 0)
{
_putchar('-');
a = -1;
}
else
{
_putchar('0');
a = 0;
}
return (a);
}
