#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a;
	int b;

	a = 0;
	while (*(str + a) != 0)
	{
		a++;
	}
	if ((a % 2) == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a - 1) / 2;
		b++;
	}

	while (b < a)
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
