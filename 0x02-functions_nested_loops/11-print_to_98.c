#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: initial n value
 *
 * Return: void
 */
void print_to_98(int n)
{
int a;
if (n <= 98)
{
for (a = n; a <= 98; a++)
{
printf("%d", a);
if (a != 98)
{
printf(", ");
}
}
}
else
{
for (a = n; a >= 98; a--)
{
printf("%d", a);
if (a != 98)
{
printf(", ");
}
}
}
printf("\n");
}
