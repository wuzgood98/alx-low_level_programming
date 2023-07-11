#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: NULL or pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **temp_grid, w, h;

	if (width < 1 || height < 1)
		return (NULL);

	temp_grid = malloc(sizeof(int *) * height);

	if (temp_grid == NULL)
	{
		free(temp_grid);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		temp_grid[w] = malloc(sizeof(int) * width);
		if (temp_grid[w] == NULL)
		{
			for (w--; w >= 0; w--)
				free(temp_grid[w]);
			free(temp_grid);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
		for (h = 0; h < width; h++)
			temp_grid[w][h] = 0;

	return (temp_grid);
}
