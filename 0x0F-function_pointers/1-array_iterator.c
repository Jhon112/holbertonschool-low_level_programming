#include <stdlib.h>
/**
 * array_iterator - call a fn with each element of an array
 * @array: array to be iterated
 * @size: length of array
 * @action: callback fn
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL && action != NULL)
	{
		unsigned int i;

		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
