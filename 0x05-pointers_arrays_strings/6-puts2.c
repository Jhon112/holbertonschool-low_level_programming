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

	a = 0;
	while (*(str + a) != 0)
	{
		_putchar(*(str + a));
		a = a + 2;
	}
	_putchar('\n');
}
