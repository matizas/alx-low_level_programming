#include "main.h"

/**
 * print_chessboard - displaying contents of a 2D array
 * @a: ref parameter, an array of strings
 * Return: does not return anything
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	r = 0;
	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\n');
		r++;
	}
}
