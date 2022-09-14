#include "main.h"

/**
* print_to_98 - this function print natural numbers.
* @n: has an integer parameter n.
* return: 0 if successfull.
*/

void print_to_98(int n)
{
	int w, r;

	while (n <= 98)
	{
		if (n >= 0)
		{
			if (n != 98)
			{
				if (n < 10)
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					w = n / 10;
					r = n % 10;
					_putchar(w + '0');
					_putchar(r + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				w = n / 10;
				r = n % 10;
				_putchar(w + '0');
				_putchar(r + '0');
			}
		}
		else if(n < 0)
		{
			if(n
		n++;
	}
	_putchar('\n');
}
