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

	n = 97;
	while (n < 123)
	{
		c = n;
		putchar(c);
		n++;
	}

	n = 65;
	while (n < 91)
	{
		c = n;
		putchar(c);
		n++;
	}
	putchar('\n');

	return (0);
}
