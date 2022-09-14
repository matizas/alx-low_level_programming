#include <stdio.h>
#include "main.h"

/**
* print_sum - this function print natural numbers.
* @n: has an integer parameter n.
* Return: total if successfull.
*/

int main(void)
{
	int num;
	scanf("Enter value: %i", &num);
	print_sum(num);
}

void print_sum(int n)
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
