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

	n = 122;
	while (n > 96)
	{
		c = n;
		putchar(c);
		n--;
	}
	putchar('\n');

	return (0);
}
