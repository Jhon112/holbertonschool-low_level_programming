/**
 * binary_to_uint - coverts a binary number to an unsigned int
 * @b: pointer to string of 0 & 1 chars
 *
 * Return: converted number
 * 0 if b null or a different char is found
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == 0)
		return (0);

	result = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			result = result * 2 + 1;
		else
			result = result * 2 + 0;
		b++;
	}
	return (result);
}
