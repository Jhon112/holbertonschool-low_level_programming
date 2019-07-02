#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: address of the first element in the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int contador;
	int i;

	contador = 0;
	while (s[contador] != '\0')
	{
		contador++;
	}

	i = 0;
	while (i < contador)
	{
		contador--;
		_putchar(s[contador]);
	}
	_putchar('\n');
}
