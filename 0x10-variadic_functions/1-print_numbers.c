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
	va_start(nums, n);
	while (i < n)
	{
		if (separator == NULL || i == (n - 1))
		{
			printf("%d", va_arg(nums, int));
		}
		else
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
		i++;
	}
	printf("\n");
	va_end(nums);
}
