#include "holberton.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: pointer to first char of str we want to reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char t;

	t = *s;
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(t);
	}
}
