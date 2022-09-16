#include "main.h"

/**
 * print_line - print a line
 * @n: recieves an integer parameter
 * Return: does not return a value
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= n; i++)
			_putchar('_');
}
