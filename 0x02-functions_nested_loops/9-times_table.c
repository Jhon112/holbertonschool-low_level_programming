#include "holberton.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int a;
int b;
int r;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
r = a * b;
if (r <= 9)
{
if (b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(r + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
}
_putchar('\n');
}
}
