#include "main.h"

/**
* void jack_bauer - this function prints every minute
* No parameter passed in this function.
* Return: 0 if successfull. 
*/

void jack_bauer(void)
{
	int h, m, hh, mm;
	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			hh = h / 10;
			mm = h % 10;
			_putchar(hh + '0');
			_putchar(mm + '0');
			_putchar(':');

			hh = m / 10;
			mm = m % 10;

			_putchar(hh + '0');
			_putchar(mm + '0');
			_putchar('\n');

			m++;
		}
		h++;
	}
}
