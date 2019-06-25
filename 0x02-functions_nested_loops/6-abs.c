#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: value to be computed 
 *
 * Return: return absolute value
 */
int _abs(int n)
{
int r;
if (n < 0)
{
r = n * -1;
return (r);
}
else
{
return (n);
}
}
