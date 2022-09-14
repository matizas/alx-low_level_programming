#include <stdio.h>
#include "main.h"

/**
* print_to_98 - this function print natural numbers.
* @n: has an integer parameter n.
* Return: total if successfull.
*/

void sum(int n)
{
	int total = 0;

	while (n > 2 && n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			total = total + n;
		}
		
		n++;
	}
	
	printf("%d\n", total);
}
