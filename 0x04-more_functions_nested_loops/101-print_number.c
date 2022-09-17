#include "main.h"

/**
 * prime_number - print an integer value
 * @n: integer parameter
 */

void print_number(int n)
{
	int m, numWeight, countDigits, positiveNum;

	if (n < 0)
	{
		_putchar('-');
		positiveNum = n * -1;
	}

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
