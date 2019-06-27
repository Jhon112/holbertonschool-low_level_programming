#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of lines to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			if (a > 0)
			{
				for (b = a; b > 0; b--)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar(10);
	}
}
