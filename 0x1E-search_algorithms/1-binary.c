#include "search_algos.h"
/**
 * binary_search - searches for a value in an array with BNS
 * @array: pointer to first element of array
 * @size: Size of array
 * @value: Value to find
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t i = 0;
	int m = (left + right) / 2;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		m = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%i", *(array + i));
			if (i == right)
				printf("\n");
			else
				printf(", ");
		}
		if (*(array + m) < value)
			left = m + 1;
		else if (*(array + m) > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}
