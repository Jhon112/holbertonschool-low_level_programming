/**
 * string_toupper - Changes lowercase letters of string to uppercase
 * @s: string
 *
 * Return: string modified
 */
char *string_toupper(char *s)
{
	int i;
	int dis;
	int r;

	i = 0;
	while (*(s + i) != 0)
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
		{
			dis = *(s + i) - 97;
			r = dis + 65;
			*(s + i) = r;
		}
		i++;
	}
	return (s);
}
