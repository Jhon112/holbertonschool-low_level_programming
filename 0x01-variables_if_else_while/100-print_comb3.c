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

for (a = 48; a <= 57; a++)
{
for (b = a + 1; b <= 57; b++)
{
putchar(a);
putchar(b);
if ((b != 57) || (a != 56))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
