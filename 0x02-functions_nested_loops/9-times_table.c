#include "main.h"

/**
*void times_table - this function prints 9 times table
*@n: the function has a parameter n of type integer
*Return: 0 if successful
*/

void times_table(void)
{
	int w, f, r, c, p;

	r = 0;
	while(r < 10)
	{
		_putchar('0');
		c = 1;
		while (c < 10)
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

