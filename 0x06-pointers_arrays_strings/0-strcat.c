#include "holberton.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer to dest string
 * @src: pointer to src string(the one to append)
 *
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
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
	while (*(src + i) != 0)
	{
		dest[position] = *(src + i);
		position++;
		i++;
	}
	return (dest);
}
