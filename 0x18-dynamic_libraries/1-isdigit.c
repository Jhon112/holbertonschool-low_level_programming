#include "holberton.h"
/**
 *  _isdigit - Write a function that checks for uppercase character.
 * @c: Caracter to be evaluated
 *
 * Return: 1 if true
 * 0 if false
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
