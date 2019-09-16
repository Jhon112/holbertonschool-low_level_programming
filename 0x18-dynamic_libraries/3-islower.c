#include "holberton.h"
/**
 * _islower - check if  a letter is lowercase
 * @c: the value to be compared
 *
 * Return: 1 if lowercase
 * 0 otherwise
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
else
{
return (0);
}
}
