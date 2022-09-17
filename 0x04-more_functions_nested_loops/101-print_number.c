#include "main.h"

/**
 * prime_number - print an integer value
 * @n: integer parameter
 */

void print_number(int n)
{
	unsigned int w;

	if (n < 0)
	{
		w = -n;
		_putchar('_');
	}
	else
	{
		w = n;
	}

	if (w / 10)
	{
		w = w / 10;
		print_number(w);
	}

	w = w % 10;
	_putchar(w + '0');
}
