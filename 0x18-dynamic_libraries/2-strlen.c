/**
 * _strlen - returns the length of a string
 * @s: address of the first element in the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int contador;

	contador = 0;
	while (*s != 0)
	{
		contador++;
		s++;
	}
	return (contador);
}
