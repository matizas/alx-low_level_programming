#include "main.h"

/**
*print_alphabet_x10 - this function prints alphaberts 10 times
*Return: 0 if successful
*/

void print_alphabet_x10(void);
{
	int acsii_value = 97, counter = 0;
	char l;

	while (counter < 10)
	{
		while (acsii_value <= 122)
		{
			l = acsii_value;
			_putchar(l);
			acsii_value++;
		}
		_putchar('\n');
		counter++;
	}

	return (0);
}
