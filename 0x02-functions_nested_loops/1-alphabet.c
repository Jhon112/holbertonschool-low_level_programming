#include "holberton.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: 0 (Success)
 */
int print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
return (0);
}
