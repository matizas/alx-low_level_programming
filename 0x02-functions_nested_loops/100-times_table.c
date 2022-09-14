#include "main.h"
void levelOne(int);
void levelTwo(int);
void levelThree(int);

/**
*print_times_table - this function prints n times table
*@n: the function recieve data from the calling program
*Return: 0 if successful
*/

void print_times_table(int n)
{
	int r, c, p;

	if (n >= 0 && n < 16)
	{
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
					levelOne(p);
				}
				else if (p < 100)
				{
					levelTwo(p);
				}
				else
				{
					levelThree(p);
				}
				c++;
			}
			_putchar('\n');
			r++;
		}
	}
}

void levelOne(int n)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(n + '0');
}

void levelTwo(int n)
{
	int w, f;

	_putchar(' ');
	w = n / 10;
	_putchar(w + '0');
	f = n % 10;
	_putchar(f + '0');
}
void levelThree(int n)
{
	int w, f;

	w = n / 100;
	_putchar(w + '0');
	f = n % 100;
	w = f / 10;
	_putchar(w + '0');
	f = f % 10;
	_putchar(f + '0');
}
