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
		j = 0;
		while (j < width)
		{
			*(*pgrid + j) = 0;
			j++;
		}
		free(*(pgrid + i));
	}
	free(pgrid);
	return (pgrid);
}
