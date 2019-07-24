#include <stdlib.h>
/**
 * int_index - returns the index of the integer given in an array
 * @array: array where the int will be searched
 * @size: length of array
 * @cmp: fn to be used to compare value
 *
 * Return: index of first matched element
 * -1 if no elem matched
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);

	if (cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			result = cmp(array[i]);
			if (result)
				return (i);
			i++;
		}
	}
	return (-1);

}
