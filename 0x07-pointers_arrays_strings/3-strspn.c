/**
 * _strspn - gets the length of a prefix substring
 * @s: main string to be evaluated
 * @accept: string containing the list to match
 *
 * Return: n - number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int a;

	n = 0;
	while (*s != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			if (accept[a + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
