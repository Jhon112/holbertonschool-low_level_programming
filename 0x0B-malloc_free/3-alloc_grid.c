#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional int arr
 * @width: width of array (cols)
 * @height: heigth of array (rows)
 *
 * Return: pointer to pointer that points first array
 * NULL if width or height are 0 or less
 */
int **alloc_grid(int width, int height)
{
	int i;
	int a;
	int j;
	int **pgrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	pgrid = malloc(sizeof(int *) * height);

	if (pgrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(pgrid + i) = malloc(sizeof(int) * width);
		if (*(pgrid + i) == NULL)
		{
			free(pgrid);
			a = 0;
			while (a < i)
			{
				free(*(pgrid + a));
				a++;
			}
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			pgrid[i][j] = 0;
			j++;
		}
	}
	return (pgrid);
}
