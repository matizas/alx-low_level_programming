#include "main.h"

/**
 *print_alphabert - this method print alphaberts
 *Return: 0 if successful
 */

void print_alphabert(void)
{
	int acsii_value = 97;
	char l;

	while (acsii_value <= 122)
	{
		l = acsii_value;
		_putchar(l);
		acsii_value++;
	}
	_putchar('\n');
}
