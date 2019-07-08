/**
 * _strpbrk - searches a str for any of a set of cha
 * @s: main string to be evaluated
 * @accept: string containing the list to match
 *
 * Return: pointer to the first byte that matchs
 * null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *n;
	int a;

	n = 0;
	while (*s != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (n);
}
