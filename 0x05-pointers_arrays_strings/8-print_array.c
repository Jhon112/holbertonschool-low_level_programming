#include <stdio.h>
/**
 * print_array - Write a function that prints n elements of an array
 * @a: array of integers
 * @n: Numbers of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", *a);
		if (b != n - 1)
			printf(", ");
		a++;
		b++;
	}
	printf("\n");
}
