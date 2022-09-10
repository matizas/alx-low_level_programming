#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point of a program
 *
 * Description: print whether the number is positive or negative.
 * Return: 0 if successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int x, y, m, n;

	m = 0;
	while (m < 10)
	{
		n = m;
		while (n < 10)
		{
			y = n + 1;
			while (y < 10)
			{
				x = m + 1;
				while (x < 10)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(',');
					putchar(' ');

					putchar(y + '0');
					putchar(x + '0');
					putchar(',');
					putchar(' ');
					x++;
				}
				y++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');

	return (0);
}
