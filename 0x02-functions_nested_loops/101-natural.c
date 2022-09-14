#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int num = 1024;

	print_sum(num);

	return (0);
}

/**
 * print_sum - this function print natural numbers
 * @n: recieves a parameter of type integer
 * Return: does not return a value
 */

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
