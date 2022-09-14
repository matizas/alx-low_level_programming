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
		c = 0;
		while (c < 10)
		{
			p = r * c;
			if (p < 10)
			{
				_putchar(p + '0');
			}
			else
			{
				w = p / 10;
				f = p % 10;
				_putchar(w + '0');
				_putchar(f + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (p < 10)
				{
					_putchar(' ');
				}
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}

