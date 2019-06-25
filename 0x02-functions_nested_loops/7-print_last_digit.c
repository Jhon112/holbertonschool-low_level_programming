#include "holberton.h"
/**
 * print_last_digit - prints last number of a number
 * @n: number to ve evaluated
 *
 * Return: n last digit
 */
int print_last_digit(int n)
{
int r;
if (n < 0)
{
r = (n % 10) * -1;
}
else
{
r = n % 10;
}
_putchar(r + '0');
return (r);
}
