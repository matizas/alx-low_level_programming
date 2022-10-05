#include "main.h"
#include <stdlib.h>

/**
 * free_grid - to free alooc_grid 2D array
 * @grid: pointer to 2D array
 * @height: rows of a 2D array
 * Return: does not return a value
 */

void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}
