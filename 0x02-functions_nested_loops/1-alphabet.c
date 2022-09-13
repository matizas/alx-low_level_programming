#include "main.h"

/**
 * *main - print alphaberts
 * *Return: 0 if successful
 * */

int main(void)
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

	return (0);
}
