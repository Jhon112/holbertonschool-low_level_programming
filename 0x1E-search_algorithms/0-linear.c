#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: pointer to first element of array
 * @size: Size of array
 * @value: Value to find
 *
 * Return: index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", index, *(array + index));
		if (*(array + index) == value)
			return (index);

		index++;
	}
	return (-1);
}
