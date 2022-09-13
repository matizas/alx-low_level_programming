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
		  Return (1);
		   _putchar('+');
	}
	else if (n == 0)
	{
		  Return (0);
		   _putchar('0');
	}
	else
	{
		  Return (-1);
		   _putchar('-');
	}
}