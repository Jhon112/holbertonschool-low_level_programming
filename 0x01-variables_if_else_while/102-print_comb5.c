#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
int d;

for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = a; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
if ((d <= b) && (c == a))
{
continue;
}
else
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if ((b != 56) || (a != 57) || (d != 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
