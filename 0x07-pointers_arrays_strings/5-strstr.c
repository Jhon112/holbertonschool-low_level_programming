/**
 * _strstr - locates a substring.
 * @haystack: main string to be evaluated
 * @needle: string to be searched within haystack
 *
 * Return: pointer to the first char matched
 * null if not found
 */
char *_strstr(char *haystack, char *needle)
{

	char **fc;
	int a;
	char *p = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			fc = &haystack;
			for (a = 1; *(needle + a) != '\0'; a++)
			{
				if (*(needle + a) != *(haystack + a))
				{
					break;
				}
				if (*(needle + a + 1) == 0)
				{
					return (*fc);
				}
			}
		}
		haystack++;
	}
	return (p);
}
