#include "holberton.h"
/**
 * *_strncpy - copies a string. Works the same as strncpy
 * @dest: pointer to dest string
 * @src: pointer to src string(the one to copy)
 * @n: limit of chars
 *
 * Return: pointer to concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + j) != 0)
	{
		j++;
	}

	while (*(src + i) != 0)
	{
		if (i == n)
			break;

		dest[i] = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
