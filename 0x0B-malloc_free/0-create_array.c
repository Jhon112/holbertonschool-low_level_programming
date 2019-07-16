#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char array will contain
 *
 * Return: pointer to array created
 * NULL if size 0 or if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(sizeof(*s) * size);
	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
