#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: total of other args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *str;

	i = 0;

	va_start(strs, n);
	while (i < n)
	{
		str = va_arg(strs, char *);
		if (str == NULL)
			printf("%p", str);
		else
			printf("%s", str);
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strs);
}
