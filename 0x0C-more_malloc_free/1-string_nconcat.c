#include <stdlib.h>
/**
 * get_length - get length of str
 * @str: str to be evaluated
 *
 * Return: length of str
 */
int get_length(char *str)
{
	int l;

	for (l = 0; str[l] != 0; l++)
	{
	}
	return (l);
}


/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated. It's entirely copied
 * @s2: second string. If length is major than n, only n chars are copied
 * @n: amount of chars to be copied from s2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length;
	unsigned int i;
	int a;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = get_length(s2);
	if (length > n)
		length = n;

	length += get_length(s1);
	s = malloc((sizeof(*s) * length) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	a = 0;
	while (*(s1 + i) != 0)
	{
		s[a] = s1[i];
		i++;
		a++;
	}
	i = 0;
	while (*(s2 + i) != 0)
	{
		if (i == n)
			break;
		s[a] = s2[i];
		i++;
		a++;
	}
	s[a] = '\0';
	return (s);

}
