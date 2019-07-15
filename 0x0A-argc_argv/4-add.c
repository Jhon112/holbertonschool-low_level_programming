#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Calculate the lenght of a string
 * @argc: The count of the arguments
 * @argv: array of args
 *
 * Return: sum of nums
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;
	char *ar;

	while (i < argc)
	{
		ar = argv[i];
		while (*ar)
			if (!isdigit(*ar++))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i++]);
	}
	printf("%d\n", sum);
	return (0);
}
