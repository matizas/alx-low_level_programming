#include <stdlib.h>
#include "main.h"
void print_display(int);

/**
 * print_number - print an integer value
 * @n: integer parameter
 */

void print_number(int n)
{
	int firstValue, secondValue, positiveNum;

	if (n < 0)
	{
		_putchar(45);
		positiveNum = abs(n);
	}

	print_display(positiveNum);
}

/**
 * print_display - to display digits
 * @n: integere paramemter
 */

void print_display(int n)
{
	int m;
	int countDigits;
	int positiveNum;
	int numWeight;

	positiveNum = n;
	countDigits = 0;
	do {
		n = n / 10;
		countDigits++;
	} while (n != 0);

	numWeight = 1;
	for (m = 1; m <= countDigits - 1; m++)
		numWeight = numWeight * 10;

	while (positiveNum > 10)
	{
		m = positiveNum / numWeight;
		_putchar(m + '0');
		positiveNum = positiveNum % numWeight;
		numWeight = numWeight / 10;
	}

	_putchar(positiveNum + '0');
}
