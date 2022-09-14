#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	long numTerms = 4000000;

	print_fib(numTerms);

	return (0);
}

/**
* print_fib - this function print total of fibonacci terms..
* Description: Print fibonacci sequence
* @n: has a long parameter n.
* return: 0 if successfull.
*/

void print_fib(long n)
{
	long p = 1, c = 2, counter = 2, tmp, total;

	total = p + c;

	while (c < n)
	{
		tmp = c;
		c = c + p;
		p = tmp;

		total = total + c;

		counter++;
	}
	printf("%ld\n", total);
}
