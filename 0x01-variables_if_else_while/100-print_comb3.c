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
	int n, m;

	n = 0;
	while (n < 10)
	{
		m = n + 1;
		while (m < 10)
		{
			putchar(n + '0');
			putchar(m + '0');
			if ((n + m) != 17)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
