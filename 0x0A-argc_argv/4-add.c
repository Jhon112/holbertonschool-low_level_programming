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
	int rest, j, i;

	rest = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (isdigit(*(*(argv + i) + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		rest += atoi(*(argv + i));
	}
	printf("%d\n", rest);
	return (rest);
}
