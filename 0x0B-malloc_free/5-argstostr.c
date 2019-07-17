#include <stdlib.h>

/**
 * get_length - return length of str
 * @str: string to be evaluated
 *
 * Return: length of str
 */
int get_length(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
	}

	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument counter (rows)
 * @av: array of arguments(pointers to strs)
 *
 * Return: Pointer to new string
 * NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, a;
	char *s;
	int length;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}

	i = 0;
	length = 0;
	while (i < ac)
	{
		length += get_length(*(av + i));
		i++;
	}
	s = malloc((sizeof(char) * length) + ac + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	a = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(*(av + i) + j) != 0)
		{
			*(s + a) = *(*(av + i) + j);
			if (*(*(av + i) + (j + 1)) == 0)
			{
				*(s + ++a) = '\n';
			}
			a++;
			j++;
		}
	}
	*(s + a) = '\0';
	return (s);
}
