#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: total of other args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	i = 0;

	if (separator == NULL)
		separator = "";
	va_start(nums, n);
	while (i < n)
	{
		printf("%d", va_arg(nums, int));
		if (i + 1 != n)
			printf("%s", separator);
		else
			printf("\n");
		i++;
	}
}
