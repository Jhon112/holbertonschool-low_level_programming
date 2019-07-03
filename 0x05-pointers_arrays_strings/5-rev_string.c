#include "holberton.h"
/**
 * rev_string - change the value of a string to the same str in reverse
 * @s: address of the first element in the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int contador;
	int i;
	char c;

	contador = 0;
	while (s[contador] != '\0')
	{
		contador++;
	}

	i = 0;
	while (i < contador)
	{
		contador--;
		c = *(s + i);
		*(s + i) = *(s + contador);
		*(s + contador) = c;
		i++;
	}
}
