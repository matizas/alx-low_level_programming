#include "main.h"

/**
* int print_sign(int n) - this function prints the sign of a number
* @n: the function has a parameter n of type integer
* Return: 0 if successful
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
		_putchar(1 + '0');
	}
	else if (n == 0)
	{
	       	return (0);
		_putchar('0');
		_putchar(0 + '0');
	}
	else
	{
		return (-1);
		_putchar('-');
		_putchar(1 + '0');
	}
}
