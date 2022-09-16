#include <stdio.h>
#include "main.h"
void prime_factors(long int);

/**
 * main - to call a method fizz_buzz
 *
 * Return: 0 if successful
 */

int main(void)
{
	long int num = 612852475143;

	prime_factors(num);

	return (0);
}

/**
 * prime_factors - determine prime factors
 *@n: parameter long long
 *
 * Return: does not return a value
 */

void prime_factors(long int n)
{

	long int i, j, f;
	long int w = n;

	for (i = 1; i <= w; i++)
	{
		f = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				f++;
			}
		}
		if (f == 2)
		{
			while (w >= 2)
			{
				if (w % i == 0)
				{
					printf("%ld", i);
					w = w / i;
				}
				else
				{
					break;
				}
			}
		}
	}
}
