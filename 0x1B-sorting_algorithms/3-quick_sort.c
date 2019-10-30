#include "sort.h"

/**
 * partition - it finds the index where the pivot should be.
 * groups less values at the left, and greater values at the right
 *
 * @array: array to be quick sorted
 * @end: right limit of array
 *
 * Return: index where the pivot was inserted
 */

size_t partition(int *array, size_t end)
{
	int pivot = array[end - 1], temp;
	size_t pindex = 0, i;

	for (i = 0; i < end; i++)
	{
		if (array[i] < pivot)
		{
			temp = array[pindex];
			array[pindex] = array[i];
			array[i] = temp;
			pindex++;
		}
	}
	temp = array[pindex];
	array[pindex] = pivot;
	array[end - 1] = temp;
	return pindex;
}

/**
 * quick_sort - uses Quick Sort algorthm. This algorithm uses dive and conquer
 * which uses recursion. It splits the problem into smaller problems
 *
 * @array: array to be quick sorted
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	size_t pindex = 0;

	if (size > 2)
	{
		pindex = partition(array, size);
		quick_sort(array, pindex);
		quick_sort((array + (pindex + 1)), size - (pindex + 1));
	}
}