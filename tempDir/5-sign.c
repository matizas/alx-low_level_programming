#include "main.h"

/**
* print_sign - this function prints the sign of a number
* @n: the function has a parameter n of type integer
* Return: 0 if successful
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}