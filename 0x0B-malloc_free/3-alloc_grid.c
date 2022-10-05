#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - two dimensional array
 * @width: columns of the 2D array
 * @height: rows of the 2D array
 * Return: pointer to the array and NULL
 */

int **alloc_grid(int width, int height)
{
	int **arrNum;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrNum = malloc(sizeof(int *) * height);
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
			while (row >= 0)
			{
				free(arrNum[row]);
				row--;
			}
			free(arrNum);
			return (NULL);
		}

		for (col = 0; col < width; col++)
		{
			arrNum[row][col] = 0;
		}
	}
	return (arrNum);
}
