#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: The count of the arguments
 * @argv: An array containing the program command line args
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
