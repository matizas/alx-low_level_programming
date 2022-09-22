#include "main.h"
/**
 * print_number - uses recursion to print a number
 *
 * @n: takes a value parameter
 * Return: does not return anything
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if ((m / 10) > 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
