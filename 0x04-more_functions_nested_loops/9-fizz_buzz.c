#include <stdio.h>
/**
 * main - Fizz buzz exercise
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a > 1)
		{
			printf(" ");
		}

		if ((a % 5 == 0) && (a % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
	}
	putchar('\n');
	return (0);
}
