#include "holberton.h"
/**
 * *_strncat - concatenates n chars
 * @dest: pointer to dest string
 * @src: pointer to src string(the one to append)
 * @n: limit of chars
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int position;

	i = 0;
	position = 0;
	while (*(dest + i) != 0)
	{
		position++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (*(dest + i) == 0)
		{
			break;
		}
		dest[position] = *(src + i);
		position++;
		i++;
	}
	return (dest);
}
