#include <stdlib.h>
/**
 * length_two_strings - get length of two strings
 * @s1: first string to get length of
 * @s2: second string to get length of
 *
 * Return: total length of both strings
 */
int length_two_strings(char *s1, char *s2)
{
	int length;
	int i;

	i = 0;
	length = 0;

	while (*(s1 + i) != 0)
	{
		length++;
		i++;
	}

	while (*(s2 + i) != 0)
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string to add
 * @s2: second string to add
 *
 * Return: pointer to new block in memory
 * Null if no memory available
 */
char *str_concat(char *s1, char *s2)
{
	int length;
	char *s;
	int i;
	int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = length_two_strings(s1, s2);
	s = (char *) malloc((sizeof(char) * length) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	i = 0;

	while (*(s1 + i) != 0)
	{
		s[a] = s1[i];
		i++;
		a++;
	}

	i = 0;
	while (*(s2 + i) != 0)
	{
		s[a] = s2[i];
		a++;
		i++;
	}
	s[a] = '\0';
	return (s);
}
