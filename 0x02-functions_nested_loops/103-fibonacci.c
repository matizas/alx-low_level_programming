#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	long numTerms = 4000000;

	print_sum_fib(numTerms);

	return (0);
}

/**
* print_sum_fib - this function print total of fibonacci terms..
* Description: Print fibonacci sequence
* @n: has a long parameter n.
* return: 0 if successfull.
*/

void print_sum_fib(long n)
{
	long p = 1, c = 2;
	long tmp, total, countTerm;

	total = c;
	countTerm = 2;

	while (c < n)
	{
		countTerm++;

		tmp = c;
		c = c + p;
		p = tmp;

		if (countTerm % 2 == 0)
			total = total + c;
	}
	printf("%ld\n", total);
}
