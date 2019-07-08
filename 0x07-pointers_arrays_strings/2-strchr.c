#include "holberton.h"
/**
 * _strchr - locates a char in a str
 * @s: string where  we'll search
 * @c: char to be searched
 *
 * Return: pointer to the first occurrente
 * 0 if not found
 */
char *_strchr(char *s, char c)
{
	int len;
	int i;
	char *p;

	for (len = 0; *(s + len) != 0; len++)
	{
	}
	i = 0;
	while (i <= len)
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		if (*s == 0 && *s != c)
		{
			return (0);
		}
		s++;
		i++;
	}
	return (p);
}
