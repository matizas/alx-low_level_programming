#include "main.h"

/**
* print_to_98 - this function print natural numbers.
* @n: has an integer parameter n.
* Return: total if successfull.
*/

int sum(void)
{
	int n = 1024, total = 0;

	while (n > 2)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			total = total + n;
		}
		
		n--;
	}
	
	return (total);
}
