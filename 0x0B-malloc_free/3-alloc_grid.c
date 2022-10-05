#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - two dimensional array
 * @width: columns of the 2D array
 * @height: rows of the 2D array
 * Return: pointer to 2D array else NULL
 */

int **alloc_grid(int width, int height)
{
	int **arrNum;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrNum = malloc(sizeof(int) * height);

	if (arrNum == NULL)
	{
		free(arrNum);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		arrNum[row] = malloc(sizeof(int) * width);
		if (arrNum == NULL)
		{
			free(arrNum);
			return (NULL);
		}

		for (col = 0; col < width; col++)
		{
			arrNum[row][col] = 0;
		}
	}
	if (row < height)
	{
		free(arrNum);
		return (NULL);
	}
	else
		return (arrNum);
}
