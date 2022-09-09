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
	int n;
	char c;

	n = 0;
	while (n < 16)
	{
		if (n < 10)
			putchar(n + '0');
		else
			c = n + 87;
			putchar(c);
		n++;
	}
	putchar('\n');

	return (0);
}
