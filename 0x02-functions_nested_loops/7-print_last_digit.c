nclude "main.h"

/**
*print_last_digit - this function prints the last digit
*@n: the function has a parameter n of type integer
*Return: 0 if successful
*/

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
