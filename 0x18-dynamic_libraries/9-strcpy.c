/**
 * _strcpy - copy a string
 * @dest: destiny buffer
 * @src: str to be copied
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + (i + 1)) == 0)
		{
			*(dest + (i + 1)) = 0;
		}
		i++;
	}
	return (dest);
}
