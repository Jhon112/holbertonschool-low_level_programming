#include "holberton.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: multidimensional array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	row = 0;
	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
}
