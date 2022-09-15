#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int numTerms = 98;

	print_fib98(numTerms);

	return (0);
}

/**
* print_fib98 - this function print fibonacci sequence.
* Description: Print fibonacci sequence
* @n: has an integer parameter n.
* return: 0 if successfull.
*/

void print_fib98(int n)
{
	long p = 1, c = 2, counter = 2, tmp;

	printf("%ld, %ld, ", p, c);

	while (counter < n)
	{
		tmp = c;
		c = c + p;
		p = tmp;

		if (counter != n - 1)
			printf("%ld, ", c);
		else
			printf("%ld\n", c);

		counter++;
	}
}
