#include "main.h"

/**
* print_to_98 - this function print natural numbers.
* @n: has an integer parameter n.
* return: a + b if successfull.
*/

void fib(void)
{
	int p = 1, c = 2, counter = 2, t;

	_putchar(p + '0');
	_putchar(',');
	_putchar(' ');

	_putchar(c + '0');
	_putchar(',');
	_putchar(' ');

	while (counter <= 50)
	{
		t = c;
		c = c + p;
		p = t;
		
		_putchar(c + '0');
		_putchar(',');
		_putchar(' ');
		
		counter++;   
	}

}
