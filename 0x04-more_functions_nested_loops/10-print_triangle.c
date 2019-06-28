#include "holberton.h"
/**
 * print_triangle - function that prints a triangle
 * @n: size of triangle
 *
 * Return: void
 */
void print_triangle(int n)
{
	int lines, num, espacios;

	if (n > 0)
	{
		for (lines = 0; lines < n; lines++)
		{
			num = lines + 1;
			espacios = n - num;
			while (espacios > 0)
			{
				_putchar(32);
				espacios--;
			}
			while (num > 0);
			{
				_putchar(35);
				num--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
