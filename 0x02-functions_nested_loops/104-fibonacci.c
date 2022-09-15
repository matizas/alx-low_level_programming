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
	unsigned long w, r;
	int counter = 2;

	printf("%ld, %ld, ", p, c);

	while (counter < n - 7)
	{
		tmp = c;
		c = c + p;
		p = tmp;

		if(counter != n - 1)
		{
			if (counter < 91)
			{
				printf("%ld, ", c);
			}
			else
			{
				w = c / 1000;
				r = c % 1000;
				printf("%ld", w);
				printf("%ld, ",r);
			}
		}
		else
		{
			w = c / 1000;
			r = c % 1000;
			printf("%ld", w);
			printf("%ld\n", r);
		}

		counter++;
	}
}
