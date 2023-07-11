#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional and grid previously created by
 * alloc_grid function.
 * @grid: grid to free.
 * @height: height of grid.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
