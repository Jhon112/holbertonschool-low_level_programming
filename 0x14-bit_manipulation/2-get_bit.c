#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index
 *
 * Return: value of the bit in index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	if (n & 1)
		return (1);

	else
		return (0);
}
