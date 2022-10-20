#include "main.h"

/**
 * print_most_numbers - print digits
 *
 * Return: does not return a value
 */

void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
