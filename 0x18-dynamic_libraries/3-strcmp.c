/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative numb if s1 major than s2
 * positive numb if s1 major s2
 * 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int i, a;

	for (i = 0; *(s1 + i) != 0; i++)
	{
	}

	for (a = 0; a < i; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
