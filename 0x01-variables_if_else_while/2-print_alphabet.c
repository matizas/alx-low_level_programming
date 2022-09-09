#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	return (0);
}
