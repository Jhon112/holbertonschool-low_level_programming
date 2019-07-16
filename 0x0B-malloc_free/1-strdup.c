#include <stdlib.h>
/**
 * _strdup - returns a pointer to a copy of a str
 * @str: str to be copied
 *
 * Return: pointer to memory block created
 * Null if str=NULL or if no memory is available
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		length = 0;
		while (*(str + i) != 0)
		{
			length++;
			i++;
		}
	}


	s = (char *) malloc((sizeof(*s) * length) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}
