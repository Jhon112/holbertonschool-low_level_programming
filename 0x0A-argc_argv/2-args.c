#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 * @argc: The count of the arguments
 * @argv: array containing args
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
