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
	int r, c, sum_right_diag, sum_left_diag;

	r = 0;
	sum_right_diag = 0;

	while (r <= (size * size))
	{
		sum_right_diag = sum_right_diag + a[r];
		r = r + size + 1;
	}

	c = 0;
	sum_left_diag = 0;
	while (c < (size * size - 1))
	{
		sum_left_diag = sum_left_diag + a[c];
		c = c + size - 1;
	}

	printf("%d, %d\n", sum_right_diag, sum_left_diag);
}
