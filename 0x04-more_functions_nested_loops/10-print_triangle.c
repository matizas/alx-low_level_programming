#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: gets an integer
 *
 * Return: does not return a value
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(32);
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
