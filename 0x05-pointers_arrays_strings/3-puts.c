#include "holberton.h"
/**
 * _puts - returns the length of a string
 * @str: address of the first element in the string
 *
 * Return: void
 */
void _puts(char *str)
{

	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
