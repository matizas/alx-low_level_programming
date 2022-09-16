#include "main.h"

/**
 * more_numbers - print digits
 *
 * Return: does not return a value
 */

void more_numbers(void)
{
	int i, j, w, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			w = j / 10;
			r = j % 10;

			if (j > 9)
				_putchar(w + '0');
			_putchar(r + '0');
		}
		_putchar('\n');
	}
}
