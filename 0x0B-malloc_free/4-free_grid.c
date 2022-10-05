#include "main.h"
#include <stdlib.h>
int **alloc_grid(int, int);

/**
 * free_grid - to free alooc_grid 2D array
 * @grid: pointer to 2D array
 * @height: rows of a 2D array
 * Return: does not return a value
 */

void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		height--;
		free(grid[height]);
	}

	free(grid);
}

/**
 * **alloc_grid - printing a 2D array
 * @width: number of column
 * @height: number of rows
 * Return: pointer to a 2D array, else NULL
 */

int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, n;

	if (width < 0 || height < 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}
