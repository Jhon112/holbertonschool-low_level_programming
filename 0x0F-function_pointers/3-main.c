#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - takes args and pass them to fn to find the correct fn to be called
 * @arg: number of args
 * @argv: array of args
 *
 * Return: 0 if correct. otherwise if fails
 */
int main(int args, char *argv[])
{
	int (*f)(int, int);
	int a, b, result;

	if (args != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (((*(argv[2]) == '/') || (*(argv[2]) == '%')) && b == 0)
	{
		puts("Error");
		exit(100);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		puts("Error");
		exit(99);
	}
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
