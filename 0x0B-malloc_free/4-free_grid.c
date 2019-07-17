#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid created. (array of pointers)
 * @height: rows
 *
 * Return: void. Frees memory
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);

}
