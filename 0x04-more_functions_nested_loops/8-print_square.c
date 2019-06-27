#include "holberton.h"
/**
 * print_square - draws a square line in the terminal.
 * @n: dize of square
 *
 * Return: void
 */
void print_square(int n)
{
	int a,b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for(b = 0; b < n; b++)
				{
					_putchar(35);
				}
			_putchar('\n');
		}
	}
	else
	{
		_putchar(10);
	}
}
