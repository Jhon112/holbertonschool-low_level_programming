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
	int left = 0, right = size - 1;
	size_t m = size / 2;

	if (array == NULL)
		return (-1);
	
	if (*(array + m) == value)
		return (m);
	else if (*(array + m) < value)
	{
		m = binary_search(array, m, )
	}
	
	 

}
