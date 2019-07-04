#include "holberton.h"
/**
 * reverse_array - reverse the content of an int array
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int v;

	i = 0;

	while (i < n/2)
	{
		if (i == n)
			break;

		v = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = v;
		i++;
	}
}
