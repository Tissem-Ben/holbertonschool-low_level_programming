#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2D.
 * @width: the width of the grid
 * @height: the height of the grid.
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{

		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[--i]);
			free(grid);
			return (NULL);
		}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
	}
	return (grid);
}
