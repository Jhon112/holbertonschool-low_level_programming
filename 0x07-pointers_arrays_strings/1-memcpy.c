#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: Memory will be copied here
 * @src: Area memory will be taken from
 * @n: number of bytes to be copied
 *
 * Return: dest - pointer to dest area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while( i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}
