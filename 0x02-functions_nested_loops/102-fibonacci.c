#include <stdio.h>
#include "main.h"

int main(void)
{
	int numTerms = 50;

	print_fib(numTerms);

	return (0);
}

/**
* print_to_98 - this function print natural numbers.
* @n: has an integer parameter n.
* return: a + b if successfull.
*/

void print_fib(int n)
{
	long p = 1, c = 2, counter = 2, tmp;

	printf("%ld, %ld, ", p, c);

	while (counter <= n)
	{
		tmp = c;
		c = c + p;
		p = tmp;
		
		if (counter != n)
			printf("%ld, ", c);
		else
			printf("%ld\n", c);
		
		counter++;   
	}

}
