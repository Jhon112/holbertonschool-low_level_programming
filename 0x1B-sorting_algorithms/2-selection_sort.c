#include "sort.h"

/**
 * selection_sort - Sorts an array in ascending order using
 * the Selection sort algorithm
 *
 * @array: array to order
 * @size: size of array
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, iMin;
	int tmp;

	for (i = 0; i < (size - 1); i++)
	{
		iMin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[iMin])
			{
				iMin = j;
			}
		}
		if (iMin != i)
		{
			tmp = array[iMin];
			array[iMin] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
