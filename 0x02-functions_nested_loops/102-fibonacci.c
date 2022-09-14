#include <stdio.h>
#include "main.h"

int main(void)
{
	print_fib();

	return (0);
}

/**
* print_to_98 - this function print natural numbers.
* @n: has an integer parameter n.
* return: a + b if successfull.
*/

void print_fib(void)
{
	int p = 1, c = 2, counter = 2, tmp;

	printf("%d, %d, ", p, c);

	while (counter <= 50)
	{
		tmp = c;
		c = c + p;
		p = tmp;
		
		if (counter != 50)
			printf("%d, ", c);
		else
			printf("%d\n", c);
		
		counter++;   
	}

}
