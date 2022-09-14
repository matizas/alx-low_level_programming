#include "main.h"

/**
*print_times_table - this function prints n times table
*@n - the function recieve data from the calling program
*Return: 0 if successful
*/

void print_times_table(int n)
{
	int w, f, r, c, p;

	r = 0;
	while (r <= n)
	{
		_putchar('0');
		c = 1;
		while (c <= n)
		{
			_putchar(',');
			_putchar(' ');

			p = r * c;

			if (p < 10)
			{
				_putchar(' ');
			}
			else
			{
				w = p / 10;
				_putchar(w + '0');
			}
			f = p % 10;
			_putchar(f + '0');
			c++;
		}
		_putchar('\n');
		r++;
	}
}

