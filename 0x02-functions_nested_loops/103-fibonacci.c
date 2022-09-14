#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int numTerms = 4000000;

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
	int p = 1, c = 2;
	int tmp, total;

	total = c;

	while (c <= n)
	{
		tmp = c;
		c = c + p;
		p = tmp;

		if (c % 2 == 0) 
		{
			total = total + c;
		}
	}
	printf("%d\n", total);
}
