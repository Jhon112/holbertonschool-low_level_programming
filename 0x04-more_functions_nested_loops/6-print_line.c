#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number of lines to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int a;
	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
