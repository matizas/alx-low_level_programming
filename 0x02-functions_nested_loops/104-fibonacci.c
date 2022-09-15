#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int numTerms = 98;

	print_fib_terms(numTerms);

	return (0);
}

/**
* print_fib_terms - this function print fibonacci sequence.
* Description: Print fibonacci sequence
* @n: has an integer parameter n.
* return: 0 if successfull.
*/

void print_fib_terms(int n)
{
	unsigned long p = 1, c = 2, tmp;
	/*unsigned long w, r;*/
	int counter = 2;

	printf("%ld, %ld, ", p, c);

	while (counter < n - 7)
	{
		tmp = c;
		c = c + p;
		p = tmp;

		printf("%ld, ", c);

		counter++;
	}

	print_final_sprint(p, c);
}

void print_final_sprint(long long m, long long n)
{
	/*unsigned long long w, r, x, y;
	int counter = 92;

	w = m / 1000000000;
	r = m % 1000000000;

	x = n / 1000000000;
	y = n % 1000000000;*/

	long long next, tmp;

	while (counter < 99)
	{
		next = m + n;
		tmp = n;
		m = tmp;
		n = next;

		if (counter != 98)
		{
			printf("%lld, ", next);
		}
		else
		{
			printf("%lld\n", next);
		}
		counter++;
	}

}
