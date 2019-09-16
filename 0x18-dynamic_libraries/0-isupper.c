#include "holberton.h"
/**
 *  _isupper - Write a function that checks for uppercase character.
 * @c: Caracter to be evaluated
 *
 * Return: 1 if true
 * 0 if false
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
