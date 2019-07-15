#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: The count of the arguments
 * @argv: Array containing args
 *
 * Return: On success 0.
 * On error, 1 is returned
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
}
