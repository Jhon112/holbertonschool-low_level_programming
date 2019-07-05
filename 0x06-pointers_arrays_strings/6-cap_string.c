/**
 * cap_string - Capitalize all words of a str
 * @s: string
 *
 * Return: string modified
 */
char *cap_string(char *s)
{
	int i;
	int a;
	char *separators = " \t\n,;.!?\"(){}";

	i = 0;
	if (*(s + 0) >= 97 && *(s + 0) <= 122)
	{
		*(s + 0) = *(s + 0) - 97 + 65;
	}
	while (*(s + i) != 0)
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + i) == *(separators + a))
			{
				if (*(s + (i + 1)) >= 97 && *(s + (i + 1)) <= 122)
				{
					*(s + (i + 1)) = *(s + (i + 1)) - 97 + 65;
				}
			}
		}
		i++;
	}

	return (s);
}
