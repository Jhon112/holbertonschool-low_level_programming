#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: start address
 * @b: constant byte address will be filled with
 * @n: numbers of bytes to be filled
 *
 * Return: s - pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
