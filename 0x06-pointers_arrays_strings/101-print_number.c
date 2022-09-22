#include "main.h"
/**
 * print_number - uses recursion to print a number
 *
 * @n: takes a value parameter
 * Return: does not return anything
 */

void print_number(int n)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
