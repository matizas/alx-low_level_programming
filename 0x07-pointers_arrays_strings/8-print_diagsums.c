#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - calculating and displaying sum of diagonals
 * @a: two dimensional array
 * @size: value parameter, size of two dimensional array
 * Return: does not return a value
 */

void print_diagsums(int *a, int size)
{
	int r, c, sum_right, sum_left;

	r = 0;
	sum_right = 0;

	while (r < (size * size))
	{
		sum_right += *(a + r);
		r = r + size + 1;
	}

	c = 0;
	sum_left = 0;
	while (c < (size * size - 1))
	{
		sum_left += *(a + c);
		c = c + size - 1;
	}

	printf("%d, %d\n", sum_right, sum_left);
}
