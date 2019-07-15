#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the minimum number of coins
 * @argc: Argument count.
 * @argv: Array of args
 *
 * Return: 0 if success, else 1.
 */
int main(int argc, char *argv[])
{
	int a = 0, par;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	par = atoi(argv[1]);
	while (par > 0)
		if (par >= 25)
			par -= 25, a++;
		else if (par >= 10)
			par -= 10, a++;
		else if (par >= 5)
			par -= 5, a++;
		else if (par >= 2)
			par -= 2, a++;
		else
			par--, a++;
	printf("%d\n", a);
	return (0);
}
