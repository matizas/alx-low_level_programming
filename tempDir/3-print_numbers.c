#include "main.h"

/**
 * print_numbers - print digits
 *
 * Return: does not return a value
 */

void print_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
