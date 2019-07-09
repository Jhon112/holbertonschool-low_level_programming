#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: pointer to multidimensional array
 * @size: number of sums
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row;
	int column;
	int sum1 = 0;
	int sum2 = 0;

	row = 0;
	column = 0;
	while (row < size)
	{
		sum1 += a[column];
		column += size + 1;
		row++;
	}
	row = 0;
	column = size - 1;
	while (row < size)
	{
		sum2 += a[column];
		column += size - 1;
		row++;
	}
	printf("%d, %d\n", sum1, sum2);
}
