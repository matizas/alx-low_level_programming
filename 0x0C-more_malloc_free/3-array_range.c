#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creating memory to store an array of integers from min to max
 * @min: the lowest element of the array
 * @max: the largest element of the array
 * Return: an address to memory allocated to the array.
 */

int *array_range(int min, int max)
{
	int row, total_size;
	int *arr;

	if (min > max)
		return (NULL);

	total_size = sizeof(int) * (max - min + 1);
	arr = malloc(total_size);

	if (arr == NULL)
		return (NULL);

	row = 0;
	while (row < total_size && min <= max)
	{
		arr[row] = min;
		row++;
		min++;
	}

	return (arr);
}
