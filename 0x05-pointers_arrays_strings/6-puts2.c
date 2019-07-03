#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: pointer to str's first element address
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while (*(str + i) != 0)
	{
		if (a == i)
		{
			_putchar(*(str + a));
			a = a + 2;
		}
		i++;
	}
	_putchar('\n');
}
